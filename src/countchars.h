/*
 * countchars.h
 *
 *  Created on: Nov 19, 2020
 *      Author: keith
 */

#ifndef COUNTCHARS_H_
#define COUNTCHARS_H_

const int NULL_STRING_TO_SEARCH = -1;
const int NULL_CHAR_TO_FIND = -2;

/** USE ONLY POINTERS FOR THIS FUNCTION PLEASE
 * \searches string_to_search counting occurrences of char_to_find using ONLY pointers
 *
 * \param char_to_find
 * \param string_to_search
 * \return NULL_CHAR_TO_FIND if char_to_find is null
 * 		   NULL_STRING_TO_SEARCH if string_to_search is null
 * 		   otherwise the number of times char_to_find occurs in string_to_search
 */
int countchars(char *char_to_find, char *string_to_search);

#endif /* COUNTCHARS_H_ */
