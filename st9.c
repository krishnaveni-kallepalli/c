#include <stdio.h>
#include <string.h>
struct student{
   int id;
   char name[30];
   float percentage;
};
int main(){
   int i;
   struct student s[2];
   for(i=0;i<2;i++)
   {
       printf("enter student %d id name percentage\n",i+1);
       scanf("%d %s %f",&s[i].id,s[i].name,&s[i].percentage);
       printf("\n");
   }
  
   for(i=0; i<2; i++){
      printf(" Records of STUDENT : %d \n", i+1);
      printf(" Id is: %d \n", s[i].id);
      printf(" Name is: %s \n", s[i].name);
      printf(" Percentage is: %f\n\n",s[i].percentage);
   }
   return 0;
}
