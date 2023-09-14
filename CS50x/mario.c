#include <stdio.h>

int main()
{
    int height;
    do
    {
        printf("ENTER THE HEIGHT (MAXIMUM 8): ");
        scanf("%d", &height);
    }while( height <= 0 || height > 8);
    
    for (int i = 0; i < 2 * height + 1; i++){
        for(int j = 0; j < height + 1;j++){
            if( j == height ){
                printf(" ");
            }
            else if( j + i >= height  - 1 )
            {
                printf("#");
            }else{
                printf(" ");
            }
        }
        for(int k = height + 1; k < 2 * height + 1;k++){
            if( k - height -1 <= i){
                printf("#");
            }else{
                printf(" ");
            }
        }

        printf("\n");
    }
}