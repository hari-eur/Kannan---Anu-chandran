
/* 1. Write a c program with nested structure implementation with below data, 
Structure 1: Student_Detailes (Name,mailID,Mobile number,Percentage) 
Structure 2:Department(Dept Name,Struct Student_Details,TotalAveverage) 
Program takes input of all the fields above except Total Average per department. Calculate Total Average per department. 
Sample Input: 
Number of Inputs: 2 
Shiva shive@xxx.com 123456789 90% IT  
Giri giri@xxx.com 123456789 99% ECE 
Sample OutPut: 
Number of branches: 2 
Average percentage per Department: 
IT – 90% 
ECE – 99% */

#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_DEPARTMENTS 5

struct Student_Details {
    char name[50];
    char mailID[50];
    char mobile[15];
    float percentage;
};

struct Department {
    char name[50];
    struct Student_Details students[MAX_STUDENTS];
    int num_students;
    float total_average;
};

int main() {
    struct Department departments[MAX_DEPARTMENTS];
    int num_departments;
    float overall_average = 0;

    printf("Enter the number of departments: ");
    scanf("%d", &num_departments);

    for (int i = 0; i < num_departments; i++) {
        printf("\nEnter the name of department %d: ", i+1);
        scanf("%s", departments[i].name);

        printf("Enter the number of students in department %d: ", i+1);
        scanf("%d", &departments[i].num_students);

        for (int j = 0; j < departments[i].num_students; j++) {
            printf("\nEnter the name of student %d in department %d: ", j+1, i+1);
            scanf("%s", departments[i].students[j].name);

            printf("Enter the mailID of student %d in department %d: ", j+1, i+1);
            scanf("%s", departments[i].students[j].mailID);

            printf("Enter the mobile number of student %d in department %d: ", j+1, i+1);
            scanf("%s", departments[i].students[j].mobile);

            printf("Enter the percentage of student %d in department %d: ", j+1, i+1);
            scanf("%f", &departments[i].students[j].percentage);

            departments[i].total_average += departments[i].students[j].percentage;
        }

        departments[i].total_average /= departments[i].num_students;
        overall_average += departments[i].total_average;
    }

    overall_average /= num_departments;

    printf("\nDepartment-wise average percentages:\n");
    for (int i = 0; i < num_departments; i++) {
        printf("\nDepartment %d (%s) - Total Average: %.2f\n", i+1, departments[i].name, departments[i].total_average);
    }

    printf("\nOverall average percentage: %.2f\n", overall_average);

    return 0;
}

/*Output:
Enter the number of departments: 2

Enter the name of department 1: EEE
Enter the number of students in department 1: 1

Enter the name of student 1 in department 1: Kannan
Enter the mailID of student 1 in department 1: kannan@gmail.com
Enter the mobile number of student 1 in department 1: 1234567890
Enter the percentage of student 1 in department 1: 80

Enter the name of department 2: ECE
Enter the number of students in department 2: 1

Enter the name of student 1 in department 2: Muthu
Enter the mailID of student 1 in department 2: muthu@gmail.com
Enter the mobile number of student 1 in department 2: 0987654321
Enter the percentage of student 1 in department 2: 90

Department-wise average percentages:

Department 1 (EEE) - Total Average: 80.00

Department 2 (ECE) - Total Average: 90.00

Overall average percentage: 85.00
*/
