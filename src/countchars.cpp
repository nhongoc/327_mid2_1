/*
 * countchars.cpp
 *
 *  Created on: Nov 19, 2020
 *      Author: keith
 */
#include <string.h>
#include "countchars.h"

/** USE ONLY POINTERS FOR THIS FUNCTION PLEASE
 * \searches string_to_search counting occurrences of char_to_find using ONLY pointers
 *
 * \param char_to_find
 * \param string_to_search
 * \return NULL_CHAR_TO_FIND if char_to_find is null
 * 		   NULL_STRING_TO_SEARCH if string_to_search is null
 * 		   otherwise the number of times char_to_find occurs in string_to_search
 */
int countchars(char *char_to_find, char *string_to_search) {
	if (!char_to_find) {
		return NULL_CHAR_TO_FIND;
	}
	if (!string_to_search) {
		return NULL_STRING_TO_SEARCH;
	}
	int number_found = 0;
	for (unsigned int i = 0; i < strlen(string_to_search); i++) {
		if (*(string_to_search + i) == char_to_find[0]) {
			number_found += 1;
		}
	}
	return number_found;

}
