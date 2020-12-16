#include<stdio.h>
#include<string.h>

int main() {
    int n,i,j,flag=0,comment=0;
    char input[1000];
    printf("\nThis Problem is solved by Alimozzman Durjoy\nID: 181-15-11017\n\n\n");
    printf("Number of line: ");
    scanf("%d\n",&n);
    while(n--){
        gets(input);
        for(i=0; i<strlen(input); i++){
            if(input[i]=='/' && i+1<strlen(input) && input[i+1]=='/' ){
                comment=1;
            }
            if(input[i]=='/' && i+1<strlen(input) && input[i+1]=='*' ){
                flag=1;
            }
            if(input[i]=='*' && i+1<strlen(input) && input[i+1]=='/' && flag==1 ){
                comment=2;
            }
        }
   }
   if(comment==1){
    printf("\nSingle line comment found\n");
   }
   else if(comment==2){
    printf("\nMultiple line comment found\n");
   }
   else printf("\nNo comment found\n");
}
