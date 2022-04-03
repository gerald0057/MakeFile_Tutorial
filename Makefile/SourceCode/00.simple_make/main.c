#include "log.h"
#include "add.h"
#include "sub.h"
#include "hello.h"

int main(int argc, char *argv[])
{
    hello();

    printf("add (%d) + (%d) = (%d)\r\n", 3, 4, add(3, 4));
    printf("add (%d) + (%d) = (%d)\r\n", 3, 4, sub(3, 4));

    return 0;
}