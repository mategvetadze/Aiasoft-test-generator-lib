#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
#include <vector>
namespace TestLibrary {
    // Public functions to be used by other files
    int randInt(); // Generates a random integer
    int randInt(int n); // Generates a random integer between 0 and n
    int randInt(int l, int r); // Generates a random integer between l and r
    char randLowChar(); // Generates a random lowercase character
    char randUppChar(); // Generates a random uppercase character
    char randChar(); // Generates a random character (any printable ASCII character)
    int randNegInt(); // Generates a random negative integer
    std::string randLowString(int n); // Generates a random lowercase string of length n
    std::string randLowString(); // Generates a random lowercase string with random length
    std::string randUppString(int n); // Generates a random uppercase string of length n
    std::string randUppString(); // Generates a random uppercase string with random length
    std::string RandBigInt(int n); // Generates a random big integer as a string of length n
    std::string RandBigInt(); // Generates a random big integer as a string with random length
    std::string randString(int n); // Generates a random string of length n
    std::string randString(); // Generates a random string with random length
    std::vector<int> randArray(int n, int mx); // Generates a random array of n elements, each between 0 and mx
    std::vector<int> randArray(int n); // Generates a random array of n elements with random integers
    std::vector<int> randArray(); // Generates a random array with random length and random integers
    void randArray(int a[], int n); // Fills an integer array a with n random integers
    void randArray(int a[], int n, int mx); // Fills an integer array a with n random integers between 0 and mx
    void randArray(std::vector<int>& a, int n); // Fills a vector a with n random integers
    void randArray(std::vector<int>& a, int n, int mx); // Fills a vector a with n random integers between 0 and mx
    void rand2DArray(std::vector<std::vector<int>>& a, int n, int m); // Generates a random 2D array with n rows and m columns
    void rand2DArray(std::vector<std::vector<int>>& a, int n, int m, int mx); // Generates a random 2D array with n rows and m columns, each element between 0 and mx
    std::vector<std::pair<int, int>> randomGraph(int n, int m); // Generates a random graph with n nodes and m edges
    void randomGraph(std::vector<std::pair<int, int>>& edges, int n, int m); // Fills a vector edges with m random edges from n nodes
    void randomGraph(std::pair<int, int> edges[], int n, int m); // Fills an array edges with m random edges from n nodes
}

#endif // LIBRARY_H
