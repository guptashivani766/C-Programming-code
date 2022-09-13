#include<stdio.h>
#include<string.h>
//you manage a traversal agency and you want your n drivers to input their following details:
//1) name ,2) drivr license no.,3) route 4)kms
//your program be able to take n as input and your drivers will start inputing their details one by one.
//your program should prints the details of the drivers in a beautiful fashion.
//create structure
struct driver{
    char name[34];
    char license_no[45];
    char route[47];
    int kms;

};
int main(){
    struct driver d1,d2,d3;
    printf(" enter the details of the drivers 1 driver\n");
    printf("enter the name of first driver\n"); 
    scanf("%s",&d1.name);
    printf("enter the license no. of first driver\n"); 
    scanf("%s",&d1.license_no);
    printf("enter the route of first driver\n"); 
    scanf("%s",&d1.route);
    printf("enter the kms of first driver\n"); 
    scanf("%d",&d1.kms);

    printf(" enter the details of the drivers 2 driver\n");
    printf("enter the name of second driver\n"); 
    scanf("%s",&d2.name);
    printf("enter the license no. of second driver\n"); 
     scanf("%s",&d2.license_no);
    printf("enter the route of second driver\n"); 
    scanf("%s",&d2.route);
    printf("enter the kms of second driver\n"); 
    scanf("%d",&d2.kms);

    printf(" enter the details of the drivers 3 driver\n");
    printf("enter the name of third  driver\n"); 
    scanf("%s",&d3.name);
    printf("enter the license no. of third driver\n"); 
    scanf("%s",&d3.license_no);
    printf("enter the route of third  driver\n"); 
    scanf("%s",&d3.route);
    printf("enter the kms of third  driver\n"); 
    scanf("%d",&d3.kms);

    printf("for driver no.1 \n Name is %s\n",d1.name);
    printf("dl no. is %s \n",d1.license_no);
    printf("route is %s \n",d1.route);
    printf("kms is %d\n",d1.kms);
    
    printf("for driver no.2 \n Name is %s\n",d2.name);
    printf("dl no. is %s \n",d2.license_no);
    printf("route is %s \n",d2.route);
    printf("kms is %d\n",d2.kms);
    
    printf("for driver no.3\n Name is %s\n",d3.name);
    printf("dl no. is %s \n",d3.license_no);
    printf("route is %s \n",d3.route);
    printf("kms is %d",d3.kms);
    
   

    return 0;
}
