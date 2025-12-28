// To find the validity of a triangle and determine its Area.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct sides{
    int side1;
    int side2;
    int side3;
};

int isvalid(int s1,int s2,int s3){
    return((s1+s2>s3)&&(s1+s3>s2)&&(s2+s3>s1));
}

void Area(struct sides n){
    if(isvalid(n.side1,n.side2,n.side3)){
        float s = (n.side1+n.side2+n.side3)/2.0;
        float area = sqrt(s*(s-n.side1)*(s-n.side2)*(s-n.side3));
        printf("Area: %.1f",area);
    }
    else{
        printf("Invalid Triangle");
    }
}

int main(){
    struct sides n;
    scanf("%d %d %d",&n.side1,&n.side2,&n.side3);
    Area(n);
    return 0;
}
