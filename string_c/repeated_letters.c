/*#include<string.h>
#include<stdio.h>
int main(){
	int i,j,count;
	char arr[] = "Rama Rao";
	int len = strlen(arr);
	for(i=0;i<len;i++){
		count = 1;
		if(arr[i] != '\0'){
			for(j=i+1;j<len;j++){
				if(arr[i] == arr[j]){
					count++;
					arr[j] = '\0';
				}
			}
			if(count > 1 ){
				printf("the letter %c count is %d\n",arr[i],count);
			}
		}
	}
}*/