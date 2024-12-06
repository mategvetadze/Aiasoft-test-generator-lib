#include "library.h"
using namespace TestLibrary;
using namespace std;

int main() {
    Library abc;
    pair<int,int> edges[100];
    abc.randomGraph(edges,10,5);
    for (int i=0;i<5;i++) {
        cout<<edges[i].first<<" "<<edges[i].second<<endl;
    }
    return 0;
}
