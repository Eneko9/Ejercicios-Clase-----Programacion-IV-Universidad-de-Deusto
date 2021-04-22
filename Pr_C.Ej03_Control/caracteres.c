/*
 * caracteres.c
 *
 *  Created on: 22 feb. 2021
 *      Author: eneko
 */
#include "caracteres.h"
#include <stdbool.h>

bool isUpperCase(char c){
	if(c >= 65 && c <= 98) return true;
	else return false;
}
bool isLowerCase(char c){
	if(c >= 97 && c <= 122) return true;
		else return false;
}
bool isLetter(char c){
	if(isUpperCase(c)||isLowerCase(c)) return true;
	else return false;
}
bool isNumber(char c){
	if(c >= 48 && c <= 57) return true;
	else return false;
}
int isOtherCharacter(int c){
	if(isLetter(c)||isNumber(c)) return false;
	else return true;
}
int isEnter(int c){
	if((c == 10)) return true;
	else return false;
}
//char toUpperCase(char c){
//
//}
//int toLowerCase(int c){
//
//}
