#include<stdio.h>
int main(){
       int n1,n2,sum;
       int *p1,*p2;
       p1=&n1;
       p2=&n2;
       printf("Enter n1: ");
       scanf("%d",p1);
       printf("Enter n2:  ");
       scanf("%d",p2);
       sum=(*p1)+(*p2);
       printf("Sum is  %d\n",sum);
       return 0;
}
