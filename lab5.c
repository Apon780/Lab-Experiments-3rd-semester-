#include<stdio.h>
void print(int a[],int n){
    for(int i=0;i<n ; i++){
    printf("%d ",a[i]);
}
printf("\n");
}

int insert(int a[],int n ,int position ,int value){
 if( position < 1 || position >n+1){
    printf("Invalid position \n");
    return n ;
 }
 else {
    for(int i = n-1; i >= position-1 ;i--){
        a[i+1]=a[i];
    }
    a[position-1]=value;
    n++;
    printf("Inserted succesfully.\n");
    print(a,n);
    return n ;
 }
}
int delete(int a[],int n ,int position ){
    if(position < 1 || position > n ){
        printf("invalid position\n");
        return n ;
    }
    else {
        for(int i=position-1;i<n;i++){
            a[i]=a[i+1];
        }
        n--;
        print(a,n);
        return n ;
    }
}

int main(){
int a[100],n,i,choice,position,value;

printf("Enter number of elements :\n");
scanf("%d",&n);
if(n<0 || n>100){
    printf("invalid\n");
    return 1 ;
}
for(i=0;i<n;i++){
    printf("Enter the value of number %d element :\n",i);
    scanf("%d",&a[i]);
}
   
    do{
        printf("\n    menu    \n");
                printf("\n1.Treverse \n");
                        printf("2.Insert\n");
                                printf("3.Delete\n");
                                        printf("4.Exit\n");
                                                printf("Enter your choice :\n");
                                                scanf("%d",&choice);

switch (choice){
    case 1 :
    if(n==0){
        printf("Array is empty\n");
    }
    else {
 printf("Result :");
    print(a, n);
    
    }
    break;
    case 2 :
if (n==100){
printf("Array is full");
}
else {
    printf("Enter the position you want to change :\n");
    scanf("%d",&position);
    printf("Enter the value :\n");
    scanf("%d",&value);
    insert(a,n,position,value);
}
 break;   
 case 3 : 
 if(n==0){
    printf ("Array is Empty\n");

 }
 else {
printf("Enter the position you want to delete :\n");
    scanf("%d",&position);
    delete(a,n,position);
 }
 break ;
 case 4 :
 printf("Exiting program....\n");
 break ;

 default:
 printf("Invalid . Try again \n");
}
}while(choice!=4);

return 0 ;
}

