//8.Write a program to read 128 characters from a file and display/ print them
//Write a program to print and to copy 128 characters from a file till the end of file.
//WORKING FINE

#include <stdio.h>
#include <stdlib.h>
#define SIZE 128

void main()
{
    FILE *fptr, *tptr;
    char rstr[SIZE];
    char c;

    if ((fptr = fopen("C://Users/Shivam/Documents/S3Project13/Prog8/froml.txt", "r"))==NULL)
    {
        printf("\nError opening file!");
        // Program exits if the file pointer returns NULL.
        exit(1);
    }
    tptr = fopen("C://Users/Shivam/Documents/S3Project13/Prog8/to.txt", "w");

    printf("The file in now open!");
    printf("\nReading from file. \n\n");

    while(c=getc(fptr))
    {
        if (c==EOF)
            break;
        else
            {
                fgets (rstr, SIZE-1, fptr);
                printf ("%c%s", c, rstr);
                putc (c, tptr);
                fputs (rstr, tptr);
            }
    }

    fclose(fptr);
    fclose(tptr);
    printf("\n\nThe file is now closed.") ;

}
