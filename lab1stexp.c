#include<stdio.h>
#include<math.h>
int main(){
float  a,b,c,r1,r2,p ;
printf("Enter the 1st number:\n");
scanf("%f",&a);
printf("Enter the 2nd number:\n");
scanf("%f",&b);
printf("Enter the 3rd number:\n");
scanf("%f",&c);
p=b*b-4*a*c;
if(p>0){
    r1=(-b+sqrt(p))/(2*a);
    r2=(-b-sqrt(p))/(2*a);
    printf("Roots are real and different\n");
        printf("Root1:%f and Root2:%f \n",r1,r2);
}
else if (p==0){
    r1=(-b)/(2*a);
     printf("Roots are real and same \n");
      printf("Root :%f \n",r1);

}
else printf("No real solution ");

return 0 ;
}