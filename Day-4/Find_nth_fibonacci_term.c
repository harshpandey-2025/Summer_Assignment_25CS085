#include <stdio.h>
int main() {
    int n,i;
    long long int a=0,b=1,c;
    printf("Enter the term number: ");  
    scanf("%d",&n);
    if (n==0)
    printf("fibonacci term is: %lld",a);
    else if (n==1)
    printf("fibonacci term is: %lld",b);
    else {
        for (i=2; i<=n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("fibonacci term is: %lld",b);
    }
    return 0;
}