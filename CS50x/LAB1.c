
#include <stdio.h>

int main(void)
{   
    int start, end, years = 0 ;
    //TODO: prompt for start size
    do
    {
        printf("ENTER STARTING POPULATION SIZE(MINIMUM9): " );
        scanf("%d", &start);
    }while( start < 9);
    //TODO: prompt for end size
    do
    {
        printf("ENTER ENDING POLPULATION SIZE (MAXIMUM%d): ",start);
        scanf("%d", &end);
    }while( end < start );
    //TODO: calculate number of years until we reseach threshold
    while( start < end )
    {
        start +=  start / 3 - start / 4;
        years++;
    }
    //TODO: printf number of years
    printf("Year: %d\n", years  );
    return 0;
}