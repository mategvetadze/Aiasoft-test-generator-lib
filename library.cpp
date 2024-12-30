#include "library.h"
#include <cstdlib>
#include <ctime>
#include <algorithm>

// Private: anonymous namespace hides the implementation details
namespace {
    bool indicator = false;

    void check() {
        if (!indicator) {
            srand(time(nullptr));
            indicator = true;
        }
    }
}

namespace TestLibrary {
    int randInt() {
        check(); // Can access private check() here
        return rand();
    }

    int randInt(int n) {
        check();
        return rand() % (n + 1);
    }

    int randInt(int l, int r) {
        check();
        if (l > r) std::swap(l, r);
        int n = (r - l) + 1;
        return l + rand() % n;
    }

    char randLowChar() {
        return 'a' + randInt(25);
    }

    char randUppChar() {
        return 'A' + randInt(25);
    }

    char randChar() {
        return (char)randInt(32, 126);
    }

    int randNegInt() {
        return (-1) * randInt();
    }

    std::string randLowString(int n) {
        std::string s;
        for (int k = 0; k < n; k++) {
            s.push_back(randLowChar());
        }
        return s;
    }

    std::string randLowString() {
        int n = randInt();
        std::string s;
        for (int k = 0; k < n; k++) {
            s.push_back(randLowChar());
        }
        return s;
    }

    std::string randUppString(int n) {
        std::string s;
        for (int k = 0; k < n; k++) {
            s.push_back(randUppChar());
        }
        return s;
    }

    std::string randUppString() {
        int n = randInt();
        std::string s;
        for (int k = 0; k < n; k++) {
            s.push_back(randUppChar());
        }
        return s;
    }

    std::string RandBigInt(int n) {
        std::string s;
        char ch = '0' + randInt(9);
        s.push_back(ch);
        while (s[0] == '0') {
            ch = '0' + randInt(9);
            s[0] = ch;
        }
        for (int k = 1; k < n; k++) {
            ch = '0' + randInt(9);
            s.push_back(ch);
        }
        return s;
    }

    std::string RandBigInt() {
        int n = randInt();
        std::string s;
        char ch = '0' + randInt(9);
        s.push_back(ch);
        while (s[0] == '0') {
            ch = '0' + randInt(9);
            s[0] = ch;
        }
        for (int k = 1; k < n; k++) {
            ch = '0' + randInt(9);
            s.push_back(ch);
        }
        return s;
    }

    std::string randString(int n) {
        std::string s;
        for (int k = 0; k < n; k++) {
            s.push_back(randChar());
        }
        return s;
    }

    std::string randString() {
        int n = randInt();
        std::string s;
        for (int k = 0; k < n; k++) {
            s.push_back(randChar());
        }
        return s;
    }

    std::vector<int> randArray(int n, int mx) {
        std::vector<int> a(n);
        for (int k = 0; k < n; k++) {
            a[k] = randInt(mx);
        }
        return a;
    }

    std::vector<int> randArray(int n) {
        std::vector<int> a(n);
        for (int k = 0; k < n; k++) {
            a[k] = randInt();
        }
        return a;
    }

    std::vector<int> randArray() {
        int n = randInt();
        std::vector<int> a(n);
        for (int k = 0; k < n; k++) {
            a[k] = randInt();
        }
        return a;
    }

    void randArray(int a[], int n) {
        for (int k = 0; k < n; k++) {
            a[k] = randInt();
        }
    }

    void randArray(int a[], int n, int mx) {
        for (int k = 0; k < n; k++) {
            a[k] = randInt(mx);
        }
    }

    void randArray(std::vector<int>& a, int n) {
        a.resize(n);
        for (int k = 0; k < n; k++) {
            a[k] = randInt();
        }
    }

    void randArray(std::vector<int>& a, int n, int mx) {
        a.resize(n);
        for (int k = 0; k < n; k++) {
            a[k] = randInt(mx);
        }
    }

    void rand2DArray(std::vector<std::vector<int>>& a, int n, int m) {
        a.resize(n);
        for (int i = 0; i < n; i++) {
            a[i].resize(m);
            for (int j = 0; j < m; j++) {
                a[i][j] = randInt();
            }
        }
    }

    void rand2DArray(std::vector<std::vector<int>>& a, int n, int m, int mx) {
        a.resize(n);
        for (int i = 0; i < n; i++) {
            a[i].resize(m);
            for (int j = 0; j < m; j++) {
                a[i][j] = randInt(mx);
            }
        }
    }

    std::vector<std::pair<int, int>> randomGraph(int n, int m) {
        std::set<std::pair<int, int>> edges;
        while (edges.size() < m) {
            int x = randInt(1, n);
            int y = randInt(1, n);
            if (x != y) {
                if (x > y) std::swap(x, y);
                edges.insert({x, y});
            }
        }
        return std::vector<std::pair<int, int>>(edges.begin(), edges.end());
    }

    void randomGraph(std::vector<std::pair<int, int>>& edges, int n, int m) {
        std::set<std::pair<int, int>> ed;
        while (ed.size() < m) {
            int x = randInt(1, n);
            int y = randInt(1, n);
            if (x != y) {
                if (x > y) std::swap(x, y);
                ed.insert({x, y});
            }
        }
        edges = std::vector<std::pair<int, int>>(ed.begin(), ed.end());
    }

    void randomGraph(std::pair<int, int> edges[], int n, int m) {
        std::set<std::pair<int, int>> ed;
        while (ed.size() < m) {
            int x = randInt(1, n);
            int y = randInt(1, n);
            if (x != y) {
                if (x > y) std::swap(x, y);
                ed.insert({x, y});
            }
        }

        for (auto k: ed) {
            *edges = k;
            edges++;
        }
    }
}
