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
    char c, countc[5];
    char filename[10];
    strcpy(filename, "file");
    if ((fptr = fopen("C://Users/Shivam/Documents/S3Project13/Prog8/froml.txt", "r"))==NULL)
    {
        printf("\nError opening file!");
        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    printf("The file in now open!");
    printf("\nReading from file. \n\n");

    /*to create a file per 128 characters read
    read till end
        Read 128 characters
        Create a file of the requisite name and Write
        Close
    */

    //tptr = fopen("C://Users/Shivam/Documents/S3Project13/Prog8/to.txt", "w");

    int count=1;
    while(c=getc(fptr))
    {
        strcpy(filename, "file");
        if (c==EOF)
            break;
        else
            {
                sprintf(countc, "%d", count);
                strcat(filename, countc);
                strcat(filename, ".txt");
                printf("\n Filename = %s", filename);
                tptr = fopen(filename, "w");

                fgets (rstr, SIZE-1, fptr);
                printf ("\n%c%s", c, rstr);
                putc (c, tptr);
                fputs (rstr, tptr);

                fclose(tptr);
                count++;
            }
    }

    fclose(fptr);

    printf("\n\nThe file is now closed.") ;

}
