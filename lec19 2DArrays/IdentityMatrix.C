// #include <stdio.h>

// int main() {

//     int a[3][3];
//     int flag=1;

//     for(int i=0;i<3;i++) {
//         for(int j=0;j<3;j++) {
//             scanf("%d",&a[i][j]);
//         }
//     }

//     for(int i=0;i<3;i++) {
//         for(int j=0;j<3;j++) {

//             if(i==j && a[i][j]!=1)
//                 flag=0;

//             if(i!=j && a[i][j]!=0)
//                 flag=0;
//         }
//     }

//     if(flag)
//         printf("Identity Matrix");
//     else
//         printf("Not Identity Matrix");

//     return 0;
// }


// Upper Triangular Matrix
#include <stdio.h>

int main() {

    int a[3][3];

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {

            if(i<=j)
                printf("%d ",a[i][j]);
            else
                printf("0 ");
        }

        printf("\n");
    }

    return 0;
}