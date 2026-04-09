#include<stdio.h>

//Day2    date:17Oct
//Oues: reverse an array in place

int main(){
int n;
printf("enter size of array");
scanf("%d",&n);
int a[n];
int i,j,k;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("reversed array is \n");
for(i=0;i<n/2;i++){
    int tem=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=tem;
}
   for(i=0;i<n;i++){
     printf("%d\n",a[i]);
   }    
}