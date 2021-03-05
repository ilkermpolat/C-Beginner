//1.soru
double function(double n){
    double sum=0;
    for(n=1;n=n;n++){
        sum+=(n*log(n)/pow(2,n));}
    return sum;}
int main(){
    double n;
    scanf("%f",&n);
    printf("%f\n",function(n));
    return 0;}
