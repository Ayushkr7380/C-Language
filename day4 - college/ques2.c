//Print the following Patters using only printf function.

#include<stdio.h>
int main(){
    int i,j;
    // for ( i = 2; i >=0; i--)
    // {
    //     for (j = 2; j >=0; j--)
    //     {
    //         printf("*");
    //     }

    //     printf("\n");
    // }

    // for ( i = 2; i >=0; i--)
    // {
    //     for (j = 2; j >=i; j--)
    //     {
    //         printf("*");
    //     }

    //     printf("\n");
    // }

     for ( i = 2; i >=0; i--)
    {
        for (j = 2; j >=0; j--)
        {
            if (i==1 && j ==1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
                
            }
            
        }

        printf("\n");
    }


    return 0;
}