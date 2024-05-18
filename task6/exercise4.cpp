#include <iostream>
#include <limits>

using namespace std;

int main() {
    int input;

    // Prompt the user for input until a valid integer between 5 and 10 is provided
    while (true) {
        cout << "Please enter an integer value between 5 and 10: ";
        cin >> input;

        // Check if the input is within the specified range
        if (cin.fail() || (input < 5 || input > 10)) {
            cout << "Invalid input. Please enter an integer value between 5 and 10." << endl;
            // Clear input buffer
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break; // Exit the loop if input is valid
        }
    }

    // Output to inform the user that their input value has been accepted
    cout << "Your input value " << input << " has been accepted." << endl;

    return 0;
}