# include <stdio.h>
int main(){
    int N,i,a=1;
    char mailb[100];
    printf("enter the number of rows of farms");
    scanf("%d",&N);
    printf("enter the sequence of letters representing the houses");
    scanf("%s",&mailb);
    for (i=0;i<=N;i++){
        while(mailb[i]==mailb[i++]){
                a++;
        i++;

        }
        printf("%d",a);
    }


return 0;
}
