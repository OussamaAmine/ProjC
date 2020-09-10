#include "quad.h"
#include "table_symbole.c"
#include <stdio.h>
#include <string.h>
//extern int ntemp;
/***********************************G�n�ration de quadruplets************************************************/
void generer(char* a, char* b, char* c, char* d){
	liste[qc].opr=strdup(a);
	liste[qc].op1=strdup(b);
	liste[qc].op2=strdup(c);
	liste[qc].res=strdup(d);
	qc++;
}

/**********************************conversion d'un int en chaine de caractere******************************/
char* convert(int i){
	char s[15];
	sprintf(s,"%d",i);
	return strdup(s);
}
/***********************************Quads Expression logiques************************************************/
void quadL(int i, char*b, char* c, char* d){
	switch(i){
		case 1 :
			generer("BNZ",convert(qc+2),b,"");
			//generer("=","","1",d); 
			//generer("BR",convert(qc+1),"",""); 
			//generer("=","","0",d);
		break;
		case 2 :
			generer("BNZ",convert(qc+4),b,""); 
			generer("BNZ",convert(qc+2),c,"");
			//generer("=","","0",d); 
			//generer("BR",convert(qc+1),"",""); 
			//generer("=","","1",d);
		break;
		case 3 :
		generer("BZ",convert(qc+4),b,""); 
		generer("BZ",convert(qc+2),c,"");
		//generer("=","","1",d); 
		//generer("BR",convert(qc+1),"",""); 
		//generer("=","","0",d);
		break;
	}
}

/***********************************Quads Expressions de comparaison************************************************/
void quadC(int i, char* b, char* c, char* d){
	switch(i){
		case 1 :
			generer("-",b,c,d); 
			generer("BG",convert(qc+2),d,"");
			//generer("=","","0",d);
			//generer("BR",convert(qc+1),"",""); 
			//generer("=","","1",d);
		break;
		case 2 :
			generer("-",b,c,d); 
			generer("BGE",convert(qc+2),d,"");
			//generer("=","","0",d);		
			//generer("=","","1",d);
		break;
		case 3 :
			generer("-",b,c,d); 
			generer("BL",convert(qc+2),d,"");
			//generer("=","","0",d);
			//generer("BR",convert(qc+1),"",""); 
			//generer("=","","1",d);
		break;
		case 4 :
			generer("-",b,c,d); 
			generer("BLE",convert(qc+2),d,"");
			//generer("=","","0",d);
			//generer("BR",convert(qc+1),"",""); 
			//generer("=","","1",d);
		break;
		case 5 :
			generer("-",b,c,d); 
			generer("BZ",convert(qc+2),d,"");
			//generer("=","","0",d);
			//generer("BR",convert(qc+1),"",""); 
			//generer("=","","1",d);
		break;
		case 6 :
			generer("-",b,c,d); 
			generer("BNZ",convert(qc+2),d,"");
			//generer("=","","0",d);
			//generer("BR",convert(qc+1),"",""); 
			//generer("=","","1",d);
		break;
	}
}

/********************************************Mise à jour des branchement**************************************/
void Maj(int nQc, int jmp){
	char buff[10];
	sprintf(buff, "%02d", jmp);
	liste[nQc].op1=strdup(buff);
}



/********************************************Suppression des quads des affectations non utilis�es**************************************/
void delete_quad(){
	int i,j,t,p,k;
	int used=0;
	char *temporaire;
	for(i=0;i<qc;i++){
		if(strcmp(liste[i].opr,"=")==0){
			j=i+1;
			temporaire = strdup(liste[i].res);
			k=0;
			while((j<qc)&&(used==0))
			{
				if((strcmp(liste[j].op1,temporaire)==0)||(strcmp(liste[j].op2,temporaire)==0)||((strcmp(liste[j].opr,"BR")==0)&&(atoi(liste[j].op1)<i))||((strcmp(liste[j].opr,"BZ")==0)&&(atoi(liste[j].op1)<i))||((strcmp(liste[j].opr,"BNZ")==0)&&(atoi(liste[j].op1)<i))||((strcmp(liste[j].opr,"BG")==0)&&(atoi(liste[j].op1)<i))||((strcmp(liste[j].opr,"BGE")==0)&&(atoi(liste[j].op1)<i))||((strcmp(liste[j].opr,"BL")==0)&&(atoi(liste[j].op1)<i))||((strcmp(liste[j].opr,"BLE")==0)&&(atoi(liste[j].op1)<i))){
					used=1;
				}
				j++;
			}
			if(used==0){
				t=0;
				p=i;
				while((p>0)&&(t==0))
				{

					if((strcmp(liste[p-1].opr,"+")==0)||(strcmp(liste[p-1].opr,"-")==0)||(strcmp(liste[p-1].opr,"*")==0)||(strcmp(liste[p-1].opr,"/")==0)){
						p--;
					}
					else{
					t=1;
					}
				}
				for(j=p;j<qc-1;j++){
					liste[j]=liste[j+(i-p)+1];
				}
				qc=qc-(i-p)-1;
			}
		}
	}
}

