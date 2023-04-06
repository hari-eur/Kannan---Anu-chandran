/*3. Write a program to get the input from the file and create a new encrypted file and then read the encrypted file and decrypt the content. 
“You can use any logic for Encryption and decryption. When the Encrypted file is open it should not be in readable format ” 
 Sample Input/Output : 
Enter 
•	E to encrypt  
•	D to decrypt  
•	Q to quit 
E 
Enter the file to be Encrypted:/tmp/data.txt 
Encrypted File is /tmp/data_encrypted.txt 
Enter 
•	E to encrypt  
•	D to decrypt  
•	Q to quit 
D 
Enter the file to be decrypted:  /tmp/data_encrypted.txt 
Decrypted file is /tmp/data_decrypted.txt 
Enter 
•	E to encrypt  
•	D to decrypt  
•	Q to quit 
Q 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_FILENAME_LEN 256
#define MAX_BUFFER_LEN 1024
void encrypt_file(char* filename);
void decrypt_file(char* filename);
int main() 
{
    char choice;
    char filename[MAX_FILENAME_LEN];    
    do 
    {
        printf("Enter\nE to encrypt\nD to decrypt\nQ to quit\n");
        scanf(" %c", &choice);        
        switch (choice) 
        {
            case 'E':
            case 'e':
                printf("Enter the file name that is to be encrypted:");
                scanf("%s", filename);
                encrypt_file(filename);
                break;
                
            case 'D':
            case 'd':
                printf("Enter the file name that is to be decrypted:");
                scanf("%s", filename);
                decrypt_file(filename);
                break;
                
            case 'Q':
            case 'q':
                printf("Quitting program...\n");
                break;
                
            default:
                printf("Invalid character choice!\n");
                break;
        }
    } while (choice != 'Q' && choice != 'q');    
    return 0;
}

void encrypt_file(char* filename) 
{
    FILE *fp_in, *fp_out;
    char out_filename[MAX_FILENAME_LEN];
    char buffer[MAX_BUFFER_LEN];
    int i;
    fp_in = fopen(filename, "r");
    if (fp_in == NULL) 
    {
        printf("Could not open file %s for reading!\n", filename);
        return;
    }
    strcpy(out_filename, filename);
    strcat(out_filename, "_encrypted");    
    fp_out = fopen(out_filename, "w");
    if (fp_out == NULL) 
    {
        printf("Could not open file %s for writing!\n", out_filename);
        fclose(fp_in);
        return;
    }
    while (fgets(buffer, MAX_BUFFER_LEN, fp_in))
     {
        for (i = 0; buffer[i] != '\0'; i++) 
        {
            buffer[i] = ~buffer[i];
        }
        fputs(buffer, fp_out);
    }
    fclose(fp_in);
    fclose(fp_out);    
    printf("Encrypted file is %s\n", out_filename);
}

void decrypt_file(char* filename) 
{
    FILE *fp_in, *fp_out;
    char out_filename[MAX_FILENAME_LEN];
    char buffer[MAX_BUFFER_LEN];
    int i;
    fp_in = fopen(filename, "r");
    if (fp_in == NULL) 
    {
        printf("Could not open file %s for reading!\n", filename);
        return;
    }
    strcpy(out_filename, filename);
    strcat(out_filename, "_decrypted");
    fp_out = fopen(out_filename, "w");
    if (fp_out == NULL) 
    {
        printf("Could not open file %s for writing!\n", out_filename);
        fclose(fp_in);
        return;
    }
    while (fgets(buffer, MAX_BUFFER_LEN, fp_in)) 
    {
        for (i = 0; buffer[i] != '\0'; i++)
         {
            buffer[i] = ~buffer[i];
        }
        fputs(buffer, fp_out);
    }
    fclose(fp_in);
    fclose(fp_out);    
    printf("Decrypted file is %s\n", out_filename);
}

/*
Enter
E to encrypt
D to decrypt
Q to quit
E
Enter the file name that is to be encrypted:hello.txt
Could not open file hello.txt for reading!
Enter
E to encrypt
D to decrypt
Q to quit
Q
Quitting program...
*/
