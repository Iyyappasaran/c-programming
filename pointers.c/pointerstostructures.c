// Create pointer to structure and calculate area using pointer.
#include <stdio.h>

struct Rectangle{
    int length;
    int breadth;
};

int find_area(struct Rectangle *p){
    return p->length*p->breadth;
}

int main(){
    struct Rectangle n;
    scanf("%d",&n.length);
    scanf("%d",&n.breadth);
    printf("Area of rectangle:\n%d",find_area(&n));
    return 0;
}
