#include<stdio.h>

int main(){

int i,j,numberOfRows,numberOfCols;

int A[10][10],B[10][10],C[10][10];

printf("Enter the number of Rows and Cols: ");

scanf("%d %d", &numberOfRows,&numberOfCols);

//scanning matrix A

printf("Enter elements for matrix A.\n");

for(i=0;i<numberOfRows;i++)

{
   for(j=0;j<numberOfCols;j++)

 {
   printf("A[%d][%d] = ",i,j);
    scanf("%d",&A[i][j]);
}

printf("\n");

}
//scanning matrix B

printf("\n\nEnter elements for matrix B.\n");

for(i=0;i<numberOfRows;i++)

{
  for(j=0;j<numberOfCols;j++)

   { printf("B[%d][%d]= ",i,j);
    scanf("%d",&B[i][j]);
}

printf("\n");

}


//printing matrix A.

printf("A= ");

for(i=0;i<numberOfRows;i++)
{
    printf("\t");
        for(j=0;j<numberOfCols;j++)

  {
     printf("%d  ", A[i][j]);

}

printf("\n");

}




//printing matrix B.

printf("\n\nB= ");

for(i=0;i<numberOfRows;i++)
{
   printf("\t");
        for(j=0;j<numberOfCols;j++)

   {
       printf("%d  ", B[i][j]);

}

printf("\n");

}

//ADDITION OF A & B

for(i=0;i<numberOfRows;i++)
{
    for(j=0;j<numberOfCols;j++)

    {

       C[i][j]=A[i][j] + B[i][j];

    }

}


//printing C MATRIX.

printf("\nA+B= ");

for(i=0;i<numberOfCols;i++)

{
    printf("\n");

    printf("\t");

    for(j=0;j<numberOfCols;j++)

    {
        printf("%d  ",C[i][j]);
    }

    printf("\n");

}





}
