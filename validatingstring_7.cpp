#include <bits/stdc++.h>
using namespace std;

// valid string is one which has only numbers and strings allowed
// name = "anil321" (right)
// name = "anil@?123" (wrong)

int valid(const char *a) {  // Mark `a` as const
    int i;
    for (i = 0; a[i] != '\0'; i++) {
        // Check if the character is not an alphabet (uppercase or lowercase) or a digit
        if (!(a[i] >= 65 && a[i] <= 90) && !(a[i] >= 97 && a[i] <= 122) && !(a[i] >= 48 && a[i] <= 57)) {
            return 0; // Invalid string
        }
    }
    return 1; // Valid string
}

int main() {
    const char *a = "Ani?123";  // Use `const char*`
    if (valid(a)) {
        cout << "valid string ";
    } else {
        cout << "invalid string ";
    }
}
