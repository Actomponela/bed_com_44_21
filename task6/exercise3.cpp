#include <iostream>
#include <string>
#include <vector>

// Bring the std namespace into the global namespace
using namespace std;

int main() {
    // Declare and initialize the vector with string elements
    vector<string> elements = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // Iterate through each element of the vector
    for (const auto& element : elements) {
        // Check if the element starts with the letter "B"
        if (element.find('B') == 0) {
            // Output the element to the console
            cout << element << endl;
        }
    }

    return 0;
}