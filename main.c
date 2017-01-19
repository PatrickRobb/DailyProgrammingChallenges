#include <stdio.h>
/*
	Difficulty: Easy
	Compiler: gcc
	Coded in C.
	Programming challenge is to print out the lyrics to "The Twelve Days of Christmas."
	Must be compiled with the -std=c99 flag so that the for loops work.
*/
int main() {
	char *numbers[12] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth"};
	char *gifts[12] = {"a partridge in a pear tree", "two turtle doves", "three french hens", "four calling birds", "five golden rings", "six geese a laying", "seven swans a swimming", "eight maids a milking", "nine ladies dancing", "ten lords a leaping", "eleven pipers piping", "twelve drummers drumming"};
	int bool = 1;
	//printf("On the first day of Christmas,")
	for (int i = 0; i < 12; i++){
		printf("On the %s day of Christmas \nmy true love gave to me:\n", numbers[i]);
		for (int k = i; k >= 0; k--){
			if(k == 0 && bool == 0) printf("and ");
			bool = 0;
			printf("%s\n", gifts[k]);
		}
		printf("\n");
	}



}