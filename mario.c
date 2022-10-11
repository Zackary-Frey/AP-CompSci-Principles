#include <cs50.h>
#include <stdio.h>

int main()
{
    int height = 0;
    int spaces = 0;
    int tags = 0;
    int spaces2 = 0;
    int tags2 = 0;

    do {
        height = get_int("Pyramid Height: ");
    }
    while (height <= 0 || height > 8);

    spaces = height - 1;

    tags = (height - spaces);

       do {

        while(spaces2 != spaces){
            printf(" ");
            spaces2++;
        }
        spaces2 = 0;

        while(tags2 != tags){
            printf("#");
            tags2++;
        }
        tags2 = 0;
        spaces--;
        tags++;

        printf("\n");
    }

    while(tags != height + 1);



//printf("%d\n", spaces);
//printf("%d\n", tags);
}
