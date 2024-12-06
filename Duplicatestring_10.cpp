#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[] = "Finding"; // String to process
    int h[26] = {0};      // Initialize the array to 0
    int i;

    // Count frequencies of characters
    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {          // Handle lowercase letters
            h[a[i] - 'a']++;
        } else if (a[i] >= 'A' && a[i] <= 'Z') {   // Handle uppercase letters
            h[a[i] - 'A']++;
        }
    }

    // Print duplicate characters and their counts
    for (i = 0; i < 26; i++) {
        if (h[i] > 1) { // Check if a character has duplicates
            cout << char(i + 'a') << " appears " << h[i] << " times." << endl;
        }
    }

    return 0;
}
