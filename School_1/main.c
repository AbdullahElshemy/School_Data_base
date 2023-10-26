#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "school_1.h"

#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main()
{

    Beep(900,900);
    system("COLOR 0A");
    printf("\t\t\t########  #######  ##            #########   #########  ##\n");
    printf("\t\t\t##        ##       ##            ##     ##   ##     ##  ##\n");
    printf("\t\t\t##        ##       ##            ##     ##   ##     ##  ##\n");
    printf("\t\t\t## ## ##  ##       ## ### ## ##  ##     ##   ##     ##  ##\n");
    printf("\t\t\t      ##  ##       ##        ##  ##     ##   ##     ##  ##\n");
    printf("\t\t\t      ##  ##       ##        ##  ##     ##   ##     ##  ##\n");
    printf("\t\t\t########  #######  ##        ##  #########   #########  #########\n");

    Sleep(10000);
    int i,j,a;
    system("COLOR 0b");
    system("cls");
    printf("Loading");
    for(i=0 ; i<=6 ; i++)
    {
        for(j=0; j<1000000 ; j++)
            a = j;
        printf(".");
        Sleep(50);
    }

    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    int bar1 = 177, bar2 = 219;
    printf("\n\n\n\t\t\t\t");
    for(int i=0; i<25; i++)
        printf("%c",(char)bar1);
    printf("\r");
    printf("\t\t\t\t");
    for(int i=0; i<25; i++)
    {
        printf("%c",(char)bar2);
        Sleep(150);
    }
    printf("\n\t\t\t\t");
    system("Pause");
    stud s[1000];
    char school[30] = "School";
    int n,student_number,k=1;

    printf("\tWELCOME..\n\n");

    while(k!=0)
    {

        printf("Please choose the function that you want\n\n");
        printf("1-Add the student data.\n2-Print the data of student.\n3-Edit student data.\n4-Print data of all students.\n5-Calling Student phone.\n6-Delete student from school\n\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            system("COLOR 0A");
            printf("Enter the no.of student:");
            scanf("%d",&student_number);
            add_student(s,student_number);
            printf("Press 0 if you want to exist or 1 to continue\n");
            scanf("%d",&k);
            break;
        case 2:
            // system("COLOR E2");
            printf("Enter the ID of student:");
            scanf("%d",&student_number);
            printf("\n");
            print_student_data(s,student_number);
            printf("Press 0 if you want to exist or 1 to continue\n");
            scanf("%d",&k);
            break;
        case 3:
            //system("COLOR 0B");
            edit_student_data(s);
            printf("Press 0 if you want to exist or 1 to continue\n");
            scanf("%d",&k);
            break;
        case 4:
            //system("COLOR 0P");
            print_all_students_data(s);
            printf("Press 0 if you want to exist or 1 to continue\n");
            scanf("%d",&k);
            break;
        case 5:
            //system("COLOR 0G");
            printf("Enter the ID of student:");
            scanf("%d",&student_number);
            printf("\n");
            Calling_student(s,student_number);
            printf("Press 0 if you want to exist or 1 to continue\n");
            scanf("%d",&k);
            break;
        case 6:
            // system("COLOR 0Y");
            printf("Enter the ID of student:");
            scanf("%d",&student_number);
            printf("\n");
            delete_student(s,student_number);
            printf("Press 0 if you want to exist or 1 to continue\n");
            scanf("%d",&k);
            break;
        }

    }
    printf("Created By Abdullah-Elsheemy");
    return 0;
}

