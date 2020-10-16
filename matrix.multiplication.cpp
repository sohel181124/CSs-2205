#include<stdio.h>

int main(){

int A[10][10],B[10][10],C[10][10];
int R1,R2,C1,C2,i,j,k,sum=0;
printf("Enter rows and columns for Matrix A: "); scanf("%d %d", &R1,&C1);

printf("Enter rows and columns for Matrix B: ");
scanf("%d %d", &R2,&C2);


while(C1!=R2)
{
printf("Error !!! Column of A Matrix is not equal to the row of B Matrix.");

    printf("Enter rows and columns for Matrix A: ");
scanf("%d %d", &R1,&C1);


printf("Enter rows and columns for Matrix B: ");
scanf("%d %d", &R2,&C2);

}
//taking input for Matrix A.

printf("\nEnter elements for Matrix A.\n");

for(i=0;i<R1;i++)
{
    for(j=0;j<C1;j++)

   {
        printf("A[%d][%d]= ",i,j);
        scanf("%d",&A[i][j]);
    }
    printf("\n");

}

//taking input for Matrix B.


printf("\nEnter elements for Matrix B.\n");

for(i=0;i<R2;i++)
{
    for(j=0;j<C2;j++)

   {
        printf("B[%d][%d]= ",i,j);
        scanf("%d",&B[i][j]);
    }
     printf("\n");

}

// printing Matrix A .

printf("\nA Matrix=\n");

for(i=0;i<R1;i++)
{
    printf("\t");

    for(j=0;j<C1;j++)

    {
        printf("%d  ", A[i][j]);


    }
     printf("\n");


}

 // printing Matrix B.

printf("\nB Matrix=\n");

for(i=0;i<R2;i++)
{
   printf("\t");

    for(j=0;j<C2;j++)

    {
        printf("%d  ", B[i][j]);

    }
      printf("\n");


}


// Multiplying A & B Matrix.

for(i=0;i<R1;i++)

{
    for(j=0;j<C2;j++)


    {
       for(k=0;k<C1;k++)

       sum=sum+A[i][k]*B[k][j];


        C[i][j]=sum;

        sum=0;
    }

}
// printing C Matrix.

printf("\nA*B= ");

for(i=0;i<R1;i++)

{

   printf("\n");
    printf("\t");

    for(j=0;j<C1;j++)

    {
        printf("%d  ", C[i][j]);
    }

    printf("\n");

  }
}
