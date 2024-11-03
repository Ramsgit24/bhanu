// this program will work on c compiler


/*#include<stdio.h>
#include<string.h>
int main(){
    int i,n,len1,ch;
    printf("enter string size :");
    scanf("%d",&n);
    char s1[n];
    printf("enter string :");
    getchar();
    fgets(s1,sizeof(s1),stdin);
    len1 = strlen(s1);
    for(i=0;i<len1/2;i++){
        ch = s1[i];
        s1[i] = s1[len1 - 1 - i];
        s1[len1 - 1 - i] = ch;
    }
    puts(s1);
    printf("Size of s1: %ld\n",sizeof(s1));
}*/


/*#include<stdio.h>
#include<string.h>
void str_rev(){
	int length,i;
	char temp, str[] = "bhanu";
	length = strlen(str);
	for(i=0;i<length/2;i++)
	{
		temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	} 
	printf("string reverse is %s\n", str);
}
int main(){
	str_rev();
}*/


//remove spaces
/*#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char str[] = "bhanu prakash kota";
	for(i=0;str[i] != '\0';i++){
		if(str[i] != ' '){
			printf("%c",str[i]);
		}
	}
}*/