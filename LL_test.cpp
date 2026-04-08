#include <iostream>
#include <cstdlib>
#include <string>
#include "NODE.h"
#include "LL.h"
#include "student.h"
using namespace std;

int main(int argc, char *argv[])
{
    LL A;
    NODE *t;
    // argv: id1 gpa1 name1  id2 gpa2 name2 ...
    // each student takes 3 arguments
    for(int i = 1; i + 2 < argc; i += 3){
        long  id   = atol(argv[i]);
        double gpa = atof(argv[i+1]);
        string name = argv[i+2];

        student* s = new student(id, gpa, name);
        t = new NODE(s->get_id());
        A.add_node(t);
    }

    cout << endl;
    A.show_all();
    cout << endl;

    return 0;
}
