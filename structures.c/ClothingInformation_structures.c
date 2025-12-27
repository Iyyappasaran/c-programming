// To display the clothing items information using structures.
#include <stdio.h>
#include <stdlib.h>

struct info{
    char type[20];
    char clothing[20];
    char color[20];
};

int main(){
    struct info n;
    scanf("%s %s %s",&n.type,&n.clothing,&n.color);
    printf("Type: %s, Size: %s, Color: %s",n.type,n.clothing,n.color);
    return 0;
}
