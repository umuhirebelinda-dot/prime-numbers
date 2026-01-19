#include<stdio.h>

 int array(){
        int num[5];
        //print them
        for(int i=0;i<5;i++){
            scanf("%d",&num[i]);
        };
        // finding the largest number
        int max=num[0];
        int a=0;
        while( a <=4){
            for(int b=1;b<=4;b++){
                if(max<num[b]){
                    max=num[b];
                    break;
                };
            };
            a+=1;
        };
        printf("%d",max);

 }
int main(){
   array();



    return 0;

 }
