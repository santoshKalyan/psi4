C  Copyright (c) 2003-2010 University of Florida
C
C  This program is free software; you can redistribute it and/or modify
C  it under the terms of the GNU General Public License as published by
C  the Free Software Foundation; either version 2 of the License, or
C  (at your option) any later version.

C  This program is distributed in the hope that it will be useful,
C  but WITHOUT ANY WARRANTY; without even the implied warranty of
C  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
C  GNU General Public License for more details.

C  The GNU General Public License is included in this distribution
C  in the file COPYRIGHT.
         SUBROUTINE  OED__KIN_INT1D_TO_A0
     +
     +                    ( SHELLA,
     +                      ATOMIC,
     +                      NEXP,
     +                      NXYZA,
     +                      KIN1DX,KIN1DY,KIN1DZ,
     +                      OVL1DX,OVL1DY,OVL1DZ,
     +                      TEMP1,TEMP2,
     +                      SCALE,
     +
     +                                BATCH )
     +
C------------------------------------------------------------------------
C  OPERATION   : OED__KIN_INT1D_TO_A0
C  MODULE      : ONE ELECTRON INTEGRALS DIRECT
C  MODULE-ID   : OED
C  SUBROUTINES : none
C  DESCRIPTION : This routine assembles the set of batches of cartesian
C                kinetic integrals [A|0] or [0|A], adding up all
C                contributions from all the kinetic and overlap 1D
C                integrals:
C
C                        X = KIN (XA) * OVL (YA) * OVL (ZA)
C                        Y = OVL (XA) * KIN (YA) * OVL (ZA)
C                        Z = OVL (XA) * OVL (YA) * KIN (ZA)
C
C                    [A|0] = [0|A] = [XA,YA,ZA] = X + Y + Z
C
C                The routine uses the reduced Rys multiplication scheme
C                as suggested in R.Lindh, U.Ryu and B.Liu, JCP 95, 5889.
C                This scheme reuses intermediate products between the
C                kinetic and overlap 1DX integrals with the scaling
C                factors.
C
C
C                  Input:
C
C                    SHELLA      =  shell type for contracted shell A
C                    ATOMIC      =  indicates, if purely atomic [A|0]
C                                   or [0|A] integrals will be
C                                   evaluated
C                    NEXP        =  current # of exponent pairs
C                    NXYZx       =  # of cartesian monomials for
C                                   shell A
C                    KIN1Dx      =  all current kinetic 1D integrals
C                                   for each cartesian component
C                                   x = X,Y,Z
C                    OVL1Dx      =  all current overlap 1D integrals
C                                   for each cartesian component
C                                   x = X,Y,Z
C                    TEMP1(2)    =  scratch arrays holding intermediate
C                                   1DX kinetic and overlap integral
C                                   times scaling factor products
C                    SCALE       =  the NEXP scaling factors
C
C
C                  Output:
C
C                    BATCH       =  batch of primitive cartesian [A|0]
C                                   or [0|A] kinetic integrals
C                                   corresponding to all current
C                                   exponent pairs
C
C
C  AUTHOR      : Norbert Flocke
C------------------------------------------------------------------------
C
C
C             ...include files and declare variables.
C
C
         IMPLICIT    NONE

         LOGICAL     ATOMIC

         INTEGER     I,N
         INTEGER     NEXP
         INTEGER     NXYZA
         INTEGER     SHELLA
         INTEGER     XA,YA,ZA
         INTEGER     YAMAX

         DOUBLE PRECISION  X,Y,Z
         DOUBLE PRECISION  ZERO

         DOUBLE PRECISION  SCALE (1:NEXP)
         DOUBLE PRECISION  TEMP1 (1:NEXP)
         DOUBLE PRECISION  TEMP2 (1:NEXP)

         DOUBLE PRECISION  BATCH (1:NEXP,1:NXYZA)

         DOUBLE PRECISION  KIN1DX (1:NEXP,0:SHELLA)
         DOUBLE PRECISION  KIN1DY (1:NEXP,0:SHELLA)
         DOUBLE PRECISION  KIN1DZ (1:NEXP,0:SHELLA)

         DOUBLE PRECISION  OVL1DX (1:NEXP,0:SHELLA+2,0:1)
         DOUBLE PRECISION  OVL1DY (1:NEXP,0:SHELLA+2,0:1)
         DOUBLE PRECISION  OVL1DZ (1:NEXP,0:SHELLA+2,0:1)

         PARAMETER  (ZERO  =  0.D0)
