del flex.exe
del lex.yy.c
del bison.tab.c 
del bison.tab.h
Flex flex.l
Bison -d bison.y
gcc lex.yy.c bison.tab.c -o flex.exe