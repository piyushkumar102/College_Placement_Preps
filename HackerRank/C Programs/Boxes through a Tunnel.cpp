#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
    int length, width, height;
} b;

typedef struct box box;

int get_volume(box b)
{
    return b.length * b.width * b.height;
}

int is_lower_than_max_height(box b)
{
    int max = 41;
    if (b.height < max)
        return 1;
    else
        return 0;
}
