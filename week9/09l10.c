#include <stdio.h>
#include <ctype.h>
int main(){
    char str[50];
    int i;
    while(1){
        printf("enter a string? :");
        scanf("%s",str);
        for(i=0; str[i]!='\0';i++){
            if(isdigit(str[i]))
                printf("%c is a digit\n",str[i]);
            else if(isalpha(str[i]))
                printf("%c is a letter\n",str[i]);
            else
                printf("%c is not digit or letter\n",str[i]);
        }
        break;
    }
    return 0;
}