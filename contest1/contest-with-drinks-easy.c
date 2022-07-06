#include <stdio.h>

int main(){
    int nQuestions, m, p,sum, newSum, x;

    scanf("%d",&nQuestions);
    int t[nQuestions];

    sum = 0;
    for(int i=0; i<nQuestions; i++){
        scanf("%d",&t[i]);
        sum += t[i];
    }

    scanf("%d", &m);
    for(int i=0; i<m; i++){
        scanf("%d %d", &p, &x);
        newSum = sum + x - t[p-1];
        printf("%d\n", newSum);
    }

    
    return 0;    
    
}