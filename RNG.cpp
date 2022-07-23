#include <iostream>
using namespace std;
  
int main()
{
    int random_number;
    int amount;
    int lowest;
    int highest;

    cout << "How many numbers: ";
    cin >> amount;

    cout << "\nLowest Number: ";
    cin >> lowest;

    cout << "\nHighest Number: ";
    cin >> highest;

    for (int i = 0; i < amount; i++){
        random_number = rand() % (highest-lowest) + lowest;   // Number in the range lowest - highest
        cout << i << ": " << random_number << endl;
    }

    return 0;
}
