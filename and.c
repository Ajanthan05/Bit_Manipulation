#include<stdio.h>
int main() {
    int a=11, b=7,c;
    c=(5,4);
    printf("%d",a&b);
    printf("\n%d",~a);
    printf("\n%d",c);
    printf("\n-----------------");
    int d,e;
    d = (printf("\nAj"),2,3);
    printf("\n%d",d);
    e = printf("\nAj"),2,3;
    printf("\n%d",e);

    printf("\n-----------------");

    int a1=8,b1;
    b1= (a1++,++a1);
    printf("\n%d%d",a1,b1);

    int a2=8,b2;
    b2= a2++,++a2;
    printf("\n%d%d",a2,b2);

}
