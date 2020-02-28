#include "ContactList.h"
using namespace std;

int main(){
	
	ContactList* cl1 = new ContactList();
	string name;
	
	while(true){
		
		cout << "Enter the next name for the list (or enter q to quit): " << endl;
		cin >> name;
		if(name == "q")
			break;
		cl1->addToHead(name);
	}
	
	cl1->printList();
	
	return 0;
}
