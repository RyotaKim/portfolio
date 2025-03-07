#include <stdio.h>

    int main(){

        int n, ctr=0;
        
        int i, j;
        int uniqsalonga;
        printf("Enter the size of the  array: ");
        scanf("%d", &n);
        
        int array[n];

        printf("Enter the elements of the array:\n");
        
            for ( i = 0; i <n; i++)
            {
                scanf("%d", &array[i]);
            }
            
            for(int ctr = 0; ctr < n; ctr++)
            {
                int uniqel = 1;
                for(j = 0; j < n; j++)
                {
                    if(ctr != j && array[ctr] == array[j])
                    {
                     uniqel = 0;
                     break;
                    }
                }
                    if(uniqel == 1)
                    {
                        uniqsalonga= array[ctr];
                    break;
                    }
                    }             
                    printf("The unique element: %d", uniqsalonga);

                    return 0;
            }

            
            
    