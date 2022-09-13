#include<stdio.h>
#include<conio.h>
void insert_record();
void display_record();
void search_record();
void del_record();
void update_record();
void sort_record();

struct student
{
    int roll;
    char sec[10];
    char name[40];
    int marks;
    float grade;
};
 struct student s;
 void main()
 {
     int ch;
     clrscr();

     while(ch!=7){
         clrscr();
         printf("\t********************************************\n");
         printf("\t\tWELCOME TO STUDENT MANAGEMENT PROGRAMMING\n");
         printf("\t********************************************\n\n\n");

                    printf("\t***** AVAILABLE FUNCTIONALITIES *****\n\n\n");
                    printf("\tt1:  Insert student records\n");
                    printf("\tt2:  Display student records\n");
                    printf("\tt3:  Search student records\n");
                    printf("\tt4:  Delete student records\n");
                    printf("\tt5:  Update student records\n");
                    printf("\tt6:  Sort student records\n");
                    printf("\tt7:  Exit\n\n");
                    printf("\t\tEnter your choice");
                    scanf("%d",&ch);
                    switch(ch)
                    {
                        case 1: clrscr();
                                insert_record();
                                break;
                        case 2: clrscr();
                                display_record();
                                break;
                        case 3: clrscr();
                                search_record();
                                break;
                        case 4: clrscr();
                                del_record();
                                break;
                        case 5: clrscr();
                                update_record();
                                break;
                        case 6: clrscr();
                                sort_record();
                                break;
                        case 7: exit(1);
                        default:printf("\n\t\t Wrong choice entered");

                    }
                    printf("\n\t\tPress any key to continue");
                    getch();

                }
 }
 
 void insert_record()
 {
     FILE *fp;

     fp=fopen("stu txt","ab+");

     if(fp==NULL){
         printf("\n\t\tError Cannot Open the File!!!");
         return;
     }
     printf("\t **** Previous Stored Data ****");
     display_record();

     printf("\n\n\t***** ENTER NEW STUDENT DATA *****\n\n");
     printf("\n\t\tEnter Student Roll Numner::");
     scanf("%d",&s.roll);
     fflush(stdin);
     printf("\n\t\tEnter Student Name::");
     gets(s.name);
     printf("\n\t\tEnter Student Section::");
     gets(s.sec);
     printf("\n\t\tEnter Student total Marks::");
     scanf("%d",&s.marks);
     printf("\n\t\tEnter Student Grade::");
     scanf("%f",&s.grade);
     fwrite(&s,sizeof(s),1,fp);
     {
         printf("\n\t\t !!! Student Record Inserted Successfully\n");
     }
     fclose(fp);
     printf("\n\t\t updated record !!!\n");
     display_record();

 }
 void display_record()
 {
     FILE *fp;
     fp=fopen("stu.txt","rb");

     if(fp==NULL){
         printf("\n\t\tError : cannot open the file!!!";)
     }
 }