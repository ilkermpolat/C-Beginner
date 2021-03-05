#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 6
int main(){
    int i;
    char city_arr[][10]={"ankara","adana","izmir","samsun","istanbul","ordu"};
    char city[20];
    while(1){
        printf("enter a city name (to exit enter 0) : ?");
        scanf("%s",city);
        if(city[0]=='0') exit(0);
        for(i=0;i<size;i++){
            if(strcmp(city,city_arr[i])==0){
                break;}}
        if (i==size)
            printf("%s NOT FOUND\n",city);
        else
            printf("%s FOUND\n",city_arr[i]);
    }
    return 0;
}