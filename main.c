#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1,m2,m3,t,g;
    float a;
    printf("Student Grade Analyzer\n");
    printf("Enter Mathematics mark(out of 100): ");
    scanf("%d",&m1);
    printf("Enter Science mark(out of 100): ");
    scanf("%d",&m2);
    printf("Enter English mark(out of 100): ");
    scanf("%d",&m3);
    t=m1+m2+m3;
    a=t/3.0;
    printf("Total: %d\nAverage: %.2f\n",t,a);
    if (a>=80){
        printf("Grade: A");
    }
    else if(a>=70){
        printf("Grade: B");
    }
    else if(a>=60){
        printf("Grade: C");
    }
    else if(a>=50){
        printf("Grade: D");
    }
    else if(a<50){
        printf("Grade: F");
    }
    if (m1>=40){
        if(m2>=40){
            if(m3>=40){
                printf("\nResult: PASS");
            }
        }
    }
    else{
        printf("\nResult: FAIL");
    }
    return 0;
}
