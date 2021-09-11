#include<stdio.h>
#include<conio.h>
main()
{
    clrscr();
    int stud_no;
    int classtd;
    char stud_name[20];
    printf("\n Enter Student Number: ");
    scanf("%d",&stud_no);
    printf("\n Enter Student Class: ");
    scanf("%d",&classtd);
    printf("\n Enter Student Name: ");
    scanf("%s",&stud_name);
    printf("\n\nThe Student Number is: %d",stud_no);
    printf("\nThe Student Name is: %s",stud_name);
    printf("\nThe Student Class is: %d",classtd);
    return 0;
}