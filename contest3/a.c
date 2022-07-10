#include<stdio.h>
#include<stdlib.h>


int main(){

    int n,k,x,y;
    long int sum_yen = 0;

    scanf("%d",&n);
    scanf("%d",&k);
    scanf("%d",&x);
    scanf("%d",&y);

    for(int i=1; i<=n; i++){
        if(i >= k + 1){
            sum_yen+= y;
        }else{
            sum_yen += x;

        }


    }

    printf("%ld\n",sum_yen);

    return 0;
}