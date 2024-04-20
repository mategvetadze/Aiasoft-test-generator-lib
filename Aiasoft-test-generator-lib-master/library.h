#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
bool indicator = true;
namespace TestLibrary {
void check() {
    if (indicator) {
        srand((unsigned)time(0));
    }
    indicator = false;
}
int randInt() {
    check();
    return rand();
}
int randInt(int n) {
    check();
    return rand() % (n + 1);
}
int randInt(int l, int r) {
    check();
    if (l > r) swap(l, r);
    int n = (r - l) + 1;
    return l + rand() % n;
}
char randLowChar() {
    char ch = 'a' + randInt(25);
    return ch;
}
char randUppChar() {
    char ch = 'A' + randInt(25);
    return ch;
}
char randChar() {
    char ch = (char)randInt(32, 126);
    return ch;
}
int randNegInt() {
    int n = (-1) * randInt();
    return n;
}

}  // namespace TestLibrary