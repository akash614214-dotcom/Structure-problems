#include<stdio.h>

struct student
{
    int roll_no;
    float per;
    char name[20];
};
int main () {
    struct student s[10];
    int i, n;
    printf("Enter no.of student: ");
    scanf("%d", &n);
    printf("Enter detail of each student; ");
//input
    for(i=0;i<n;i++)
    {
        printf("\n---Enter detail of student %d---\n", i+1);
        printf("Enter the roll no. of Student :  ");
        scanf("%d", &s[i].roll_no);
        printf("Enter the name of Student :  ");
        getchar();
        gets(s[i].name);
        printf("Enter the Percentage of Student :  ");
        scanf("%f", &s[i].per);
    }
//output
    for(i=0;i<n;i++)
    {
        printf("\n----Student info----\n");
        printf("Name: %s\n", s[i].name);
        printf("Roll no : %d\n", s[i].roll_no);
        printf("Marks %.2f\n", s[i].per);
    }
    return 0;
}
