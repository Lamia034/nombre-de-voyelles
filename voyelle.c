#include<stdio.h>
int main(){
	char c;
	printf("entrer un lettre:");
	scanf("%c",&c);
	switch(c){
		case'A':printf("c'est un voyelle");break;
		case'E':printf("c'est un voyelle");break;
		case'U':printf("c'est un voyelle");break;
		case'I':printf("c'est un voyelle");break;
		case'O':printf("c'est un voyelle");break;
		case'a':printf("c'est un voyelle");break;
		case'e':printf("c'est un voyelle");break;
		case'u':printf("c'est un voyelle");break;
		case'i':printf("c'est un voyelle");break;
		case'o':printf("c'est un voyelle");break;
	    default :printf("c'est pas voyelle");
	}
}
