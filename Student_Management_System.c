/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Student menagement system
#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

struct student s[20];
int n = 0;

//Function prototype 
void addstu();
void display();
void search();
void deletestu();
void topper();
void sort();

int main () {
    int choice;
    do {
        printf("\n\n===============================\n");
        printf("|  Student Management System  |\n");
        printf("===============================\n");
        printf("---Enter your choice---\n1. Add Student.\n2. List all Students.\n3. Search a Student.\n4. Delete a Student.\n5. Topper.\n6. Sort the list.\n7. Exit\n");
        printf("Enter Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: addstu();
            break;

            case 2: display();
            break;

            case 3: search();
            break;

            case 4: deletestu();
            break;

            case 5: topper();
            break;

            case 6: sort();
            break;

            case 7: printf("Thanking You !");
            break;

            default: printf("Invalid Choise ! ");
        }

    }while(choice != 7);
    return 0;
}

//Add Student
void addstu(){
    printf("Enter Roll no.: ");
    scanf("%d", &s[n].roll);
    printf("Enter Name : ");
    getchar();
    gets(s[n].name);
    printf("Enter Marks : ");
    scanf("%f", &s[n].marks);
    n++;
    printf("---Student Sucessfully Added!---\n");
}

// Display Data
void display() {
    int i;
    if(n==0){
        printf("\nNO Data Found!");
        return;
    }
    for(i=0;i<n;i++)
    {
        printf("\n\n===Student Info===\n");
        printf("Roll No.: %d\nName :%s\nMarks: %.2f", s[i].roll, s[i].name, s[i].marks);
    }
}

//Search Student
void search(){
    int i, search;
    printf("Enter roll no. to Search:  ");
    scanf("%d", &search);

    for(i=0;i<n;i++)
    {
        if(s[i].roll==search)
        {
            printf("Roll No.: %d\nName :%s\nMarks: %.2f", s[i].roll, s[i].name, s[i].marks);
            return;
        }
    }
    printf("Student Not Found! ");
}

//Delete a Student
void deletestu(){
    int i, roll, j;
    printf("Enter the roll no. to Delete: ");
    scanf("%d", &roll);
    for(i=0;i<n;i++)
    {
        if(s[i].roll==roll)
        {
            for(j=i;j<n-1;j++)
            {
                s[j] = s[j+1];
            }
            n--;

            printf("====Successfully Deleted====");
            return;
        }
    }
    
    printf("Student Not Found! \n");

}

//topper
void topper(){
    int i, top=0;
    if(n == 0)
    {
        printf("No record Found!");
        return;
    }
    for(i=0;i<n;i++)
    {
        if(s[i].marks > s[top].marks)
        {
            top = i;
        }
    }

    printf("\n=====Topper's Details====");
    printf("Roll No.: %d\nName :%s\nMarks: %.2f", s[top].roll, s[top].name, s[top].marks);

}

//Sort by marks
void sort(){
    int i, j;
    struct student temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(s[j].marks< s[j+1].marks)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    printf("\n====Sorted list====\n");
    for(i=0;i<n;i++)
    {
        printf("\n====Student detail=====\n");
        printf("Roll No.: %d\nName :%s\nMarks: %.2f", s[i].roll, s[i].name, s[i].marks);

    }
}

//Jai shree ram
