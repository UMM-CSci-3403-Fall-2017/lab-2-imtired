#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
//#include <ctype.h>

#include "disemvowel.h"

/* takes a char, returns true if that char is NOT a vowel and flase otherwise */
bool check_not_vowel(char ch){
        return ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' 
		&& ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U';
} 
/* takes a string and returns a new string, which consists of the given string without any vowels */
char* disemvowel(char* str) {
	size_t leng = strlen(str);
	int i;
	int consonants = 0;
	/* this loop finds the number of non-vowel characters */
	for(i = 0; i < leng; i = i + 1 ){
		if(check_not_vowel(str[i])){
			consonants = consonants + 1;
		}
	}

	int j = 0;
	char* toReturn = (char*) malloc (consonants);//makes the new string, of the correct length
	/* this loop puts the non-vowel characters in the new string */
        for(i = 0; i < leng; i = i + 1 ){
		if(check_not_vowel(str[i])){
			toReturn[j] = str[i];	
			j = j + 1;
		}
	}
	toReturn[j] = '\0';

//	printf("%s\n",toReturn);
	free (toReturn);
	return (char*) toReturn;
}

