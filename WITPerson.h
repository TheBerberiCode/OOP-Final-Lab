#include <string>
#include <vector>
using namespace std;

class WITPerson
{
	friend ostream& operator<< (ostream&, vector<WITPerson> &);
	friend istream& operator>> (istream&, WITPerson&);
public:
	WITPerson(void);
	WITPerson(string , string  , string , string  );
	~WITPerson();
	WITPerson(WITPerson * person);

	string printPerson();
	string getName(void);
	string getAddress(void);
	string getWnumber(void);
	string getRole(void);

private:
	string  name;
	string   address;
	string   wnumber;
	string   role;
};
#pragma once
