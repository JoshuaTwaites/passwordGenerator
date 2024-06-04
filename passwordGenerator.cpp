#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main()
{

    char characters[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890!£$%&*";
    string password;
    int length, randomNum;

    ofstream out_file;

    out_file.open("Password.txt");

    cout << "Enter the number of digits you would like the password to be: ";
    cin >> length;

    srand(time(NULL));

    for (int i = 1; i <= length; i++)
    {
        randomNum = rand() % 68 + 1;

        out_file << characters[randomNum];
    }

    cout << "Done!" << endl;

    return 0;
}
