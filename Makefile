output: Contact.o ContactList.o ContactMain.o
	g++ Contact.o ContactList.o ContactMain.o -o output

ContactMain.o: ContactMain.cpp
	g++ -c ContactMain.cpp

Contact.o: Contact.cpp Contact.h
	g++ -c Contact.cpp

ContactList.o: ContactList.cpp ContactList.h
	g++ -c ContactList.cpp

clean:
	rm *.o output
