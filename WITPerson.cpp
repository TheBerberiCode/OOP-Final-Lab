#include "WITPerson.h"
#include <string>
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

//default ctor
WITPerson::WITPerson(void)
{
	name = "Empty";
	address = "Empty";
	wnumber = "Empty";
	role = "Empty";

}

//ctor with 4 parameters
WITPerson::WITPerson(string name1, string  address1, string  wnumber1,string  role1)
{
	name = name1;
	address = address1;
	wnumber = wnumber1;
	role = role1;

}

//the destructor
WITPerson::~WITPerson()
{
}

//copy ctor
WITPerson::WITPerson(WITPerson * person)
{
	name = person->getName();
	address = person->getAddress();
	wnumber = person->getWnumber();
	role = person->getRole();

}

string WITPerson::getName(void)
{
	return name;
}

string WITPerson::getAddress(void)
{
	return address;
}

string WITPerson::getWnumber(void)
{
	return wnumber;
}

string WITPerson::getRole(void)
{
	return role;
}


ostream& operator<< (ostream& stream,  vector<WITPerson>& person) {
	
	//iterator for vector that displays all the people
	vector<WITPerson>::iterator it;
	for (it = person.begin(); it != person.end(); ++it) {

		// For each friend, print out their info

		stream << "Name: "<< it->getName() + "\n";
		stream << "Address: "<<it->getAddress() + "\n";
		stream << "Wnumber: "<<it->getWnumber() + "\n";
		stream << "Role: "<<it->getRole();

	}

	return stream;
	
}



istream& operator>> (istream& in, WITPerson &person) {
	int choice = 0;

	cout << "Enter 1 to add a student , 2 to add a faculty member, 3 to enter a staff member:" << endl;
	cin >> choice;
	cin.ignore();

	if (choice >= 1 || choice <= 4) {
		switch (choice) {
		case 1:
			cout << "Enter student name: ";
			getline(in, person.name);

			cout << "Enter student address: ";
			getline(in, person.address);


			cout << "Enter student W-number: ";
			getline(in, person.wnumber);


			person.role = "student";


			break;

		case 2:
			cout << " Enter faculty name: ";
			getline(in, person.name);

			cout << " Enter faculty address:";
			getline(in, person.address);

			cout << " Enter faculty W-number: ";
			getline(in, person.wnumber);

			person.role = "faculty";

			break;

		case 3:
			cout << " Enter staff name: ";
			getline(in, person.name);

			cout << " Enter staff address: ";
			getline(in, person.address);

			cout << " Enter staff W-number: ";
			getline(in, person.wnumber);

			person.role = "staff";

			break;

		}

		
	}

	return in;

}




