#include <iostream>
#include <cstring>
using namespace std;

void concatenate(char* destination, const char* source1, const char* source2) {
    while (*source1 != '\0') {
        *destination = *source1;
        destination++;
        source1++;
    }

    while (*source2 != '\0') {
        *destination = *source2;
        destination++;
        source2++;
    }

    *destination = '\0';
}

int main() {
    const char* str1 = "Hello, ";
    const char* str2 = "World!";
    char result[100];
    concatenate(result, str1, str2);
    cout << "Concatenated string: " << result << endl;
    return 0;
}
