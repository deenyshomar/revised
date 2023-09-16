#include<stdio.h>
int main(void)
{
    FILE *fp;
    char Name[1023];
    float DateOfBirth;
    int YearWeMet;
    int linecount = 0;

    fp = fopen("bestfriends.txt", "r");

    while(fscanf(fp, "%s %f %d", Name, &DateOfBirth, &YearWeMet) != EOF)
    {
        ++linecount;
        printf("%d.Name : %s | Date of Birth : %.2f | Year we met : %d\n", linecount, Name, DateOfBirth, YearWeMet);
    }
    fclose(fp);
}