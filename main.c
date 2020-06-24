#include <stdio.h>
#include <stdlib.h>
int main()
{

   int grades[7];/* array for store grades */
   int hours[7]; /*array for store number of hours*/
   float sum[7];/*array for sum the points*/
   float points[7];/* array to put for all grade its points*/
   char firstname[50]; /* first name for student */
   char lastname[50];/* last name for student */
   char username[]="admin";
   char id[50];
   int i,x,y,p,password,flag=0;
   float v=0,gpa,z=0;
   printf("enter the username:\n");
   scanf("%s",id);
   for (i=0;username[i]!='\0';i++){
    if (username[i]==id[i]){
        flag=1;
        break;
    }
    else flag=0;
   }
   printf("enter the password\n");
   scanf("%d",&password);
   while(flag!=1 || password!=1234){
  printf ("The username and password you entered did not match our records\n");
  printf("enter the username:\n");
   scanf("%s",id);
   printf("enter the password\n");
   scanf("%d",&password);
   }
   printf(" enter your choice\n");
   printf("1.enter 1 to calculate the gpa\n");
   printf("2.enter 2 to end the program\n");
   scanf("%d",&p);
   if (p==2){ /* p its a variable which start the program*/
printf("the program is ended");
 }
  while (p!=2 && p==1){
      printf("enter the students name:\n");
        scanf("%s %s",firstname,lastname);
   printf("enter the number of subjects ?\n");
   scanf("%d",&y);
   printf("enter your grades ?\n");
   for (i=0;i<y;i++)
   {
         printf("subject %d: ",(i+1));
          scanf("%d",&grades[i]);
       while(grades[i]<0 || grades[i]>100 ){
      {
          printf("erorr\n");
          printf("subject %d: ",(i+1));
       scanf("%d",&grades[i]);
       }
       }
   }
   printf("enter your hours ?\n");
   for (i=0;i<y;i++)
    {
     printf("subject %d: ",(i+1));
      scanf("%d",&hours[i]);

    }
   for (i=0;i<y;i++)
    {
    if (grades[i]>=90){
        points[i]=4;
        sum[i]=points[i]*hours[i];
    }
    else if (grades[i]>=85)
    {
        points[i]=3.75;
        sum[i]=points[i]*hours[i];
    }
    else if (grades[i]>=80){
        points[i]=3.4;
        sum[i]=points[i]*hours[i];
    }else if (grades[i]>=75){
        points[i]=3.1;
        sum[i]=points[i]*hours[i];
    }else if (grades[i]>=70){
        points[i]=2.75;
        sum[i]=points[i]*hours[i];
    }
    else if (grades[i]>=65){
        points[i]=2.5;
        sum[i]=points[i]*hours[i];
    }
    else if (grades[i]>=60){

        points[i]=2.2;
        sum[i]=points[i]*hours[i];
    }
    else if (grades[i]>=50){
        points[i]=2;
        sum[i]=points[i]*hours[i];
    }
    else if (grades[i]<50){
        points[i]=1;
        sum[i]=points[i]*hours[i];
    }}
    for (x=0;x<y;x++){
        v+=sum[x]; /*v store sum of grades points */
    z+=hours[x]; /* z store sum of hours */
    }
gpa =v/z;
printf("student name %s %s his gpa %2f\n",firstname,lastname,gpa);
printf("-----------------------------------\n");
   printf(" enter ur choice\n");
   printf("1.enter 1 to calculate the gpa\n");
   printf("2.enter 2 to end the program\n");
   scanf("%d/n",&p);
if (p==2){
printf("the program is ended");
 }
   }
return 0;
}