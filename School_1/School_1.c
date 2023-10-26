
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>
#include <unistd.h>
//#include"f.h"
#include "school_1.h"
#define MAX_LINE_LEN 1024

int counter=0;
char phone[11];


void add_student(stud *p,int no_of_student)
{

    printf("Enter the name of the student:");
    scanf("%s",p[no_of_student].name);
    printf("Enter the grade of the student:");
    scanf("%f",&(p[no_of_student].grade));
    printf("Enter the age of the student:");
    scanf("%ld",&(p[no_of_student].age));
    printf("Enter the phone of the student:");
    scanf("%s",&(p[no_of_student].phone));
    printf("Enter the ID of the student:");
    scanf("%d",&(p[no_of_student].ID));
    printf("\tData Saved\n");
    printf("\n");
    counter++;

}
void print_student_data(stud *p,int no_of_student)
{
    printf("Name : %s\n",p[no_of_student].name);
    printf("Grade : %.2f\n",p[no_of_student].grade);
    printf("Age : %d\n",p[no_of_student].age);
    printf("Phone : %s\n",p[no_of_student].phone);
    printf("ID : %d\n",p[no_of_student].ID);
    printf("\n");

}
void print_all_students_data(stud *pp,int size)
{

    for(int i=1; i<=counter ; i++)
    {
        printf("Name:%6s| Grade:%.2f| Age:%2d| Phone:%11s| ID:%1d|\n",pp[i].name,pp[i].grade,pp[i].age,pp[i].phone,pp[i].ID);
        printf("--------------------------------------------------------\n");
    }
    printf("\n");
}
void edit_student_data(stud *p)
{
    int id;
    printf("Please enter the ID of student");
    scanf("%d",&id);
    printf("Enter the name of the student:");
    scanf("%s",p[id].name);
    printf("Enter the grade of the student:");
    scanf("%.2f",p[id].grade);
    printf("Enter the age of the student:");
    scanf("%ld",&(p[id].age));
    printf("Enter the phone of the student:");
    scanf("%s",&(p[id].phone));
    printf("Enter the ID of the student:");
    scanf("%d",&(p[id].ID));
    printf("\n");
}
void Calling_student(stud *p,int no_of_student)
{
    int x = 0, y = 0, t=0;
    int direction = 1;
    printf("%s\n",(p[no_of_student].name));
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.dwSize = 1;
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
    callingSound(5000);
    while (t<50)
    {
        system("cls");

        // Draw the moving point
        moveCursorTo(x, y);

        printf("%s Calling....\n",(p[no_of_student].phone));
        Sleep(100);

        // Update the position
        x += direction;

        // Reverse direction if hitting the edge
        if (x <= 0 || x >= 4)
        {
            direction *= -1;
        }
        Sleep(100);
        t++;
    }
    printf("No answer!\n");
    Beep(900,900);


}
void delete_student(stud *p,int index)
{
    if (index < 0 || index >counter)
    {
        printf("Invalid index\n");
        return;
    }

    // Shift elements after the deleted element
    for (int i = index; i <=counter-1; i++)
    {
        p[i] = p[i + 1];
    }

    // Update the size or count variable
    counter--;
}
void moveCursorTo(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


void callingSound(int duration)
{
    int period = 80;  // Length of each period in milliseconds
    int cycles = duration / period;  // Number of cycles

    for (int i = 0; i < cycles; i++)
    {
        printf("\a");  // Generate a simple beep sound
        usleep(period * 1000);  // Sleep for the period duration
    }
}

