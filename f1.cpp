
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

// Fuction to allocate memory and fill FlightInfo struct with destination and date 
void fillFlightInfo(struct FlightInfo* flight, const char* dest, const char* date) {

	//Allocate memory for the destination string and copy the destination into it.
	flight->destination = (char*)malloc(strlen(dest) + 1); // +1 for null terminator
	strcpy_s(flight->destination, dest);

	//Allocate Memory for the date string and copy the data into it.
	flight->date = (char*)malloc(strlen(date) + 1); // +1 for null terminator
	strcpy_s(flight->date, date);
}

// Function to print flight information 
void printFlightInfo(struct FlightInfo* flights) {
	// Print headers for the flight information
	printf("%-35s%-35s\n", "Destination", "Date");
	// Loop through each flight and print its destination and date
	for (int i = 0; i < 10; i++) {
		printf("%-35s%-35s\n", flights[i].destination, flights[i].date);
	}
}

int main() {
	// Declare array of FlightInfo structs to hold information for 10 flights
	struct FlightInfo flights[10];

	// Prompt user for flight information and fill FlightInfo structs
	for (int i = 0; i < 10; i++) {
		char dest[30], date[30];  // Temporary buffers to hold user input
		printf("Flight %d:\n", i + 1);

		// Get destination from user
		printf("Enter destination: ");
		fgets(dest, sizeof(dest), stdin);
		dest[strcspn(dest, "\n")] = '\0'; // Remove newline character

		// Get date from user
		printf("Enter date: ");
		fgets(date, sizeof(date), stdin);
		date[strcspn(date, "\n")] = '\0'; // Remove newline character

		// Fill the current FlightInfo struct with the user input
		fillFlightInfo(&flights[i], dest, date);
	}

	//Print all Flight information

	printf("\nFligth Informtation:\n");
	printfFligthInfo(flights);

}

