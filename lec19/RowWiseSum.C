#include <stdio.h>

int main() {

    int a[3][3];

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<3;i++) {

        int sum=0;

        for(int j=0;j<3;j++) {
            sum+=a[i][j];
        }

        printf("Row %d Sum = %d\n",i+1,sum);
    }

    return 0;
}