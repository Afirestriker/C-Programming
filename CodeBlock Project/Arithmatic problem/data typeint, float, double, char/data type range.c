
#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("Here Sizeof(int): %d byte", sizeof(int));

    printf("\n\nRange (%%d -signed int) is %d to %d\n", INT_MIN, INT_MAX);

    printf("\n\nRange (%%u -unsigned int) is %u to %u \n", INT_MIN, INT_MAX);

    printf("\n\nRange (%%ld -signed int long) is %ld to %ld \n", INT_MIN, INT_MAX);

    printf("\n\nRange (%%lu -unsigned int (long)) is %lu to %lu \n", INT_MIN, INT_MAX);

    printf("\n\nRange (%%lld -signed long long) is %lld to %lld \n", INT_MIN, INT_MAX);

    printf("\n\nRange (%%llu -unsigned long long) is %llu to %llu \n", INT_MIN, INT_MAX);

    printf("\n\nRange (%%hi -signed int short) is %hi to %hi \n", INT_MIN, INT_MAX);

    printf("\n\nRange (%%hu -unsigned int short) is %hu to %hu \n", INT_MIN, INT_MAX);

    return 0;
}
