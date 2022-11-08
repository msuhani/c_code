#include <stdio.h>
#include<math.h>
int main (){
    int num,flag=0 ;
    printf("Enter the number: ");
    scanf("%d",&num);
    int n=sqrt(num);
    for(int i=2;i<=n;i++){
       if(num%i==0){
        flag=1;
        break;
       }
    }
    if(flag==0)
        printf("it is a prime");
    else
        printf("it is not a prime no");
    return 0;
}