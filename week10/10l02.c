#include <stdio.h>
void charfind(FILE *fin);
int main(){
    FILE *fptr1;
    fptr1 = fopen("page.txt","r");
    charfind(fptr1);
    fclose(fptr1);
    return 0;
}
void charfind(FILE *fin){
    int ch;
    int arr[150]={0},i;
    while((ch=fgetc(fin)) != EOF){
        arr[ch]+=1;
    }
    for(i=65;i<122;i++){
            if(arr[i]==0) continue;
        printf("&c  %2d\n",i,arr[i]);
    }
}