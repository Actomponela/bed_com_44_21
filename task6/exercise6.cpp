#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;//namespace defined


int countVowels(const string& str) {   // Function to count vowels in a string
    int count = 0;
    for (char c : str) {
 if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

int countWords(const string& str) { // Function to count words in a string
   istringstream iss(str);
    int count = 0;
    string word;
    while (iss >> word) {
        count++;
    }
    return count;
}
string Reverse(const string& str) {
    string reversedStr;
    for (int i = str.size() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    return reversedStr;
}

string capitalizeSecondLetter(const string& str) {
   istringstream iss(str);
   ostringstream oss;
   string word;
    while (iss >> word) {
        if (word.size() >= 2) {
            word[1] = toupper(word[1]); // Capitalize the second letter
        }
        oss << word << " ";
    }
   string capitalizedText = oss.str();
    capitalizedText.pop_back(); // Remove the extra space at the end
    return capitalizedText;
}

int main() {
    // Open the input file
    ifstream inputFile("input.txt");

    // Check if the file was opened successfully
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Read the file contents into fileData
   string fileData;
   getline(inputFile, fileData);

    // Close the file
    inputFile.close();

    cout << "Contents of input.txt:\n" << fileData << endl;
    int vowelsCount = countVowels(fileData);
    
    int wordsCount = countWords(fileData);// Count words in fileData

    cout << "Number of vowels in the text: " << vowelsCount << endl;// Output the number of vowels and words
    cout << "Number of words in the text: " << wordsCount << endl;

    string reversedText = Reverse(fileData);  // Reverse function

    cout << "Reversed text:\n" << reversedText << endl;
 
    string capitalizedText = capitalizeSecondLetter(fileData);

    // Output the text with second letter capitalized
    cout << "Text with second letter capitalized:\n" << capitalizedText << endl;

    return 0;
}
