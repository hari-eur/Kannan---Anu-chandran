/* 2.  Write structure with below mentioned variables and make the sizeof struct return 8 bytes only.But it should take input for all the below values and print the same. 
Variables in the structure: 
•	Hours 
•	Minutes 
•	Seconds 
•	Day 
•	Month  
•	Year */
 #include <stdio.h>
typedef struct 
{
    unsigned short hours;   // 2 bytes
    unsigned char minutes;  // 1 byte
    unsigned char seconds;  // 1 byte
    unsigned char day;      // 1 byte
    unsigned char month;    // 1 byte
    unsigned short year;    // 2 bytes
} MyStruct;

int main() 
{
    MyStruct s;
    printf("Enter hours: ");
    scanf("%hu", &s.hours);
    printf("Enter minutes: ");
    scanf("%hhu", &s.minutes);
    printf("Enter seconds: ");
    scanf("%hhu", &s.seconds);
    printf("Enter day: ");
    scanf("%hhu", &s.day);
    printf("Enter month: ");
    scanf("%hhu", &s.month);
    printf("Enter year: ");
    scanf("%hu", &s.year);
    printf("\nYou entered: %hu hours, %hhu minutes, %hhu seconds, %hhu day, %hhu month, %hu year\n",s.hours, s.minutes, s.seconds, s.day, s.month, s.year);
    printf("\nSize of MyStruct is %lu bytes\n", sizeof(s));
    return 0;
}

/*Enter hours: 5
Enter minutes: 45
Enter seconds: 22
Enter day: 10
Enter month: 3
Enter year: 2002

You entered: 5 hours, 45 minutes, 22 seconds, 10 day, 3 month, 2002 year
*/
