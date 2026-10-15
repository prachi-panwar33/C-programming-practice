#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    printf("Enter a binary number \n");
    scanf("%d",&a);
    c=0;
    for (int i=0;a>0;i++){
        b=a%10;
        c=b*pow(2,i)+c;
        a=a/10;
    }
    printf("Decimal equivalent of the input binary is %d \n",c);
    return 0;
}
