#include <stdio.h>

int main()
{
  // ANSI-Escape-Codes verwenden, um die Ausgabe farbig zu gestalten
  
	printf("\033[2J"); // Bildschirm mit ANSI-Escape-Codes leeren
	printf("\033[1;35m"); // Pink färben
	
      	printf("     /\\_/\\   \n");
  	printf("    ( o.o )  \n");
  	printf("     > ^ <   \n");
  	printf("\033[0m"); // Farbe zurücksetzen

  return 0;
}

