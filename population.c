#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //TODO: Prompt for start size
    int start;
    do
{
    start = get_int("Starting Size: ");
}
while (start < 9);

//TODO: Prompt for end size
    int end;
do
{
    end = get_int ("Ending Size: ");
}
while (end < start);

//TODO: Calculate number of years until we reach threshold
    int years;
    years = 0;
do{
    years = (years + 1);
    start = start + (start / 3) - (start / 4);
}
while (start < end);
//Print number of years
printf("Years: %i\n", years);
}
