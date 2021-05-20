/*
Autor: Maskin Danil
IDE: Embarcadero Dev-C++ v. 6.3
OS: Windows 10
*/

#include <stdio.h>



int main(){
	int value = 0;
	int anotherValue = 1;
	int count = 0;
	printf("Enter value: ");
	scanf("%d", &value);
	if ( value > 1 ){	
		while ( value >= anotherValue) {
			if( value % anotherValue == 0){
				count++; 
			}
			anotherValue++;
		}
		if(count == 2){
			printf("This number \"%d\" is simple.\n", value);
		}
		else{
			printf("This number \"%d\" is complicated.\n", value);
		}	
	}
	else {
		if (value == 1){
			printf("Number \"1\" is simple. \n");
		}
		else {
			printf("Number\"0\" is simple. \n");
		}
	}
	return 0; 
}
