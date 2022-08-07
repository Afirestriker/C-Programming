
#include <stdio.h>
int main()
{
    int num = 8;
    FILE * fp;
    fp = fopen("fputs_test.txt", "w");
    fputs("This is Guru99 Tutorial on fputs,", fp);
    fputs("We don't need to use for loop\n", fp);
    fputs("Easier than fputc function\n", fp);
    fprintf(fp, "this is fprintf %d \n", num);

    fclose(fp);


    return (0);
}
