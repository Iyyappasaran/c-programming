// Evaluate the student's grade by find average using functions.
#include <stdio.h>
#include <stdlib.h>

float avgmark(int s1,int s2,int s3){
    return (s1+s2+s3)/3.0;
}

char Findgrade(int s1,int s2,int s3){
    float avg = avgmark(s1,s2,s3);
    float avg23 = (s2+s3)/2.0;
    if(avg>=90){
        return 'A';
    }
    else if(avg>=70 && avg<=89){
        if(s3>90)
            return 'A';
        else
            return 'B';
    }
    else if(avg>=50 && avg<=69){
        if(avg23>70)
            return 'C';
        else
            return 'D';
    }
    else
        return 'F';
}
int main(){
    int s1,s2,s3;
    scanf("%d %d %d",&s1,&s2,&s3);
    float average = avgmark(s1,s2,s3);
    char grade = Findgrade(s1,s2,s3);
    printf("The average score is: %.2f",average);
    printf("\nThe student's grade is: %c",grade);
    return 0;
}
