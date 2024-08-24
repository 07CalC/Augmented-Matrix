#include <stdio.h>
int main() {

  int row;
  int col;

  printf("enter number of rows");
  scanf("%d", &row);

  printf("enter number of columns");
  scanf("%d", &col);

  int arrOne[row][col +1];
  int arrTwo[row][1];

  printf("enter values for first array\n");

  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      printf("enter element %d %d: ", i+1, j+1);
      scanf("%d", &arrOne[i][j]);
    }
  }

  printf("enter values for second array\n");

  for(int i = 0; i<row; i++){
    for(int j=0; j<1; j++){
      printf("enter element %d %d:", i+1, j+1);
      scanf("%d", &arrTwo[i][j]);
    }
  }

  for(int i = 0; i<row; i++){
    arrOne[i][col] = arrTwo[i][0];
  }


  printf("the augmented matrix is: \n");
  printf("------------------------\n");
  for(int i=0; i<row; i++){
    for(int j=0; j<col+1; j++){
      printf("%d ", arrOne[i][j]);
      
    }

    printf("\n");
  }

  
  
  
  return 0;
}