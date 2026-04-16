#include<stdio.h>

//Day3 oct21                                                                 
//Ques:find the kth max and min element of an array

// int main(){
//     int n,k,temp,i,j,max,min;
//     printf("enter size of array");
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("enter k to find the kth maximum and minimum element");
//     scanf("%d",&k);
//     // sorting
//     for(i=0;i<n-1;i++){
//         for(j=0;j<n-i-1;j++){
//             if(a[j]>a[j+1]){
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     if(k>0 && k<=n){
//         printf("\n%d minimum element = %d",k,a[k-1]);
//         printf("\n%d maximum element = %d",k,a[n-k]);
//     }
//     else{
//         printf("\ninvalid value of k");
//     }
//     return 0;
// }