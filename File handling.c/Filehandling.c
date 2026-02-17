// Opening a file test.txt and write "Hello World"
#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    fp = fopen("test.txt","w");
    if(fp==NULL){
        printf("File cannot be opened\n");
        return 1;
    }
    fprintf(fp,"Hello World\n");
    fclose(fp);
    return 0;
}
