/* Operators in C: Unary,Arithmetic,Assignment,Realtional and Logical using Unformatted functions */

#include <conio.h>
#include <stdio.h>
int main()
{
	char ch,a,b;
    printf(" Enter A for Unary Operation.\n Enter B for Arithmetic Operation \n Enter C for Assignment Operation \n Enter D for Relational Operation \n Enter E for Logical Operation \n");
    ch=getchar();
    printf("\nEnter the character1 :");
    a=getche();
    printf("\nEnter the character2 :");
    b=getche();
    int n1=(int)a;
    int n2=(int)b;
    switch(ch)
    {
        case 'A':
        {
            printf("\nUnary Operation: \n");
            int preinc=++n1;
            char ch1=(char)preinc;            
            putchar(ch1);
            printf("\n");
            int predec=--n1;
            char ch2=(char)predec;
            putchar(ch2);
            printf("\n");
            int postinc=n1++;
            char ch3=(char)postinc;
            putchar(ch3);
            printf("\n");
            int postdec=n1--;
            char ch4=(char)postdec;
            putchar(ch4);
            printf("\n");
            break;
        }
        case'B':
        {
            printf("Arithmetic Operation: \n");
            int sum=n1+n2;
            char ch1=(char)sum;
            putchar(ch1);
            printf("\n");
            int diff=n1-n2;
            char ch2=(char)diff;
            putchar(ch2);
            printf("\n");
            int prod=n1*n2;
            char ch3=(char)prod;
            putchar(ch3);
            printf("\n");
            int quo=n1/n2;
            char ch4=(char)quo;
            putchar(ch4);
            printf("\n");
            int rem=n1%n2;
            char ch5=(char)rem;
            putchar(ch5);
            printf("\n");
            break;
        }
        case 'C':
        {
            printf("\n Assignment Operation:\n");
            n1+=10;
            char ch1=(char)n1;
            putchar(ch1);
            printf("\n");
            n1-=10;
            char ch2=(char)n1;
            putchar(ch2);
            printf("\n");
            n1*=10;
            char ch3=(char)n1;
            putchar(ch3);
            printf("\n");
            n1/=10;
            char ch4=(char)n1;
            putchar(ch4);
            printf("\n");
            n1%=10;
            char ch5=(char)n1;
            putchar(ch5);
            printf("\n");
            break;
        }
        case 'D':
        {
            printf("\n Relational Operations:\n");
            int gr=n1>n2;
            char ch1=(char)gr;
            putchar(ch1);
            printf("\n");
            int gre=n1>=n2;
            char ch2=(char)gr;
            putchar(ch2);
            printf("\n");
            int le=n1<n2;
            char ch3=(char)gr;
            putchar(ch3);
            printf("\n");
            int lee=n1<=n2;
            char ch4=(char)gr;
            putchar(ch4);
            printf("\n");
            int eq=n1==n2;
            char ch5=(char)gr;
            putchar(ch5);
            printf("\n");
            int nte=n1!=n2;
            char ch6=(char)gr;
            putchar(ch6);
            printf("\n");
            break;

        }
        case 'E':
        {
            printf("\n Logical Operations:\n");
            int AND=(n1>5 && n2>10);
            char ch1=(char)AND;
            putchar(ch1);
            printf("\n");
            int OR=(n1>5 || n2>10);
            char ch2=(char)OR;
            putchar(ch2);
            printf("\n");
            int NOT=(n1!=n2);
            char ch3=(char)NOT;
            putchar(ch3);
            printf("\n");
            break;
        }
        default:
        {
            printf("Invalid Character");
        }
    }
    return 0;
}

