#include <stdio.h>

mul(int, int );

int main(){
    int t = 5;
    int i = 6;
    int p = mul(i, t); 
    printf("%d", p);
    return 0;
}

int mul(int i, int t){
    int temp=i*t;
    return temp;
}