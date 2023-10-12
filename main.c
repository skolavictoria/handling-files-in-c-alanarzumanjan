#include <stdio.h>
#include <string.h>
int main()
{
    char buffer[100];
    FILE *fp;
    char line[4];
    fp = fopen("test.txt","r");

    while(fgets(line,3,fp)!=NULL){
        strcat(buffer,line);
    }

    printf("%s",buffer);
    fclose(fp);
}