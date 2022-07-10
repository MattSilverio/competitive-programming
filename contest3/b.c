#include<stdio.h>
#include<stdlib.h>  
#include<stdbool.h>


int strlen(char str[]){
    if(str[0] == '\0'){
        return 0;
    }

    return 1 + strlen(++str);
}

bool check(char str [])
{
     
    int freq[26] = {0};
     
    int n = strlen(str);
    for (int i = 0; i < n; i++)
     
    freq[str[i] - 97]++;
   
    for (int i = 0; i < 26; i++)
        if (freq[i] % 2 == 1)
        return false;
    return true;
}

int main()
{
    char str[30];
    scanf("%s", str);

    if(check(str)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    
    return 0;
}