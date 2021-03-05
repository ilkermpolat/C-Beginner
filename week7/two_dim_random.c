#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int two_dim[3][4];
    for (int i = 0; i<3;i++){
        for(int j = 0; j<4;j++){
            two_dim[i][j]=250+ rand()%200;
        }
    }
    for (int i = 0; i<3;i++){
        for(int j =0;j<4;j++){
            printf("%4d",two_dim[i][j]);
        }
        printf("\n");
    }
return 0;
}