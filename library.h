#include <bits/stdc++.h>
using namespace std;

namespace TestLibrary {
    class Library {
    private:
        bool indicator = false;

        void check() {
            if (!indicator) {
                srand(time(nullptr));
                indicator = true;
            }
        }

    public:
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
            char ch = (char) randInt(32, 126);
            return ch;
        }

        int randNegInt() {
            int n = (-1) * randInt();
            return n;
        }

        string randLowString(int n) {
            string s;
            for (int k = 0; k < n; k++) {
                s = s + randLowChar();
            }
            return s;
        }

        string randLowString() {
            int n = randInt();
            string s;
            for (int k = 0; k < n; k++) {
                s = s + randLowChar();
            }
            return s;
        }

        string randUppString(int n) {
            string s;
            for (int k = 0; k < n; k++) {
                s = s + randUppChar();
            }
            return s;
        }

        string randUppString() {
            int n = randInt();
            while (n == 0)
                n = randInt();
            string s;
            for (int k = 0; k < n; k++) {
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
            for (int k = 1; k < n; k++) {
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
            for (int k = 1; k < n; k++) {
                ch = '0' + randInt(9);
                s = s + ch;
            }
            return s;
        }

        string randString(int n) {
            string s;
            for (int k = 0; k < n; k++) {
                s = s + randChar();
            }
            return s;
        }

        string randString() {
            int n = randInt();
            while (n == 0)
                n = randInt();
            string s;
            for (int k = 0; k < n; k++) {
                s.push_back(randChar());
            }
            return s;
        }

        vector<int> randArray(int n, int mx) {
            vector<int> a(n);
            for (int k = 0; k < n; k++)
                a[k] = randInt(mx);
            return a;
        }

        vector<int> randArray(int n) {
            vector<int> a(n);
            for (int k = 0; k < n; k++)
                a[k] = randInt();
            return a;
        }

        vector<int> randArray() {
            int n = randInt();
            vector<int> a(n);
            for (int k = 0; k < n; k++)
                a[k] = randInt();
            return a;
        }

        void randArray(int a[], int n) {
            for (int k = 0; k < n; k++)
                a[k] = randInt();
        }

        void randArray(int a[], int n, int mx) {
            for (int k = 0; k < n; k++)
                a[k] = randInt(mx);
        }


        void randArray(vector<int> &a, int n) {
            a.resize(n);
            for (int k = 0; k < n; k++)
                a[k] = randInt();
        }

        void randArray(vector<int> &a, int n, int mx) {
            a.resize(n);
            for (int k = 0; k < n; k++)
                a[k] = randInt(mx);
        }

        void rand2DArray(vector<vector<int> > &a, int n, int m) {
            a.resize(n);
            for (int i = 0; i < n; i++) {
                a[i].resize(m);
                for (int j = 0; j < m; j++)
                    a[i][j] = randInt();
            }
        }

        void rand2DArray(vector<vector<int> > &a, int n, int m, int mx) {
            a.resize(n);
            for (int i = 0; i < n; i++) {
                a[i].resize(m);
                for (int j = 0; j < m; j++)
                    a[i][j] = randInt(mx);
            }
        }

        vector<pair<int, int> > randomGraph(int n, int m) {
            set<pair<int, int> > edges;
            while (edges.size() < m) {
                int x = randInt(1, n);
                int y = randInt(1, n);
                if (x != y) {
                    if (x > y) swap(x, y);
                    edges.insert({x, y});
                }
            }
            return vector<pair<int, int> >(edges.begin(), edges.end());
        }
        void randomGraph(vector<pair<int, int> > &edges, int n, int m) {
            set<pair<int, int> > ed;
            while (ed.size() < m) {
                int x = randInt(1, n);
                int y = randInt(1, n);
                if (x != y) {
                    if (x > y) swap(x, y);
                    ed.insert({x, y});
                }
            }
            edges = vector<pair<int, int> >(ed.begin(), ed.end());
        }
        void randomGraph(pair<int,int> edges[],int n,int m) {
            set<pair<int,int>> ed;
            while(ed.size()<m) {
                int x = randInt(1,n);
                int y = randInt(1,n);
                if(x!=y) {
                    if(x>y) swap(x,y);
                    ed.insert({x,y});
                }
            }

            for (auto k:ed) {
                *edges = k;
                edges++;
            }
        }

    }; // library class ends here
} // namespace ends here
