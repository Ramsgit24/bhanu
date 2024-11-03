/*#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int len = strlen(str),i;
    for ( i = len - 1; i >= 0; i--){
        if (str[i] == ' ') {
            str[i] = '\0';
            printf("%s ", &(str[i]) + 1);
        }
    }
    printf("%s\n", str);
}

int main() {
    char str[100];
    printf("\n Please Enter any String: ");
    fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")] = '\0';
    reverseString(str);
}*/
