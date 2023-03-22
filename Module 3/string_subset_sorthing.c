/*3.Read the input string and pass to a FUNCTION which returns string which is sorted in following format
 String Input:
123434acibdf295869asdsd37695dfgasd
String Output:
123344abcdfi256899addss35679addfgs

Explanation:
sort numbers and alphabets in subsets
123434 - acibdf - 295869 - asdsd - 37695 - dfgasd
123344 - abcdfi - 256899 - addss - 35679 - addfgs*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LEN 1000
void sortString(char *str);
int main()
 {
    char str[MAX_LEN];
    printf("Enter a string: \n");
    fgets(str, MAX_LEN, stdin);
    sortString(str);
    printf("Sorted string: \n%s", str);
    return 0;
}
void sortString(char *str)
 {
    int i, j, k, len = strlen(str);
    char temp;
    for (i = 0; i < len; i++)
     {
        for (j = i + 1; j < len; j++) 
        {
            if (isdigit(str[i]) && isdigit(str[j])) 
            {
                if (str[i] > str[j]) 
                {
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            } 
            else if (isalpha(str[i]) && isalpha(str[j])) 
            {
                if (str[i] > str[j]) 
                {
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }
    }
    for (i = 0; i < len; i = k) 
    {
        k = i + 1;
        while ((isdigit(str[k]) && isdigit(str[i])) || (isalpha(str[k]) && isalpha(str[i])))
         {
            k++;
        }
        for (j = i + 1; j < k; j++) 
        {
            if (isdigit(str[i])) 
            {
                if (isalpha(str[j])) 
                {
                    temp = str[j];
                    memmove(&str[i + 2], &str[i + 1], j - i - 1);
                    str[i + 1] = temp;
                }
            } 
            else if (isalpha(str[i]))
             {
                if (isdigit(str[j]))
                 {
                    temp = str[j];
                    memmove(&str[i + 2], &str[i + 1], j - i - 1);
                    str[i + 1] = temp;
                }
            }
        }
    }
}


/* Output:
 Enter a string:
123434acibdf295869asdsd37695dfgasd
Sorted string:
123344abcdfi256899addss35679addfgs
*/
