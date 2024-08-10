#include <iostream>
#include <stdc++.h>
using namespace std;

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main (){
    // Namespace = provides a solution for perventing name conflicts
    // in large projects.Each entity needs a unique name.
    // A namespace allows for identically named entities
    // as long as the namespaces are different

    int x = 0;
    // this is for the std namespace
    cout << x << endl;
    // this for first namespace
    cout << first::x;
    return 0;
}