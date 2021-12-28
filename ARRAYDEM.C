#include<stdio.h>
#include<conio.h>
void main()
{

 /* int a[3], i;
  clrscr();

  printf("\n\n\n\n\tEnter the array elements:");

  for(i=0;i<3;i++)
  {
    scanf("%d",&a[i]);
  }

  for(i=0;i<3;i++)
  {
    printf("\n\t%d",a[i]);

  }
  getch();
  */


  int  col,row,n,k,j,temp=1;
  clrscr();

  printf("\n\n\tEnter the no row of pyramid : ");
  scanf("%d",&n);


  for(j=1;j<=3;j++)
  {
  printf("\n");
  temp=1;

  for( row=n ;row>0;row--)
  {
     for(k=row;k>=1;k--)
     {
	printf(" ");

     }


     for(col=1;col<=temp;col++)
     {
       printf("* ");


     }

     temp++;
     printf("\n");

     /*for(k=row;k<=temp;k--)
     {

       printf(" ");
     }*/
   }

   }

  getch();
}