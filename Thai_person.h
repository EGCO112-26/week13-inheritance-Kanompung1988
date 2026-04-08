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
	cout << "Thai_person constructor nat_id=" << nat_id << endl;
}

Thai_person::~Thai_person(){
	cout << "Thai_person destructor nat_id=" << nat_id << endl;
}

void Thai_person::display_thai(){
	cout << "nat_id=" << nat_id << endl;
}

#endif

