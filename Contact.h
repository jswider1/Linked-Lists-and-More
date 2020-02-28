
#ifndef CONTACT_H_
#define CONTACT_H_

#include <iostream>
#include <string>

class Contact{
		// friend function for overloading the operator
		// overloading the insertion operator
		// "os" name associated with the ostream object
		// pass by reference the Contact value
		friend std::ostream& operator<<(std::ostream& os, const Contact& c);
		friend class ContactList;
		
public:
		// standing in as a default constructor
		Contact(std::string name = "none");
		
private:
		// data member "name"
		std::string name;
		// link pointer ot the next thing in the link list
		Contact* next; 
};


#endif // CONTACT_H_