C
C
C------------------------------------------------------------------------
C
C
C             ...the atomic case. Outer loop is over x contributions,
C                inner loop over y,z contributions. Skip any odd
C                and x,y and z contributions.
C
C
         IF (ATOMIC) THEN

             DO I = 1,NXYZA
             DO N = 1,NEXP
                BATCH (N,I) = ZERO
             END DO
             END DO

             I = 0
             DO 100 XA = SHELLA,0,-1
                YAMAX = SHELLA - XA

                IF (MOD (XA,2).NE.0) THEN
                    I = I + YAMAX + 1
                ELSE
                    IF (XA.GT.0) THEN
                        DO N = 1,NEXP
                           TEMP1 (N) = SCALE (N) * KIN1DX (N,XA)
                           TEMP2 (N) = SCALE (N) * OVL1DX (N,XA,0)
                        END DO
                    ELSE
                        DO N = 1,NEXP
                           TEMP1 (N) = SCALE (N) * KIN1DX (N,XA)
                           TEMP2 (N) = SCALE (N)
                        END DO
                    END IF

                    DO 110 YA = YAMAX,0,-1
                       I = I + 1
                       ZA = YAMAX - YA

                       IF (MOD (YA,2).EQ.0 .AND. MOD (ZA,2).EQ.0) THEN

                           IF (YA.GT.0 .AND. ZA.GT.0) THEN

                               DO N = 1,NEXP
                                  X = TEMP1 (N) * OVL1DY (N,YA,0)
     +                                          * OVL1DZ (N,ZA,0)
                                  Y = TEMP2 (N) * KIN1DY (N,YA)
     +                                          * OVL1DZ (N,ZA,0)
                                  Z = TEMP2 (N) * OVL1DY (N,YA,0)
     +                                          * KIN1DZ (N,ZA)
                                  BATCH (N,I) = X + Y + Z
                               END DO

                           ELSE IF (YA.GT.0) THEN

                               DO N = 1,NEXP
                                  X = TEMP1 (N) * OVL1DY (N,YA,0)
                                  Y = TEMP2 (N) * KIN1DY (N,YA)
                                  Z = TEMP2 (N) * OVL1DY (N,YA,0)
     +                                          * KIN1DZ (N,ZA)
                                  BATCH (N,I) = X + Y + Z
                               END DO

                           ELSE IF (ZA.GT.0) THEN

                               DO N = 1,NEXP
                                  X = TEMP1 (N) * OVL1DZ (N,ZA,0)
                                  Y = TEMP2 (N) * KIN1DY (N,YA)
     +                                          * OVL1DZ (N,ZA,0)
                                  Z = TEMP2 (N) * KIN1DZ (N,ZA)
                                  BATCH (N,I) = X + Y + Z
                               END DO

                           ELSE

                               DO N = 1,NEXP
                                  X = TEMP1 (N)
                                  Y = TEMP2 (N) * KIN1DY (N,YA)
                                  Z = TEMP2 (N) * KIN1DZ (N,ZA)
                                  BATCH (N,I) = X + Y + Z
                               END DO

                           END IF

                       END IF

  110               CONTINUE
                END IF

  100        CONTINUE

         ELSE
C
C
C             ...the nonatomic case. Outer loop is over x contributions,
C                inner loop over y,z contributions.
C
C
             I = 0
             DO 200 XA = SHELLA,0,-1
                YAMAX = SHELLA - XA

                IF (XA.GT.0) THEN
                    DO N = 1,NEXP
                       TEMP1 (N) = SCALE (N) * KIN1DX (N,XA)
                       TEMP2 (N) = SCALE (N) * OVL1DX (N,XA,0)
                    END DO
                ELSE
                    DO N = 1,NEXP
                       TEMP1 (N) = SCALE (N) * KIN1DX (N,XA)
                       TEMP2 (N) = SCALE (N)
                    END DO
                END IF

                DO 210 YA = YAMAX,0,-1
                   I = I + 1
                   ZA = YAMAX - YA

                   IF (YA.GT.0 .AND. ZA.GT.0) THEN

                       DO N = 1,NEXP
                          X = TEMP1 (N) * OVL1DY (N,YA,0)
     +                                  * OVL1DZ (N,ZA,0)
                          Y = TEMP2 (N) * KIN1DY (N,YA)
     +                                  * OVL1DZ (N,ZA,0)
                          Z = TEMP2 (N) * OVL1DY (N,YA,0)
     +                                  * KIN1DZ (N,ZA)
                          BATCH (N,I) = X + Y + Z
                       END DO

                   ELSE IF (YA.GT.0) THEN

                       DO N = 1,NEXP
                          X = TEMP1 (N) * OVL1DY (N,YA,0)
                          Y = TEMP2 (N) * KIN1DY (N,YA)
                          Z = TEMP2 (N) * OVL1DY (N,YA,0)
     +                                  * KIN1DZ (N,ZA)
                          BATCH (N,I) = X + Y + Z
                       END DO

                   ELSE IF (ZA.GT.0) THEN

                       DO N = 1,NEXP
                          X = TEMP1 (N) * OVL1DZ (N,ZA,0)
                          Y = TEMP2 (N) * KIN1DY (N,YA)
     +                                  * OVL1DZ (N,ZA,0)
                          Z = TEMP2 (N) * KIN1DZ (N,ZA)
                          BATCH (N,I) = X + Y + Z
                       END DO

                   ELSE

                       DO N = 1,NEXP
                          X = TEMP1 (N)
                          Y = TEMP2 (N) * KIN1DY (N,YA)
                          Z = TEMP2 (N) * KIN1DZ (N,ZA)
                          BATCH (N,I) = X + Y + Z
                       END DO

                   END IF

  210           CONTINUE
  200        CONTINUE

         END IF
C
C
C             ...ready!
C
C
         RETURN
         END
