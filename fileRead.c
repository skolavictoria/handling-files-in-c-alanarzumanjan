#include <stdio.h>
#include <string.h>
int main()
{
    char buffer[100];
    FILE *fp;
    char line[4];
    fp = fopen("test.txt","r");

    while(fgets(line,5,fp)!=NULL){
        strcat(buffer,line);
    }

    fclose(fp);
    printf("%s",buffer);
}