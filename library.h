#include <cstdlib>
#include <ctime>
#include <iostream>
#include<vector>
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
    string randLowString(int n) {
        string s;
        for (int k = 0;k < n;k++) {
            s = s + randLowChar();
        }
        return s;
    }
    string randLowString() {
        int n = randInt();
        string s;
        for (int k = 0;k < n;k++) {
            s = s + randLowChar();
        }
        return s;
    }
    string randUppString(int n) {
        string s;
        for (int k = 0;k < n;k++) {
            s = s + randUppChar();
        }
        return s;
    }
    string randUppString() {
        int n = randInt();
        while (n == 0)
            n = randInt();
        string s;
        for (int k = 0;k < n;k++) {
            s = s + randUppChar();
        }
        return s;
    }
    string RandBigInt(int n) {
        string s;
        char ch;
        ch = '0' + randInt(9);
        s = s + ch;
        if (n == 1)
            return s;
        while (s[0] == '0') {
            ch = '0' + randInt(9);
            s[0] = ch;
        }
        for (int k = 1;k < n;k++) {
            ch = '0' + randInt(9);
            s = s + ch;
        }
        return s;
    }
    string RandBigInt() {
        int n = randInt();
        while (n == 0)
            n = randInt();
        string s;
        char ch;
        ch = '0' + randInt(9);
        s = s + ch;
        if (n == 1)
            return s;
        while (s[0] == '0') {
            ch = '0' + randInt(9);
            s[0] = ch;
        }
        for (int k = 1;k < n;k++) {
            ch = '0' + randInt(9);
            s = s + ch;
        }
        return s;
    }
    string randString(int n) {
        string s;
        for (int k = 0;k < n;k++) {
            s = s + randChar();
        }
        return s;
    }
    string randString() {
        int n = randInt();
        while (n == 0)
            n = randInt();
        string s;
        for (int k = 0;k < n;k++) {
            s = s + randChar();
        }
        return s;
    }
    vector<int> randArray(int n, int mx) {
        vector<int> a(n);
        for (int k = 0;k < n;k++)
            a[k] = randInt(mx);
        return a;
    }
    vector<int> randArray(int n) {
        vector<int> a(n);
        for (int k = 0;k < n;k++)
            a[k] = randInt();
        return a;
    }
    vector<int> randArray() {
        int n = randInt();
        vector<int> a(n);
        for (int k = 0;k < n;k++)
            a[k] = randInt();
        return a;
    }
}  // namespace TestLibrary