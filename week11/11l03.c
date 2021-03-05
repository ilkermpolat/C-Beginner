#include <stdio.h>
#include <string.h>
struct std{
    int id;
    char ad[15];
    char soyad[15];
    int midterm;
    } rec[100];
    int main(){
        FILE *fptr1;
        char adi[15],soyadi[15];
        int s=0,i;
        fptr1=fopen("liste","r");
        while(!feof(fptr1)){
            fscanf(fptr1,"%d%s%s%d",&rec[s].id,rec[s].ad,rec[s].soyad,&rec[s].midterm);
            s++;
        }
        fclose(fptr1);
        while(1){
            printf("ad-soyad giriniz: ");
            scanf("%s%s",adi,soyadi);
            for(i=0;i<s;i++){
                if(strcmp(rec[i].ad, adi)==0 && strcmp(rec[i].soyad,soyadi)==0){
                    printf("Adi: %s Soyadi: %s Midterm:%2d\n",rec[i].ad,
                    rec[i].soyad,rec[i].midterm);
                    break;
                }
            }
            if (i==s) printf("%s  %s  bulunamadı\n",adi,soyadi);
        }
        return 0;
    }