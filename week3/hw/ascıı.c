//eğer harf girersen hata verir onun dışında çalışıyor ancak looptan çıkmıyor boş bir kod işte//
#include <stdio.h>
int main(){
    char i;
    while (i!="k"){
        printf("which character do you want know?\n(note:only ASCII code(numbers)\n( 0 for exit)");
        scanf("%d",&i);
        printf("%c,%d\n",i,i);
        break;
    }
    return 0;
}
