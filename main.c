#include <stdio.h>


void inputMainMenu(){
	int userinputmain = 0; 
	printf("1. Create |");
    printf("2. Update |");
    printf("3. List |");
	printf("Input: ");
	scanf("%d", &userinputmain); 
	
}

int main(void) {
  
	inputMainMenu(); 


  return 0;
}
