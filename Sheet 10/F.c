#include<stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    char a[m];
    for (int i = 0 ; i < n ; i++){
        scanf("%s",a);
    }
    for (int i = 0 ; i < n*3 ; i++){
        printf("%s %s %s",a[i],a[i+3],a[i+6]); 
    }


}