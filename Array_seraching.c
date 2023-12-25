#include<stdio.h>

int main(){
  int rows, columns, srchElement, count=0;

  printf("Enter the number of Row and Column: \n");
  scanf("%d %d", &rows, &columns);


  int array[rows][columns];


  printf("Enter %d elements: \n", (rows*columns));
  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      scanf("%d", &array[i][j]);
    }
  }
  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      printf("%d",array[i][j]);
      printf(" ");
    }
    printf("\n");
  }

 
  printf("Enter the element to get the position: \n");
  scanf("%d", &srchElement);

  for(int i=0; i<rows; i++){
    for(int j=0; j<columns; j++){
      if(array[i][j] == srchElement){
        
        printf("(%d, %d) \n", i, j);
        count++;
      }
    }
  }


  if(count==0)
    printf("Not found \n");

  return 0;
}