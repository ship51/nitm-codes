//3.2 Write a program to copy some parts of the file and write to another file.

//GETTING DESIRED OUTPUT

#include<stdlib.h>
#include<stdio.h>
int main()
{
    FILE *fptr, *fp1, *fp2, *fp3, *fp4, *fp5;
    char c;

    if ((fptr = fopen("C:/Users/Shivam/Documents/S3Project13/Prog3/A.txt", "r"))==NULL)
    {
        printf("\nError opening file!"); // Program exits if the file pointer returns NULL.
        exit(1);
    }

    fp1 = fopen("C:/Users/Shivam/Documents/S3Project13/Prog3/A1.txt","w");
    while((c=fgetc(fptr))!='&')
    {
        fputc(c,fp1);
    }
    //printf("\nPage 1 copied from A.txt to A1.txt");
    fclose(fp1);


    fp2 = fopen("C:/Users/Shivam/Documents/S3Project13/Prog3/A2.txt","w");
    while((c=fgetc(fptr))!='&')
    {
        fputc(c,fp2);
    }
    //printf("\nPage 2 copied from A.txt to A2.txt");
    fclose(fp2);


    fp3 = fopen("C:/Users/Shivam/Documents/S3Project13/Prog3/A3.txt","w");
    while((c=fgetc(fptr))!='&')
    {
        fputc(c,fp3);
    }
    //printf("\nPage 3 copied from A.txt to A3.txt");
    fclose(fp3);


    fp4 = fopen("C:/Users/Shivam/Documents/S3Project13/Prog3/A4.txt","w");
    while((c=fgetc(fptr))!='&')
    {
        fputc(c,fp4);
    }
    //printf("\nPage 4 copied from A.txt to A4.txt");
    fclose(fp4);


    fp5 = fopen("C:/Users/Shivam/Documents/S3Project13/Prog3/A5.txt","w");
    while((c=fgetc(fptr))!='&')
    {
        fputc(c,fp5);
    }
    //printf("\nPage 5 copied from A.txt to A5.txt");
    fclose(fp5);

    printf("\nAll pages have been copied !!");
    fclose(fptr);
    return 0;
}
