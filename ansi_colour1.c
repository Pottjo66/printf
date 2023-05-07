#include<stdio.h>

int main(){

	char ascii_art[] =
	" 	\\\\\\\\\\\\  	\n"
	" 	/     \\ 	\n"
	"       (  o o  )	\n"
	"        \\  L  /		\n"
	"	 \\---/		\n"
	"	  \\_/		\n";

	printf( "\n \x1b[31;1m %s \x1b[0m\n",ascii_art );

{
  // ANSI-Escape-Codes verwenden, um die Ausgabe farbig zu gestalten
  
	// printf("\033[2J"); // Bildschirm mit ANSI-Escape-Codes leeren
	printf("\033[1;35m"); // Pink färben
	
      	printf("     /\\_/\\   \n");
  	printf("    ( o.o )  \n");
  	printf("     > ^ <   \n");
  	printf("\033[0m"); // Farbe zurücksetzen

  return 0;
}


}	

