/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int i, n,temp,j;
    printf("Enter string size: ");
    scanf("%d", &n);
    char a[n][10];
    getchar();
    printf("Enter strings:\n");
    for (i = 0; i < n; i++) {
        fgets(a[i], sizeof(a[i]), stdin);
        a[i][strcspn(a[i],"\n")] = '\0';
    }
    for(i=0;i<n- 1;i++){
        for(j=0;j<n-i-1;j++){
            if (strcmp(a[j], a[j + 1]) > 0) {
                char temp[10];
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
            }
        }
    }
    printf("sorted strings are:\n");
    for (i = 0; i < n; i++) {
        printf("%s ", a[i]);
    }

    return 0;
}*/

/*#include<stdio.h>
#include<string.h>

int str_cmp(char *,char*);
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
int str_cmp(char *a,char *b){
	int i=0,j = 0;
	while (*a!='\0' || *b != '\0'){
		if(*a!= *b){
			j++;
			break;
		}
		i++;
	} 
	return j;
}*/