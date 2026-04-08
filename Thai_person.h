#ifndef THAI_PERSON_H
#define THAI_PERSON_H

#include <iostream>
#include <string>
using namespace std;

class Thai_person{
	private: 
		long nat_id;
	public: 
		Thai_person(long=0);
		~Thai_person();
		void display_thai();
}; 

Thai_person::Thai_person(long id){
	nat_id = id;
}

Thai_person::~Thai_person(){
}

void Thai_person::display_thai(){
	cout << "nat_id=" << nat_id << endl;
}

#endif

