#include <stdio.h>
#include <string.h>
int main()
{
    char text[] = {"lol my children!"};
    FILE *fp;
    fp = fopen("test.txt","w");
    fprintf(fp,"test text\n!!!!!");
    fclose(fp);
    return 0;
}