// COMP3150 - Object-Oriented Programming
//	Student  Name:Safet Berberi
// Lecture Section Number: 03
// Assignment Name/Number:
//	Lab-Final Lab



#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "WITPerson.h"


using namespace std;

int main(void) {

	//inital vector to hold people
	vector<WITPerson> witPeople;

	WITPerson *person;

	int choice;

	cout << "Enter a person?(1-yes,0-no ):";
	cin >> choice;

	while (choice != 1 && choice != 0 ) {
		cout << "Choice must be 1 or 0. Try again."<<endl;
		cout << "Enter choice(1 or 0):";
		cin >> choice;
	}

	if (choice == 0) {
		cout << "Goodbye!";
	}

	while (choice != 0) {
		person = new WITPerson();
			cin >> *person;

			witPeople.push_back(person);

			cout << "Enter another person?(1-yes, 0-no):";
			cin >> choice;

			while (choice != 1 && choice != 0) {
				cout << "Choice must be 1 or 0. Try again." << endl;
				cout << "Enter choice(1 or 0):";
				cin >> choice;
			}
	}

	//displays the current people in the vector
	cout << "Displaying current list:"<<endl;
	cout << witPeople;


	/*
	vector<WITPerson>::iterator it;
	for (it = witPeople.begin(); it != witPeople.end(); ++it) {

		// For each friend, print out their info

		 it->printPerson();

	}


	*/
	system("PAUSE");



	//writing the people into a file

	cout << "Writing vector contents to file:";
	ofstream writer;
	writer.open("lab 6");
	
		writer << witPeople;
	
	cout << "Done writing to file.";
	writer.close();

	

	return 0;
}
