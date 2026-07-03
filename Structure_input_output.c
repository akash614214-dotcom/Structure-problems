#include<stdio.h>

struct student
{
    int roll_no;
    float per;
    char name[20];
};

int main () {
    struct student s;
    
    //input mathod 
    printf("Enter the roll no. of Student :  ");
    scanf("%d", &s.roll_no);
    printf("Enter the name of Student :  ");
    getchar();
    gets(s.name);
    printf("Enter the Percentage of Student :  ");
    scanf("%f", &s.per);


    //Output method
    printf("----Student info----\n");
    printf("Name: %s\n", s.name);
    printf("Roll no : %d\n", s.roll_no);
    printf("Marks %.2f\n", s.per);
    return 0;
}
