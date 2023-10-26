
typedef struct
{
    char name[30];
    float grade;
    int age;
   char phone[11];
    int ID;
} stud;



void add_student(stud *p,int no_of_student);
void print_student_data(stud *p,int no_of_student);
void print_all_students(struct student *s);
void edit_student_data(stud *p);
void Calling_student(stud *p,int no_of_student);
void delete_student(stud *p,int index);
void moveCursorTo(int x, int y);
void callingSound(int duration);
