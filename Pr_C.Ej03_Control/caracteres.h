/*
 * caracteres.h
 *
 *  Created on: 22 feb. 2021
 *      Author: eneko
 */
#include <stdbool.h>
#ifndef CARACTERES_H_
#define CARACTERES_H_

bool isUpperCase(char c);
bool isLowerCase(char c);
bool isLetter(char c);
bool isNumber(char c);
int isOtherCharacter(int c);
int isEnter(int c);
char toUpperCase(char c);
int toLowerCase(int c);


#endif /* CARACTERES_H_ */
