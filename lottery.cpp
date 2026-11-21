/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int SIZE = 5;
    int winningDigits[SIZE];
    int player[SIZE];
    int matchCount = 0;

    // Seed the random-number generator once before creating the digits.
    srand(static_cast<unsigned int>(time(0)));

    // Generate five winning digits from 0 through 9.
    for (int i = 0; i < SIZE; i++) {
        winningDigits[i] = rand() % 10;
    }

    // Read the player's five digits.
    cout << "Enter five digits from 0 through 9:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Digit " << i + 1 << ": ";
        cin >> player[i];
    }

    // Count matches only when the digits are in the same position.
    for (int i = 0; i < SIZE; i++) {
        if (winningDigits[i] == player[i]) {
            matchCount++;
        }
    }

    // Display both arrays and the number of position matches.
    cout << "\nWinning digits: ";
    for (int i = 0; i < SIZE; i++) {
        cout << winningDigits[i] << " ";
    }

    cout << "\nPlayer digits:  ";
    for (int i = 0; i < SIZE; i++) {
        cout << player[i] << " ";
    }

    cout << "\nNumber of matching positions: " << matchCount << endl;

    return 0;
}

