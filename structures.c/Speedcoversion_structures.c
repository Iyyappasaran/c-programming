// Coversion of speed in terms of mph and kmph using structures.
#include <stdio.h>
#include <stdio.h>

struct converter{
    int choice;
    int speed;
};

double speedconverter(struct converter n){
    if(n.choice==1)
        return n.speed*1.60934;
    if(n.choice==2){
        return n.speed/1.60934;
    }
    else
        return -1;
}

int main(){
    struct converter n;
    scanf("%d %d",&n.choice,&n.speed);
    double result = speedconverter(n);
    if(n.choice==1){
        printf("\nIn kmph: %.2f",result);
    }
    else if(n.choice==2){
        printf("\nIn mph: %.2f",result);
    }
    else{
        printf("\nInvalid choice");
    }
    return 0;
}