/***********************************G�n�ration de code machine************************************************/
void assembler(){
	int i,type; element *p;
	printf("DATA SEGMENT \n");
	for(i=0;i<200;i++){
		p=TS[i];
		if(p!=NULL){
			do{
				type=gettype(p->nom);
				if(type==1){printf("%s DD ?\n",p->nom);}
				if(type==2){printf("%s DW ?\n",p->nom);}
				if(type==3){printf("%s DB ?\n",p->nom);}
				if(type==4){printf("%s DD ?\n",p->nom);}
				if(type==11){printf("%s DD %s DUP ?\n",p->nom, p->taille);}
				if(type==12){printf("%s DW %s DUP ?\n",p->nom, p->taille);}
				if(type==13){printf("%s DB %s DUP ?\n",p->nom, p->taille);}
				if(type==23){printf("%s DD '%s' \n",p->nom, p->taille);}
				if(type==24){printf("%s DW '%s' \n",p->nom, p->taille);}
				if(type==25){printf("%s DB '%s' \n",p->nom, p->taille);}
				if(type==26){printf("%s DW 13,10,'%s',13,10,'$' \n",p->nom, p->taille);}
				p=p->suiv;
			} while(p!=NULL);

		}

	}
	printf("coucou");
	printf("DATA ENDS\n");
	printf("CODE SEGEMENT\n");
	printf("ASSUME CS:CODE, DS:DATA\n");
	printf("MAIN :\n");
	printf("MOV AX,DATA\n");
	printf("MOV DS,AX\n");
	for(i=0;i<qc;i++){
		printf("etiquette %d : ",i);
		if(strcmp(liste[i].opr,"+")==0){
			if((liste[i].op1[0]=='T')&&(liste[i].op2[0]=='T')){
				printf("ADD AX, BX\n");
			}
			else{
				if(liste[i].op1[0]=='T'){
					printf("ADD AX, %s\n",liste[i].op2);
				}
				if(liste[i].op2[0]=='T'){
					printf("ADD AX, %s\n",liste[i].op1);
				}
				else{
					printf("MOV AX, %s\n",liste[i].op1);
					printf("ADD AX, %s\n",liste[i].op2);
				}
			}

	}
		if(strcmp(liste[i].opr,"-")==0){
			if((liste[i].op1[0]=='T')&&(liste[i].op2[0]=='T')){
				printf("SUB AX, BX\n");
			}

			else{
				if(liste[i].op1[0]=='T'){
					printf("SUB AX, %s\n",liste[i].op2);
				}
				if(liste[i].op2[0]=='T'){
					printf("SUB AX, %s\n",liste[i].op1);
				}
				else{
					printf("MOV AX, %s\n",liste[i].op1);
					printf("SUB AX, %s\n",liste[i].op2);
				}
			}

	}
	if(strcmp(liste[i].opr,"*")==0){
			if((liste[i].op1[0]=='T')&&(liste[i].op2[0]=='T')){
				printf("MUL AX, BX\n");
			}
			else{
				if(liste[i].op1[0]=='T'){
					printf("MUL AX, %s\n",liste[i].op2);
				}
				if(liste[i].op2[0]=='T'){
					printf("MUL AX, %s\n",liste[i].op1);
				}
				else{
					printf("MOV AX, %s\n",liste[i].op1);
					printf("MUL AX, %s\n",liste[i].op2);
				}
			}

	}
	if(strcmp(liste[i].opr,"/")==0){
			if((liste[i].op1[0]=='T')&&(liste[i].op2[0]=='T')){
				printf("DIV AX, BX\n");
			}
			else{
				if(liste[i].op1[0]=='T'){
					printf("DIV AX, %s\n",liste[i].op2);
				}
				if(liste[i].op2[0]=='T'){
					printf("DIV AX, %s\n",liste[i].op1);
				}
				else{
					printf("MOV AX, %s\n",liste[i].op1);
					printf("DIV AX, %s\n",liste[i].op2);
				}
			}

	}
	if(strcmp(liste[i].opr,"BR")==0){
			printf("JMP etiquette %s\n",liste[i].op1);
	}
	if(strcmp(liste[i].opr,"BG")==0){
			printf("CMP AX, 0\n");
			printf("JG etiquette %s\n",liste[i].op1);
	}
	if(strcmp(liste[i].opr,"BGE")==0){
			printf("CMP AX, 0\n");
			printf("JGE etiquette %s\n",liste[i].op1);
	}
	if(strcmp(liste[i].opr,"BL")==0){
			printf("CMP AX, 0\n");
			printf("JL etiquette %s\n",liste[i].op1);
	}
	if(strcmp(liste[i].opr,"BLE")==0){
			printf("CMP AX, 0\n");
			printf("JLE etiquette %s\n",liste[i].op1);
	}
	if(strcmp(liste[i].opr,"BZ")==0){
			printf("CMP AX, 0\n");
			printf("JE etiquette %s\n",liste[i].op1);
	}
	if(strcmp(liste[i].opr,"BNZ")==0){
			printf("CMP AX, 0\n");
			printf("JNE etiquette %s\n",liste[i].op1);
	}
	if(strcmp(liste[i].opr,"=")==0){
		if(liste[i].res[0]='T'){
			printf("MOV DX, %s\n",liste[i].op2);
		}
		else printf("MOV %s, AX\n",liste[i].res);
	}
}
	printf("FIN :\n");
	printf("MOV AH,4CH\n");
	printf("INT 21h\n");
	printf("CODE ENDS\n");
	printf("END MAIN\n");
}
//int getqc(){return qc;}
//quad[2000] getliste(){return liste;}
/***********************************Fonction d'affichage des quadruplets************************************************/
void afficher_qdr()
{
printf("\n*********************Quadruplet***********************\n");

int i;

for(i=0;i<qc;i++)
		{

 printf("\n %d - ( %s  ,  %s  ,  %s  ,  %s )",i,liste[i].opr,liste[i].op1,liste[i].op2,liste[i].res);
 printf("\n---------------------------------------------------\n");

}
}
/******************************************* propagation de copie ********************************************************/
void propaDeCopie()
{/*   int qct;
    char* var[200];
    int i=0,k,p,j,u;
    char* temporaire;
    while(i<qc)
    {
       if((strcmp(liste[i].opr,"+")==0)||(strcmp(liste[i].opr,"-")==0)||(strcmp(liste[i].opr,"*")==0)||(strcmp(liste[i].opr,"/")==0))
        {
            qct=i;
            p=i;
            u=0;
            while((u==0)&&(qct<qc)&&((gettype(strdup(liste[qct].op1))!=1)||(gettype(strdup(liste[qct].op1))!=2)||(gettype(strdup(liste[qct].op1))==23)||(gettype(strdup(liste[qct].op1))==24)||(gettype(strdup(liste[qct].op1))!=25)||(gettype(strdup(liste[qct].op1))!=26))&&((gettype(strdup(liste[qct].op2))!=1)||(gettype(strdup(liste[qct].op2))!=2)||(gettype(strdup(liste[qct].op2))==23)||(gettype(strdup(liste[qct].op2))==24)||(gettype(strdup(liste[qct].op2))!=25)||(gettype(strdup(liste[qct].op2))!=26)))
            {
            if(strcmp(liste[i].opr,"=")==0){u=1;}
            else{qct++;}
            }
            if(u==1){temporaire=strdup(liste[qct].res);}
            j=qct+1;
            while(j<=qc)
            {
                while(p<==qct)
                {
                if((strcmp(liste[p].opr,liste[j].opr)!=0)||(strcmp(liste[p].op1,liste[j].op1)!=0)||(strcmp(liste[p].op2,liste[j].op2)!=0)){p=i;}
                else{p++;}
                }

                if(p==qct){}
                j++;
            }
            while(
            k=i+1;
            while(k<qc)&&liste[k].
            while(k<qc)
            {
                if((liste[k].opr==liste[i].opr)&&(liste[k].op1==liste[i].op1)&&(liste[k].op2==liste[i].op2))
                        {  j=k+1;
                           while(j<=qc){if(liste[j].op1==liste[k].res) liste[j].op1=liste[i].res;
                                            else
                                                {if(liste[j].op2==liste[k].res) liste[j].op2=liste[i].res;
                                                }
                                            j++;
                                        }
                            j=k;
                            qc--;
                            while(j<=qc){liste[j]=liste[j+1];j++;}
                        }
                else{k++;}
            }
            if((liste[k].opr==liste[i].opr)&&(liste[k].op1==liste[i].op1)&&(liste[k].op2==liste[i].op2)&&(k==qc))qc--;
        }

        else{if(strcmp(liste[i].opr,"=")==0){var[t]=liste[i].res;}
        }

    }*/

}
void simplification_algebrique()
{


    int i=0,k1,p,t,l;
    char* temporaire,*temporaire1;
    while(i<qc)
    {
        if(strcmp(liste[i].opr,"*")==0)
        {
                if(strcmp(liste[i].op1,"2")==0)
                {   k1=atoi(liste[i].op1);
                    p=i;
                    t=qc+k1-2;
                    char*resultat;
                    if(strcmp(liste[p+1].opr,"=")==0){resultat=strdup(liste[p+1].res);}
                    else{
                        if((strcmp(liste[p+1].opr,"+")==0)||(strcmp(liste[p+1].opr,"^")==0)||(strcmp(liste[p+1].opr,"-")==0)||(strcmp(liste[p+1].opr,"*")==0)||(strcmp(liste[p+1].opr,"/")==0))
                        {
                            resultat=strdup(liste[p+1].op1);
                            }
                            else
                            {resultat=strdup(liste[p+1].op2);}
                    }

                    qc=qc+k1-2;

                                liste[i].opr="+";
                                liste[i].op1=liste[i].op2;
                                liste[i].op2=liste[i].op2;
                                liste[i].res=liste[p+1].op1;

                    }else
                    {
                            if((strcmp(liste[i].op2,"1")==0)||(strcmp(liste[i].op2,"2")==0)||(strcmp(liste[i].op2,"3")==0)||(strcmp(liste[i].op2,"4")==0)||(strcmp(liste[i].op2,"5")==0)||(strcmp(liste[i].op2,"6")==0)||(strcmp(liste[i].op2,"7")==0)||(strcmp(liste[i].op2,"8")==0)||(strcmp(liste[i].op2,"9")==0))
                            {
                                printf("c");
                                k1=atoi(liste[i].op2);
                                p=i;
                                t=qc+k1-2;
                                char*resultat;
                                if(strcmp(liste[p+1].opr,"=")==0){resultat=strdup(liste[p+1].res);}
                                else{
                                        if((strcmp(liste[p+1].opr,"+")==0)||(strcmp(liste[p+1].opr,"^")==0)||(strcmp(liste[p+1].opr,"-")==0)||(strcmp(liste[p+1].opr,"*")==0)||(strcmp(liste[p+1].opr,"/")==0))
                                            {
                                                resultat=strdup(liste[p+1].op1);
                                            }
                                        else
                                        {resultat=strdup(liste[p+1].op2);}
                                    }


                                qc=qc+k1-2;
                                liste[i].opr="+";
                                liste[i].op1=liste[i].op1;
                                liste[i].op2=liste[i].op1;
                                liste[i].res=temporaire;

                            }
        }
        }

    i++;
    k1=0;
    }

    }
    void elimination_code_inutile()
    {
        int i=0,j,k=0,l,i1,l1;

        while(i<qc)
        {
            k=0;i1=0;l1=0;
            if(strcmp(liste[i].opr,"=")==0)
            {

                char* valeur=liste[i].res;
                j=i+1;
                while((j<qc)&&(k==0))
                {
                    if((strcmp(liste[j].op1,valeur)==0)||(strcmp(liste[j].op2,valeur)==0))
                    {k=1;
                    }
                    j++;
                }
                if(k==0)
                {
                i1=i;
                if(i>0)
                    {

                    l=i-1;
                    l1=i;
                    printf("%d%d",l1,i1);
                    while(strcmp(liste[l].opr,"=")!=0){l--;}
                    while(i1<qc -(i1-l))
                    {
                        liste[l+1]=liste[i1+1];l++;i1++;
                     }
                     qc=i1;
                     i=l1;
                    }else{while(i1<qc){liste[i1]=liste[i1+1];i1++;}qc=i1;i=0;}

                    }


                }

            i++;
            }
        }

