DATA SEGMENT 
B DD ?
C DB ?
DATA ENDS
CODE SEGEMENT
ASSUME CS:CODE, DS:DATA
MAIN :
MOV AX,DATA
MOV DS,AX
etiquette 0 : MOV DX, 5
etiquette 1 : MOV DX, a
etiquette 2 : MOV DX, B
etiquette 3 : ADD AX, 2
MOV AX, T2
ADD AX, 2
etiquette 4 : MOV DX, T2
etiquette 5 : MOV AX, 7
SUB AX, 2
etiquette 6 : CMP AX, 0
JL etiquette 9
etiquette 7 : MOV DX, 3
etiquette 8 : JMP etiquette 10
etiquette 9 : MOV DX, 5
etiquette 10 : MOV AX, 7
SUB AX, 5
etiquette 11 : CMP AX, 0
JL etiquette 18
etiquette 12 : MOV DX, -10
etiquette 13 : MOV AX, 3
SUB AX, 5
etiquette 14 : CMP AX, 0
JL etiquette 17
etiquette 15 : MOV AX, 10
DIV AX, 6
etiquette 16 : MOV DX, T7
etiquette 17 : JMP etiquette 28
etiquette 18 : MOV AX, 7
SUB AX, 5
etiquette 19 : CMP AX, 0
JG etiquette 26
etiquette 20 : MOV DX, 10
etiquette 21 : MOV AX, 15
DIV AX, 18
etiquette 22 : ADD AX, 10
etiquette 23 : ADD AX, 1
MOV AX, T12
ADD AX, 1
etiquette 24 : MOV DX, T13
etiquette 25 : JMP etiquette 28
etiquette 26 : MOV DX, 10
etiquette 27 : MOV DX, 31
etiquette 28 : MOV AX, 10
SUB AX, 6
etiquette 29 : CMP AX, 0
JG etiquette 31
etiquette 30 : MOV DX, 6
etiquette 31 : JMP etiquette 28
etiquette 32 : MOV AX, 1
SUB AX, 4
etiquette 33 : CMP AX, 0
JL etiquette 36
etiquette 34 : MOV DX, 6
etiquette 35 : JMP etiquette 32
FIN :
MOV AH,4CH
INT 21h
CODE ENDS
END MAIN
