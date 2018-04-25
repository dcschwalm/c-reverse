/*
In your main function, ask the user to enter their full name. Ensure that you can successfully store their name in a single character array, with the space. Ensure you do not have a rogue ‘\n’ character in the array. Make sure that you can handle a reasonable name. There’s a good chance that I won’t grade the assignment based upon your name. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int number(char *name);
void reverse(char *name, int length);
int space(char *name, int length);

int main(void){

	printf("Enter you first and last name(20 characters max):");
	char name[21] = {0};
	fgets(name, 21, stdin);

	int length = number(name);
	
	int sp = space(name, length);
	
	reverse(name, length);
	int i;
	int j;

/*
Within your main function, after you’ve called the other functions, 	reverse your name. For example, my name would be output as: Stroschein Josh.*/

	for(i=sp+1; i<length-1; i++){	
	printf("%c", name[i]);
	}

printf(" ");

	for(j=0; j<sp; j++){
	printf("%c", name[j]);
	}
printf("\n");
}
/*
Pass a pointer of your character array into a function that outputs the number of characters stored in your character array. This function will need to also return this integer back to your main function. You’ll need this value later.
*/
int number(char *name){

	int length = strlen(name);

	printf("The number of characters in your name is: %d\n", length);
	return length;
}

/*
Pass a pointer of your character array into a function this displays the reverse. For example, my name of Josh Stroschein would be output as: niehcsortS hsoJ
*/
void reverse(char *name, int length){
	int ch;

	for(ch=length; ch>=0; ch--){
	printf("%c", name[ch]);
	}
	printf("\n");
}

/*
Again, passing a pointer to your array, inform the user which character is the space in your name. For example, for Josh Stroschein, my function would output: 4, since the 5th element of my array would be the space (remember element vs element number). This function will need to also return this integer back to your main function. You’ll need this value later.
*/
int space(char *name, int length){

	int spacenum;

	for(spacenum=0; spacenum<length; spacenum++){
	int i = name[spacenum];
		if(i==32){
		printf("Number of characters before a space: %d", 			spacenum);
		return spacenum;
		}
	}
}
