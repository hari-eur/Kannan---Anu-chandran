/*1.Write complete function with macro that takes argument dynmically.
Sample Input:
        print("Welcome to %s",data);
        print("Hello to %s: Welcome to %s,data_1,data_2);
       Implent the print API in MACRO.*/

#include <stdio.h>
#define print(fmt, ...) printf(fmt, ##__VA_ARGS__)
int main()
 {
    char data[100],data1[100],data2[100];
    printf("\nEnter your Field : ");
    scanf("%s",&data);
    printf("\nEnter your Name : ");
    scanf("%s",&data1);
    printf("\nEnter the Organaiztion : ");
    scanf("%s",&data2);
    print("\nWelcome to %s\n", data);
    print("\nHello %s!,Welcome to %s\n", data1, data2);
    return 0;
}

/*
Output
Enter your Field : Programming

Enter your Name : Kannan

Enter the Organaiztion : EmbedUR

Welcome to Programming

Hello Kannan!,Welcome to EmbedUR*/
