#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[] = "Painter";
    char b[] = "Painting";
    int i, j;

    // Compare characters of both strings
    for (i = 0, j = 0; a[i] != '\0' && b[j] != '\0'; i++, j++) {
        if (a[i] != b[j]) {
            break; // Break if characters mismatch
        }
    }

    // Determine relationship based on ASCII values
    if (a[i] == b[j]) 
        cout << "equal";
    else if (a[i] < b[j]) 
        cout << "smaller";
    else 
        cout << "greater";

    return 0;
}
