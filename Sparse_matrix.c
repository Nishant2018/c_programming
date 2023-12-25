#include<stdio.h>

int main(){
  int rows, columns, srchElement, count=0,k=0,rm[3][15],size=0;

  
  printf("Enter the number of Row and Column: \n");
  scanf("%d %d", &rows, &columns);

  //create a 2D array of the same order
  int array[rows][columns];

  //Take inputs into the 2D array
  printf("Enter %d elements: \n", (rows*columns));
  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      scanf("%d", &array[i][j]);
    }
  }
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<columns;j++)
    {
      if(array[i][j]!=0)
      {
        size++;
      }
    }
  }
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<columns;j++)
    {
      if(array[i][j]!=0)
      {
        rm[0][k]=i;
        rm[1][k]=j;
        rm[2][k]=array[i][j];
        k++;
      }
    }
  }
  for(int i=0; i<3; i++){
    for(int j=0; j<size; j++){
      printf("\t%d",rm[i][j]);
      printf("\n");
    }
  }
  return 0;
}