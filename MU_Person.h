
#ifndef MU_PERSON_H
#define MU_PERSON_H

#include "Thai_person.h"

class MU_person : public Thai_person {
private:
	long id;
	string name;
protected:

public:
	MU_person(long=112, string="Prapaporn", long=0);
	void display_person();
	~MU_person();
	long get_id(){ return id; }
};


MU_person::~MU_person(){
	cout << "Destructor id=" << id << endl;
}

MU_person::MU_person(long x, string n, long nat) : Thai_person(nat) {
	id   = x;
	name = n;
	cout << "MU person constructor " << id << endl;
}

void MU_person::display_person(){
	display_thai();
	cout << "id=" << id << " name=" << name << endl;
}

#endif
