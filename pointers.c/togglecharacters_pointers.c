// Toggle the characters (upper case => lower case) (lowercase => uppercase)
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void toggleCase(char *str){
    for(int i=0;str[i]!='\0';i++){
        if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
        else if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
    }
}

int main(){
    char str[101];
    scanf(" %[^\n]",str);
    toggleCase(str);
    printf("%s",str);
    return 0;
}
