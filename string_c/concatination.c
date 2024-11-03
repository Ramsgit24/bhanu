
//normal method to concatinate string
/*#include<stdio.h>
#include<string.h>
int main(){
	char a1[10] = "bhanu ";
	char a2[10] = "prakash";
	strcat(a1,a2);
	puts(a1);
}*/

//using 
/*#include<stdio.h>
#include<string.h>

int main(){

	char s1[30];
	char s2[30];
	printf("Enter s1 string :");
	fgets(s1,sizeof(s1),stdin);
	puts(s1);
	s1[strcspn(s1,"\n")]='\0';

	printf("Enter s2 string :");
	fgets(s2,sizeof(s2),stdin);
	puts(s2);

	s2[strcspn(s2,"\n")]='\0';
	strcat(s1," ");
	strcat(s1,s2);

	printf("%s\n",s1);

}*/
/*

#include<stdio.h>
#include<string.h>

int str_cmp(char[],char[]);
int main(){
	int cmp;
	char s1[10] = "bhanu";
	char s2[10] = "bhanu";

	cmp = str_cmp(s1,s2);
	if(cmp == 0){
		printf("same");
	}
	else{
		printf("not same");
	}


}
int str_cmp(char a[],char b[]){
	int i=0,j = 0;
	while (a[i]!='\0' || b[i] != '\0'){
		if(a[i] = b[i]){
			j++;
			break;
		}
		i++;
	} 
	return j;
}*/