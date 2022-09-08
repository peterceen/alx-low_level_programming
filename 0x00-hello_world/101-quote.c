#include <stdio.h>

#include <stdlib.h>



/**
 *
 *  main - Entry point
 *
 *  Return: Always 1 (Success)
 *
 */
int main () {
	write(STDOUT_FILENO, "and that piece of art is useful
				\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
	   /*FILE *fp;

	      char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	        fp = fopen("file.txt" , "w" );
		 fwrite(str , 1 , sizeof(str) , fp );
	       fclose(fp);
	       return(0);*/

}
