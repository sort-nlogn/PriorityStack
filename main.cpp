#include <iostream>
#include <vector>
#include "PriorityStack.hpp"
#include "PriorityStack.cpp"

using namespace std;

int main(){
    PriorityStack<int> s;
    s.push(8, 999);
    s.push(9, 420);
    s.push(12, 60);
    s.push(11, 34);
    s.push(8, 555);


    while(!s.is_empty()){
        cout << "Pop: " << s.pop() << endl;
    }

    /*
        Pop: 60
        Pop: 34
        Pop: 420
        Pop: 555
        Pop: 999
    */

    return 0;
}