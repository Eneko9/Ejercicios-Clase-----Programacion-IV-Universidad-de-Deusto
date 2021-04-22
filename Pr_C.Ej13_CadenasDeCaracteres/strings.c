/*
 * strings.c
 *
 *  Created on: 18 mar. 2021
 *      Author: eneko
 */

#include <stdio.h>
#include "strings.h"

void printString (char* str){
	int i = 0;
	while((str[i]) != '\0'){
		printf("%c", str[i]);
		i++;
		fflush(stdout);
	}printf("\n");
}
int length(char* str){
	int i2 = 0;
	int cont = 0;
	while((str[i2]) != '\0'){
		i2++;
		cont++;
	}
	return cont;
}
void copyString(char* dest, char* source){
	int i3 = 0;
		while((source[i3]) != '\0'){
			dest[i3] = source[i3];
			i3++;
		}
		dest[i3] = '\0';
}
void concat(char* s1, char*s2){
	int i4 = 0;
	while(*s1 != '\0'){
		i4++;
	}
	copyString(s1, s2);
}
