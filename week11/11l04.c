#include <stdio.h>
#include <stdlib.h>
struct st1{
    int id;
    char ad[15];
} rec1;
struct st2{
    int id;
    char *ad;
};
typedef struct st3{
    int id;
    char ad[15];
} rec4,rec5;
int main(){
    rec1.id=25;
    strcpy(rec1.ad,"ali");
    printf(" id: %3d  adi: %s  \n",rec1.id,rec1.ad);
    struct st1 rec2;
    rec2.id=25;
    strcpy(rec2.ad,"ali");
    printf(" id: %3d  adi: %s  \n",rec2.id,rec2.ad);
    struct st2 rec3;
    rec3.id=40;
    rec3.ad="kemal";
    printf("id: %3d  adi: %s  \n",rec3.id,rec3.ad);
    rec4 kayit;
    kayit.id=50;
    strcpy(kayit.ad,"osman");
    printf(" id: %3d  adi: %s \n",kayit.id,kayit.ad);
    return 0;
}