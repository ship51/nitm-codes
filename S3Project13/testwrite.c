
//1.Write a program to read two files inside a folder and write to another
//folder with a different name using pointers.
//a.Folder A has two files x and y (contains one page data).
//b.Read the files x and y
//c.Write the contains of file x to file m in folder B and
//contains of file y to file n in folder B

#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fptr = NULL, *tptr = NULL;
    char rstr[50], wstr[50];
    int flag;
    if (fptr = fopen("testwrite.txt", "a")==NULL)
    {
        printf("\nError opening file!"); // Program exits if the file pointer returns NULL.
        exit(1);
    }

    printf("The file is now open!");
    printf("\nWriting to file : ");
    getchar();
    //scanf("%s", rstr);
    fgets (rstr, sizeof(rstr), stdin);
    fputs (rstr, tptr);
    printf("\nWriting one line. ") ;

    fclose(fptr);

    printf("\n\nThe file is now closed.") ;

}
