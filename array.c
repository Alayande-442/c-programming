#include <stdio.h>
#include <stdlib.h>

  struct student{
        char name[20];
        char major[50];
        int age;
        double cgpa;

    };

int main() {
    int luckyNumbers[] = {2,14,13,24,16,28};
    int numbers[5];
    char name[] = "array of character";
    numbers[0] = 1000;
    luckyNumbers[3] = 500;
    printf("%d\n", luckyNumbers[1]);
    printf("%d\n", luckyNumbers[3]);
    printf("%d\n", numbers[0]);
    printf("%s\n", name);


    ////********* STRUCTS IN C *************///
    // sruct is like a container for storing data of any data type in c programming//

  struct student student1;
  student1.age = 30;
  student1.cgpa = 3.8;
  strcpy(student1.name,"olaoluwa");
  strcpy(student1.major, "engineering");

  struct student student2;
  student2.age = 20;
  student2.cgpa = 3.7;
  strcpy(student2.name, "badmus");
  strcpy(student2.major, "Accounting");

  printf("%s\n",student1.name);
  printf("%f\n", student1.cgpa);
  printf("%d\n", student1.age);
  printf("%s\n", student1.major);

  printf("%s\n", student2.name);
  printf("%d", student2.age);
    

    return 0;
}