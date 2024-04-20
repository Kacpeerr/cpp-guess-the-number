#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inicjalizacja generatora liczb pseudolosowych
    srand(time(NULL));
    int randomNumber = rand() % 10 + 1;
    
    int userNumber, i = 0;
    
    do {
        i++;
        cout << endl << "Podaj liczbę <1 - 10>: ";
        cin >> userNumber;
        
        if (userNumber > randomNumber) {
            cout << "Podałeś za wysoką liczbę\n";
        } else if (userNumber < randomNumber) {
            cout << "Podałeś za niską liczbę\n";
        } else {
            cout << "GRATULACJE! Ukryta liczba to: " << randomNumber << endl;
            cout << "Udało ci się za " << i << " razem!\n\n";
        }
    } while (randomNumber != userNumber);
    
    return 0;
}
