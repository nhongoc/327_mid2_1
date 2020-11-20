//============================================================================
// Name        : 327_mid2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include "countchars.h"
using namespace std;

int total_points=0;
//this is a template class, its mostly here as a helper for me
//the T and U are generic params, I can substitute any type for them
//they must be comparable with ==, templates are extremely hard to get right BTW
template<typename T, typename U>
bool EXPECT_EQ(T expectedVal, U actualVal,string testnumb, int pts){
	bool bout = (expectedVal == actualVal);
	if (bout){
		total_points+=pts;
		cout<<"SUCCESS "+testnumb+ "  total points="<<total_points;

	}
	else
		cout<<"FAIL "+ testnumb<< " Expected:"<<expectedVal<<"  got:"<<actualVal;
	cout<<endl;
	return bout;
}

int main() {
	//use pointers to count the number of 'a' chars in the following string
	char mystring3[]="a large coffee. No cream, no sugar";
	char c = 'a';

	int iret = countchars(&c,&mystring3[0]);
	EXPECT_EQ (4, iret,"1",30);

	iret = countchars(0,&mystring3[0]);
	EXPECT_EQ (NULL_CHAR_TO_FIND, iret,"2",10);

	iret = countchars(&c,0);
	EXPECT_EQ (NULL_STRING_TO_SEARCH, iret,"3",10);
}
