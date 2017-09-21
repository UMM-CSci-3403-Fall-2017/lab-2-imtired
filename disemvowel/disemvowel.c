#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//#include <stdio.h>
//#include <ctype.h>

#include "disemvowel.h"

bool check_consonant(char ch){
        //ch = tolower(ch);
        return ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' 
		&& ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U';
} 

char* disemvowel(char* str) {
	int i;
	int consonants = 0;
	for(i = 0; i < strlen(str); i = i + 1 ){
		if(check_consonant(str[i])){
			consonants = consonants + 1;
		}
	}
      



	return (char*) "hi";
}


/*bool check_consonant(char ch){
	ch = tolower(ch);
	return ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u';
}*/


