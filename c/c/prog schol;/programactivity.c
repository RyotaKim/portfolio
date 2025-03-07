#include <stdio.h>

int main(){
   int array1[3][4];
   int sum = 0;
   int average;
   int i=0, j=0;
   printf("Input 12 Values: ");
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 4; j++)
      {
        scanf("%d", &array1[i][j]);
       sum += array1[i][j];
      }
       
   }
      //Input 12 integers
    printf("The 12 numbers entered are:\n");
     for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 4; j++)
      {
       printf("%5d", array1[i][j]);
      }
      printf("\n");
 }    //The sum of the integers
    printf("The sum is: %d\n", sum);
     //Average of Integers
    average = sum/12;
    printf("The average is: %d\n", average);
  
   // Odd numbers
 printf("The odd numbers are: ");
    for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 4; j++)
      {
        if(array1[i][j] % 2 != 0 )
        
          printf("%d ",array1[i][j]);
      }
   }
        
        printf("\n");
        
        // Even Numbers
        printf("The even numbers are: ");
    for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 4; j++)
      {
        if(array1[i][j] % 2 == 0 )
        
          printf("%d ",array1[i][j]);
      }
   }

      // Smallest Element
      int small;
      small = array1[0][0];

         for(i = 0; i<3; i++)
         {
         for(j = 0; j<4; j++)
            {
               if(array1[i][j] < small)
               small=array1[i][j];
            }
         }
         printf("\nSmallest Element: %d\n", small);
    
      //Largest Element
       int large;
       large = array1[0][0];

         for(i = 0; i<3; i++)
         {
         for(j = 0; j<4; j++)
            {
               if(array1[i][j] > large)
               large=array1[i][j];
            }
         }
         printf("Largest Element Element: %d\n", large);  

         // Array in Reverse
          printf("Array in Reverse:\n");
     for (int i = 2; i >= 0; i--)
   {
      for (int j = 3; j >= 0; j--)

      {
       printf("%5d", array1[i][j]);
      }
      printf("\n");
 }  
      //Copying the Array
   int copy[i][j];

      for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 4; j++)
      {
       copy[i][j]=array1[i][j];
      }
   }
      
   
   return 0;     
}


