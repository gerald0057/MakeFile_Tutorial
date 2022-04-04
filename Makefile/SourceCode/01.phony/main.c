#include <stdio.h>
#include "prog.h"

int main(int argc, char *argv[])
{
    printf("prog(%d): %d", prog_get_num(), prog_func());
    return 0;
}