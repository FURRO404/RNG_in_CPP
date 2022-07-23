/*RNG.cpp by FURRO404*/
#include <iostream>
using namespace std;
  
int main()
{
    int random_number;
    int amount;
    int lowest;
    int highest;
    int keep_going_lol = 1;

    while (keep_going_lol == 1){
        cout << "How many numbers: ";
        cin >> amount;

        cout << "\nLowest Number: ";
        cin >> lowest;

        cout << "\nHighest Number: ";
        cin >> highest;

        int avg = 0;
        for (int i = 1; i < amount + 1; i++){
            random_number = rand() % (highest-lowest) + lowest;   // Number in the range lowest - highest
            cout << i << ": " << random_number << endl;

            //statistic gathering
            avg = random_number + avg;
        }

        avg = avg/amount;
        cout << "\n\nAverage: " << avg << endl;
    }
    return 0;
}
/*RNG.cpp by FURRO404*/
