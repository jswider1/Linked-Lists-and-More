#include "ContactList.h"
using namespace std;

ContactList::ContactList():head(0), size(0){
}

void ContactList::addToHead(const string& name){
		
	Contact* newOne = new Contact(name);
	
	if(head == 0){
		head = newOne;
	}else{
		newOne->next = head;
		head = newOne;
	}
	size++;
}

void ContactList::printList(){
	Contact* tp = head;
	
	while(tp != 0){
		cout << *tp << endl;
		tp = tp->next;
	}
}
