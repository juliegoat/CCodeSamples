//#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void smallest(char wordx[], char wordy[]);

void main(){
	//Do not change this function
	char word1[100], word2[100], word3[100];

	printf("Enter the first word: ");
	gets(word1);

	printf("Enter the second word: ");
	gets(word2);

	printf("Enter the third word: ");
	gets(word3);

	smallest(word1, word2);
	smallest(word1, word3);
	smallest(word2, word3);	
	printf("%s\n%s\n%s\n", word1, word2, word3);

	system("\nPause");
}

void smallest(char wordx[], char wordy[]){
  //Complete this function. 
  //This function puts the smaller word of wordx and wordy into wordx and
  //the bigger word to wordy. 
  //Therefore on return wordx is smaller than wordy.
  //You need the buit-in functions strcmp and strcpy. Also look at the
  //function swap

  char temp[100];
            if(strcmp(wordx, wordy) >0){  
                         
                    //do swap
                    strcpy(temp, wordx);
                    strcpy(wordx, wordy);
                    strcpy(wordy, temp);
                        }


                 

}


