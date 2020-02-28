#include "Contact.h"
#include <stdio.h>

using namespace std;

string n;
// Constructor with initilizers for name and the pointer next, empty body
Contact::Contact(string n):name(n), next(NULL){
}

// overloaded insertion operator
ostream& operator<<(ostream& os, const Contact& c){
	return os << "Name: " << c.name;
}
