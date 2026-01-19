# include<stdio.h>
int main(){
    //term2 assignment
    // the assignment 1 question
    int i,v=1;
    char grade;
    printf("please enter the number of students you have:");
    scanf("%d",&i);
    int student[i];
    for (int a=0;a<i;a++){
        printf("enter the marks of the student:");
        scanf("%d",&student[a]);
    }
    printf("stuNbr  Marks  Grade \n______________________\n");
    for(int a=0; a<i;a++){
        if ( student[a]>=80){
                grade='A';
                printf("%d.      %d        %c",v,student[a],grade);

        }else if ( student[a]>=70){
            grade='B';
            printf("%d.       %d        %c",v,student[a],grade);

        } else if(student[a]>=50){
            grade='C';
            printf("%d.       %d        %c",v,student[a],grade);
        } else if(student[a]<50){
            grade='D';
            printf("%d.       %d        %c",v,student[a],grade);

        }
        printf("\n");
        v=v+1;
    }

    //2 question
    int image[3][3] = {
        {50, 100, 150},
        {60, 110, 160},
        {70, 120, 170}
    };

    int x, j;

    printf("Original image:\n");
    for (x = 0; x < 3; x++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", image[x][j]);
        }
        printf("\n");
    }

    // Modify the image (brighten pixels)
    for (x = 0; x < 3; x++) {
        for (j = 0; j < 3; j++) {
            image[x][j] = image[x][j] + 20;
        }
    }

    printf("\nModified image:\n");
    for (x = 0; x < 3; x++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", image[x][j]);
        }
        printf("\n");
    }
    //3 question matrix
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2];
    int p, g;

    for (p = 0; p < 2; p++) {
        for (g = 0; g < 2; g++) {
            C[p][g] = A[p][g] + B[p][g];
        }
    }

    printf("Result matrix:\n");
    for (p = 0; p < 2; p++) {
        for (g = 0; g < 2; g++) {
            printf("%d ", C[p][g]);
        }
        printf("\n");
    }
    //pascal principle



    int triangle[10][10];
    int rows = 5;
    int k, h;

    for (k = 0; k < rows; k++) {
        for (h = 0; h <= k; h++) {


            if (h == 0 || h == k) {
                triangle[k][h] = 1;
            }

            else {
                triangle[k][h] = triangle[k-1][h-1] + triangle[k-1][h];
            }

            printf("%d ", triangle[k][h]);
        }
        printf("\n");
    }





    // the first question;
    int z,y,temp;
    printf("enter the number:\n");
    scanf("%d",&z);
    printf("enter another number\n");
    scanf("%d",&y);
    temp=z;
    z=y;
    y=temp;
    printf("the first number you entered is %d and the second number you entered is %d\n",z,y);

    // the second question;
    float r,area, perimeter;
    printf("enter the radius of the circle:\n");
    scanf("%f",&r);
    area= r*r*3.14;
    perimeter=2*r*3.14;
    printf("the area of the circle is %.2f and the perimeter is %.2f \n",area,perimeter);
    // the third question;
    float cel, farn;
    printf("enter the temperature in celsius :\n");
    scanf("%f",&cel);
    farn=((cel*9)/5)+32;
    printf("the temperature in fahrenheit is %.1f ",farn);
    // the fourth question;
    int a,b,c,max;

    printf("enter the number you want:");
    scanf("%d",&a);
     printf("enter the number you want:");
    scanf("%d",&b);
     printf("enter the number you want:");
    scanf("%d",&c);
    if(a<= b){
        if(b>=c){
            max=b;
            printf("the maximum number is %d",b);
        }
        else{
            max=c;
            printf("the maximum number is %d",c);
        };
    }
    else{
        if(a>=c){
            max=a;
             printf("the maximum number is %d",a);
        }
        else{
             max=c;
            printf("the maximum number is %d",c);
        };
    }



    return 0;
}
