#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// c file handling 
// (two type of file)
// 1, stream-oriented data files - the data is stored on the same manner as it appears on the screan
// 2, system-oriented data file -the data file are more closely associated with the OS.


// c file operations
// creation of a new file, opening, reading, writing on the file, closing the file.

// so the stapes for prossesing a file.
// 1, declare a file pointer variable
// 2, open a file using fopen ()
// 3,process the file using the suitable fun
// 4, close the file using fclose () fun

fun. on <stdio.h>
//: fopen, fclose, get(c, w,), put(c, w), fprintf (print formated out put in to the file), fscanf (read formated input from file), fgets, feof (it will detact n file marker in a single file)

/**
 * creat a fun that write on the file
 *
 * Return: 0
 */

int main()
{
	int open(const char *path, int oflag, ...);
int openat(int fd, const char *path, int oflag, ...);
}
{
	File *fopen(cont char *filepath, const char * mode);
}
{
	File *fp;

	fp = fopen("filename.txt", "w");

	// start procesing using a fun
	
	 fopen(fp, "%s", "Hello Alexander");
	//end process
	fclose(fp);
	return (0);
}
/**
 * creating - a file who write a fun
 *
 * Return: 0
 */
int main()
{
	File *filename; // a structure "File" *Fptr,
	char ch[100];
	
	// fopen("file_name, "mode"); 
	// "mode" could be "r","w","a", "r+","w+","a+"
	// "r+b".... working with "binary"
	filename = fopen("filename.txt", "r");


	// fputc(ch, filename)
	fprintf("%s" fgets(ch,50,filename));
	
	fclose(filename);
	return (0)
}

/**
 * how we can write a charachter
 *
 * return: 0
 */

{
	File *fptr;
	char ch[25] = "Hello Alexander";
	int length = strlen(data);
       int counter;
	
	*fptr = fopen("file.txt", "w" );

	if (fptr == 0);
	{
		printf("file can't be created");
	}
	else
	{
		for (count = 0; count <= strlen; count++)
		{
			printf("%c","writing charcter tofile");
			fputc(data(counter), fptr);
		}
		printf("data writen to the file successfully");

		fclose(fptr);
	}
	return (0);
}
