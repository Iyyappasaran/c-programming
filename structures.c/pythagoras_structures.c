// To find whether the 3 digits a,b,c are a pythogorean triple as well as special triple or not.
#include <stdio.h>
#include <stdlib.h>

struct sides{
    int a,b,c;
};

int ispythagorean(struct sides n){
    int a = n.a;
    int b = n.b;
    int c = n.c;
    if(a>b){
        int temp =a;
        a=b;
        b=temp;
    }
    if(b>c){
        int temp=b;
        b=c;
        c=temp;
    }
    if(a>b){
        int temp =a;
        a=b;
        b=temp;
    }
    return (a*a + b*b == c*c);
}

int isspecial(struct sides n){
    int a = n.a;
    int b = n.b;
    int c = n.c;
    if(a>b){
        int temp =a;
        a=b;
        b=temp;
    }
    if(b>c){
        int temp=b;
        b=c;
        c=temp;
    }
    if(a>b){
        int temp =a;
        a=b;
        b=temp;
    }
    return (a==3&&b==4&&c==5);
}

int main(){
    struct sides n;
    scanf("%d %d %d",&n.a,&n.b,&n.c);
    if(ispythagorean(n)){
        printf("Pythagorean triple");
        if(isspecial(n)){
            printf("\nSpecial triple");
        }
        else{
            printf("\nNot a Special triple");
        }
    }
    else{
        printf("Not a Pythagorean triple");
    }
    return 0;
}
