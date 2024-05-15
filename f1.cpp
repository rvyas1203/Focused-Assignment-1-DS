
/*
* FILE : f1.cpp
* PROJECT : Data Structures Focused Assignment 1
* PROGRAMMER : Raj Mahesh Vyas - 8908964
* FIRST VERSION : 05-14-2024
* DESCRIPTION :
*   This program allows the user to input information about flights, including the destination and date,
*   and stores this information using dynamic memory allocation. It defines structures and functions to
*   manage flight information, including filling and printing flight details. The main function prompts
*   the user for input, stores the information, prints it, and then frees dynamically allocated memory
*   to avoid memory leaks.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Define struct for flight information

struct FlightInfo {
	char *destination; // Pointer to dynamically allocated string for destination
	char *date; // Pointer to Dynamically allocated the string for date
};

