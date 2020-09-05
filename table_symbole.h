#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
struct NT
{
	char *val;
	int type;
};

typedef struct element element;
struct element
{
	char nom[30];
	int code;
	char nature[30];//constante ou variable
	char taille[255];
	int used;
	struct element *suiv;
};

element *TS[200];

void init();
int hachage(char chaine[]);
int rechercher(char nom [], element ** in);
void inserer (char nom[], int code,char nature[30],char taille[255]);
int gettype(char nom[]);
char* substring(char string[]);
void afficher();
void used(char nom[]);
void delete_unused();
void modifier( char nom[], int code);
void err_taille_tab(int type,char val[]);
void err_incompa_typ_tab(int typtab,int typvar);
void err_incompa_typ_var(int typdec,int typvar);