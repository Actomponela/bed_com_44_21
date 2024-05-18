#include <iostream>


using namespace std;

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

int main() {
    char choice;

    do {
        // Display menu and prompt for shape selection
        cout << "Select a shape to calculate the area:" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "Enter your choice (1, 2, 3) or '4' to quit: ";
        cin >> choice;

        // Process user choice
        switch (choice) {
            case '1': {
                // Triangle
                double base, height;
                cout << "Enter the base length: ";
                cin >> base;
                cout << "Enter the height: ";
                cin >> height;
                cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
                break;
            }
            case '2': {
                // Rectangle
                double length, width;
                cout << "Enter the length: ";
                cin >> length;
                cout << "Enter the width: ";
                cin >> width;
                cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
                break;
            }
            case '3': {
                // Square
                double side;
                cout << "Enter the side length: ";
                cin >> side;
                cout << "Area of the square: " << calculateSquareArea(side) << endl;
                break;
            }
            case '4':
                // Quit the program
                cout << "Exiting program." << endl;
                return 0;
            default:
                // Invalid choice
                cout << "Invalid choice. Please enter 1, 2, 3, or 'q'." << endl;
                break;
        }
    } while (true); // Repeat until user chooses to quit

    return 0;