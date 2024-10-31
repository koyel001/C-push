// Write and Read Text File in C

#include <stdio.h>
#include <stdlib.h>

int main ()
{
  FILE* fptr; // Initialisation of File Pointer Variable
  
  int n;  // Number of lines
  char str[500]; // str Input
  char fname[50]="test.txt";
  char str1;
  
	// Design  to Display
    printf("\n\n Write multiple lines in a text file and read the file :\n");
	printf("------------------------------------------------------------\n");   
	
	// Taking input : Number of Lines
	printf(" Input the number of lines to be written : ");
	scanf("%d", &n);

	printf("\n :: The lines are ::\n");

    // Opening the file 
	fptr = fopen (fname,"w"); // Syntax : fopen("file_name",mode of opening)
    // Mode - read/write/append
    
	for(int i = 0; i < n+1; i++)
		{
		fgets(str, sizeof str, stdin);  // Taking input & store in the variable str
		fputs(str, fptr); // syntax : fputs("content to write",file_pointer)
		}
  fclose (fptr);

 //-------------- read the file -------------------------------------
	fptr = fopen (fname, "r"); //opening the File in Read Mode
	printf("\n The content of the file %s is  :\n",fname);
	str1 = fgetc(fptr);
	while (str1 != EOF) //EOF : Error opening File
		{
			printf ("%c", str1);
			str1 = fgetc(fptr);
		}
    printf("\n\n");
    fclose (fptr);
    return 0;
}