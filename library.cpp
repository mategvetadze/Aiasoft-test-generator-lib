#include "library.h"
using namespace TestLibrary;
using namespace std;

int main() {
    Library abc;
    int a[5];
    abc.randArray(a,5);
    for (int i : a) {
        cout<<i<<" ";
    }
    return 0;
}
