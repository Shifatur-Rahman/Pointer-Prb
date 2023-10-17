#include <iostream>
using namespace std;

int main(){
    char c = 'A';
    char *p, **q;
    p = &c;
    q = &p;

    **q = 'B';

    cout<<c<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;

}
