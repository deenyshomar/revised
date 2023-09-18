#include<stdio.h>
    typedef struct shomar
    {
        char name[30];
        int age;
        float dob;
    }shomar;
    int main(void)
    {

    shomar ID = {"Zaharaddeen Sunusi", 23, 06.06};

    printf("Shomar ID are:- \nNAME: %s\nAge: %d\nDOB: %.2f\n", ID.name, ID.age, ID.dob);
    }