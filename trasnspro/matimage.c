#include<stdio.h>

#include<conio.h>

 

void main()

{

      int a[3][3],i,j,k;

 

      printf("Enter array: \n");

     

      for(i=0;i<3;i++)

      {

            for(j=0;j<3;j++)

            {

                  scanf("%d",&a[i][j]);

            }

      }

 

      printf("\n\nMORROR IMAGE: \n\t");

     

      for(i=0;i<3;i++)

      {

            for(j=2;j>=0;j--)

            {

                  printf("%d\t",a[i][j]);

            }

            printf("\n\t");

      }

 

 

      printf("\n\nWATER IMAGE: \n\t");

     

      for(i=2;i>=0;i--)

      {

            for(j=0;j<3;j++)

            {

                  printf("%d\t",a[i][j]);

            }

            printf("\n\t");

      }

 

      printf("\n\n180 rotation: \n\t");

     

      for(i=2;i>=0;i--)

      {

            for(j=2;j>=0;j--)

            {

                  printf("%d\t",a[i][j]);

            }

            printf("\n\t");

      }

 

     

 

      printf("\n\n90 rataion right: \n\t");

     

      for(i=0;i<3;i++)

      {

            for(j=2;j>=0;j--)

      {    

                  printf("%d\t",a[j][i]);

            }

            printf("\n\t");

      }

 

      printf("\n\n90 rataion left: \n\t");

     

      for(i=2;i>=0;i--)

      {

            for(j=0;j<3;j++)

      {    

                  printf("%d\t",a[j][i]);

            }

            printf("\n\t");

      }

 

 

 

      getch();

 

}

