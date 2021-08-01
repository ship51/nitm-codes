//1.Write a program to read two files inside a folder and write to another
//folder with a different name using pointers.
//a.Folder A has two files x and y (contains one page data).
//b.Read the files x and y
//c.Write the contains of file x to file m in folder B and
//contains of file y to file n in folder B

//GETTING DESIRED OUTPUT

#include <stdio.h>
#include <stdlib.h>
#define datasize 1000

void main()
{
    FILE *fptr1, *fptr2, *tptr1, *tptr2;
    char rstr[datasize];
    char c;
    //int datasize = 200;

    if ((fptr1 = fopen("C://Users/Shivam/Documents/S3Project13/Prog1/A/x.txt", "r"))==NULL)
    {
        printf("\nError opening file!"); // Program exits if the file pointer returns NULL.
        exit(1);
    }
    if ((fptr2 = fopen("C://Users/Shivam/Documents/S3Project13/Prog1/A/y.txt", "r"))==NULL)
    {
        printf("\nError opening file!"); // Program exits if the file pointer returns NULL.
        exit(1);
    }
    tptr1 = fopen("C://Users/Shivam/Documents/S3Project13/Prog1/B/m.txt", "w");
    tptr2 = fopen("C://Users/Shivam/Documents/S3Project13/Prog1/B/n.txt", "w");
    printf("The files are now open!");
    printf("\nReading from files and writing to files. \n");

    //fread (rstr, sizeof(rstr), 1, fptr1);
    //fwrite (rstr, sizeof(rstr), 1, tptr1);
    //fread (rstr, sizeof(rstr), 1, fptr2);
    //fwrite (rstr, sizeof(rstr), 1, tptr2);

    //fgets (rstr, datasize, fptr1);
    //fputs (rstr, tptr1);
    while(c=fgetc(fptr1))
    {
        if (c==EOF)
            break;
        else
            fputc(c,tptr1);
    }
    while(c=fgetc(fptr2))
    {
        if (c==EOF)
            break;
        else
            fputc(c,tptr2);
    }

    //fgets (rstr, datasize, fptr2);
    //fputs (rstr, tptr2);
    //fscanf(fptr1, rstr);
    //fprintf(tptr1, rstr);

    printf("\nWriting to files complete.") ;

    fclose(fptr1);
    fclose(fptr2);
    fclose(tptr1);
    fclose(tptr2);
    printf("\n\nThe files are now closed.") ;

}
