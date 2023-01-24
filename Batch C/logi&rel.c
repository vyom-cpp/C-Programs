#include<stdio.h>
int main()
{
    int m,s;
    printf("Enter the value of m and s\n");
    scanf("%d%d", &m,&s);
    if(m>=33 && s>=33)
    {
        printf("You have passed both Maths and Science Exams");
    }
    else if(m>=33 && s<=33)
    {
        printf("You haved passed only Maths Exam");
    }
    else if(m<=33 && s>=33)
    {
        printf("You have passed only Science Exam");
    }
    else
    {
        printf("You failed both exams\nTry hard next time");
    }
    return 0;
}