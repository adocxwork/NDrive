#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Function to check if a word exists in the known vocabulary
bool isKnownWord(const string& word, const string knownWords[], int knownWordCount) {
    for (int i = 0; i < knownWordCount; ++i) {
        if (word == knownWords[i]) {
            return true;
        }
    }
    return false;
}

// Function to split the text into words and find unknown words
void findUnknownWords(const string& text, const string knownWords[], int knownWordCount) {
    stringstream ss(text);
    string word;
    bool hasUnknownWords = false;

    cout << "{";
    while (ss >> word) {
        if (!isKnownWord(word, knownWords, knownWordCount)) {
            if (hasUnknownWords) {
                cout << ", ";
            }
            cout << "\"" << word << "\"";
            hasUnknownWords = true;
        }
    }
    if (!hasUnknownWords) {
        cout << "Successful";
    }
    cout << "}" << endl;
}

int main() {
    string text = "the sun rises in the east";
    string vocabulary[] = {"sun", "in", "east", "doctor", "day"};
    int vocabularySize = sizeof(vocabulary) / sizeof(vocabulary[0]);

    // Find and print unknown words
    findUnknownWords(text, vocabulary, vocabularySize);

    return 0;
}
