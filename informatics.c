#include <stdio.h>
int main(){
    int N ,i,a=0;
    char temp;
    char A[100];
    char B[100];
    printf("enter the number of cows you have:");
    scanf("%d",&N);
    printf("enter the string order made of H and G only you want :");
    scanf("%s",&A);
    printf("enter the string order made of H and G only you got:");
    scanf("%s",&B);
    for (i=0; i<= N ; i++){
        if ( A[i]!= B[i] ){
                temp=A[i];
        B[i]=temp;
        a=a+1;
        }
        }
        printf(" THE MINIMUM NUMBER OF REPEATING  THE PROCESS IS %d",a);
        return 0;

}



