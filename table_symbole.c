#include "table_symbole.h"


/*****************************Initialisation de la table des symboles************************************/
void init () {
	int i;
	for(i=0; i<200; i++){
		TS[i]=NULL;
	}
}

/***********************************Fonction de hachagee************************************************/
int hachage(char chaine [])
{
    int i=0,res=0;
    while(chaine[i]!='\0')
    {
        res+=chaine[i];
        i++;
    }
    res=res%200;
    return res;
}

/***********************************Extraction d'une chaine************************************************/
char * substring(char string[]){
    char subbuff[255];
    memcpy( subbuff, &string[1],strlen(string)-1);
    subbuff[strlen(string)-2]='\0';
    return strdup(subbuff);
}

/***********************************Fonction de recherche************************************************/
int rechercher(char nom[], element ** in)
{
	element * q;
	int i = hachage(nom);
	/* le cas ou nom est introuvable */
	if(TS[i]==NULL) {
		*in = NULL;
        return i;
	}
	if(TS[i]!=NULL){
		q = TS[i];
		while(q!=NULL)
{              /* le cas nom est trouvable */
			if (strcmp(q->nom, nom)==0){
				*in = q;
				return -1;
			}
			q=q->suiv;
		} ;
	}
			*in = NULL;
			return i;
}

/***********************************Fonction qui reccupère le type***************************************/
int gettype(char nom[]){
	element *p;
	int i = rechercher(nom,&p);
	if(i==-1){return p->code;}
}

/**********************Fonction de vérification de la declaration d'un idf******************************/
int declared(char nom[]){
	element *p;
	int i = rechercher(nom, &p);
	/* nom est déclaré */
	if(i==-1) return 1;
	/* nom est non déclaré */
	else return 0;
}
/***********************************Fonction qui retourne le max****************************************/
int max(int a, int b){
	if(a>b) return a;
	return b;
}

/***********************************Fonction d'insertion***********************************************/
void inserer(char nom[], int code,char nature[30], char taille[255]){
	element *p, *q;
	int i = rechercher(nom, &q);
	if (i!=-1){
		p = malloc(sizeof(element));
		strcpy(p->nom,nom);
		p->code = code;
		strcpy(p->nature,nature);
		strcpy(p->taille,taille);
		p->used=0;
		p->suiv = TS[i];
		TS[i] = p;
	}
}
/**************************************Fonction d'affichage***********************************************/
void afficher(){
	element *p;
printf("\n********************************************\n");
printf("*            Table des symboles            *\n");
printf("********************************************\n");
printf("_______________________________________________________\n");
printf("| NomEntite 	       |CodeEntite	   |Information           |\n");
printf("|______________________|___________________|______________________|\n");

int i=0;
  while(i<200)
  {
  	p=TS[i];

  		while(p!=NULL)
  		{
  			 printf("|%21s |%18d | %21d |\n",p->nom,p->code, p->taille);
  			 p=p->suiv;
  		}

   i++;
   }
printf("|______________________|___________________|______________________|\n");
}

/********************************************Fonctions d'optimisation***************************************/

/******************************Variable déclarée non utilisée*********************************************/
void used(char nom[]){
	int i;
	element *q;
	i = rechercher(nom,&q);
	if(q!=NULL){
		q->used=1;
	}
}

void delete_unused(){
	element * p, *prec;
	int i;
for(i=0;i<200;i++){
	if(TS[i]!=NULL){
		p = TS[i];
		do{
			if(p->used==0){
				if(p==TS[i]){
					TS[i]=p->suiv;
				}
				else{
					prec->suiv=p->suiv;
				}
				free(p);
			}
			prec = p;
			p=p->suiv;
		} while(p!=NULL);
	}
	}
}

/*Fonction modifier*/

void modifier( char nom[], int code){
element *p;
int i=rechercher( nom ,&p );
if(p!=NULL){p->code=code;}
}
void getNature(char nom[],char nature[])
{
    element *p;
   int i=rechercher(nom, &p);
   if(p!=NULL){strcpy(p->nature,nature);}

}
