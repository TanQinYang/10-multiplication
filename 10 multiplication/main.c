#include <stdio.h>
#include <stdlib.h>


int main()
{


 int row;
for(row=1;row<=9;row=row+1)
{
    int col;
    for(col=1;col<=row;col=col+1)
      printf("%d*%d=%d\t ",row,col,row*col);
printf("\n");

}

/*int row=1;
while (row<=9)
{
    int col=1;
    while (col<=row)
     {
      printf("%d*%d=%d\t ",row,col,row*col);
      col=col+1;
     }
    row=row+1;
    printf("\n");

}
*/
return 0;
}
