#include<stdio.h>
void print(int a[],int n){
    for(int i=0;i<n ; i++){
  
    printf("%d ",a[i]);
    
}
}
int main(){
int a[100],n,i;

printf("Enter number of elements :\n");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("Enter the value of number %d element :\n",i);
    scanf("%d",&a[i]);
}
    printf("Result :\n");
    print(a, n);

return 0 ;
}

