#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct student {
    int id;
    char* pname;
    double points;
} STUD;

void print_student(STUD s) {
    printf("[%d:%s] = %lf\n", s.id, s.pname, s.points);
}

void print_student2(STUD *ps) {
    printf("[%d:%s] = %lf\n", ps->id, ps->pname, ps->points);
}

int str_point(void)
{
    STUD pStuds[2] = { {1, "Choi", 9.9}, {2, "Park", 0.1} };

    /*STUD s1 = {1, "Choi", 9.9};
    STUD s2 = {2, "Park", 0.1};

    STUD* pstudnet = &s1;

    pstudnet->id = 5;*/

    /*s1.id = 1;
    s1.pname = "Choi";
    s1.points = 9.9;

    s2.id = 2;
    s2.pname = "Park";
    s2.points = 0.1;*/    

    print_student(pStuds[0]);
    print_student2(&pStuds[1]);

    return 0;
}