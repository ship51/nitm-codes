//3. Write a program to copy some parts of the file and write to another file.

//NOT GETTING DESIRED OUTPUT

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 1000

void main()
{
    FILE *fptr, *tptr;
    char rstr[1000], wstr[1000], fname="";
    char str="", c, temp[2];
    int i;
    //printf("Enter name of file to copy from: ");
    //scanf("%s", fname);
    if (fptr = fopen("C://Users/Shivam/Documents/S3Project13/Prog3/A.txt", "r")==NULL)
    {
        printf("\nError opening file!"); // Program exits if the file pointer returns NULL.
        exit(1);
    }
    printf("The file is now open!");
    printf("\nReading from file and writing to files. \n");


    tptr = fopen("C://Users/Shivam/Documents/S3Project13/Prog3/At1.txt", "w");
    //while (fptr != EOF)
    while((c=fgetc(fptr))!='\n')
    {
        strcpy(temp, c);
        strcat(rstr, temp);
    }


    puts(rstr);
    fputs (rstr, tptr);

    /*for (i=1; i<=5; i++)
    {
        fgets (rstr, 125, fptr);

        if (isBlank (rstr) == 0)
        {
            fputs (rstr, tptr);
            i++;
        }

        //else
            //strcpy(wstr, rstr);
    }
*/

    //fread (rstr, sizeof(rstr), 1, fptr2);
    //fwrite (rstr, sizeof(rstr), 1, tptr2);

    //fgets (rstr, sizeof(rstr), fptr1);
    //fputs (rstr, tptr1);

    //fscanf(fptr1, rstr);
    //fprintf(tptr1, rstr);

    printf("\nWriting to files complete.") ;
    fclose(fptr);
    fclose(tptr);
    printf("\n\nThe files are now closed.") ;

}

int isBlank (char const *rstr)
{
    char *ch;
    int is_blank = 1;

    // Iterate through each character.
    for (ch=rstr; *ch!='\n'; ++ch)
    {
        if (!isspace(*ch))
        {
          // Found a non-whitespace character.
          is_blank = 0;
          break;
        }
    }
    return is_blank;
}
