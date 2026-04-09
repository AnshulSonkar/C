//day1 date:16oct

// Ques: find maximum and minimum element in an array
#include<stdio.h>
int main(){
int n;
printf("enter size of array");
scanf("%d",&n);
int a[n];
int i,j,k;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int max=a[0];
int min=a[0];

// maximum element
for(j=0;j<n;j++){
    if(a[j]>max){
        max=a[j];
    }
}
printf("maximum element is %d\n",max);

// minimum element

for(k=0;k<n;k++){
    if(a[k]<min){
        min=a[k];
    }
}
printf("minimum element is %d",min);

}