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

    out_file.open("Password.txt", ofstream::app);

    cout << "Enter the number of digits you would like the password to be: ";
    cin >> length;

    string purposeOfPassword;
    cout << "What website will this password be used for: ";
    cin >> purposeOfPassword;

    srand(time(NULL));

    out_file << "Your password for " << purposeOfPassword << " is: ";

    for (int i = 1; i <= length; i++)
    {
        randomNum = rand() % 68 + 1;

        out_file << characters[randomNum];
    }

    out_file << "\n";
    out_file.close();

    cout << "Done! You can find your passwords in this folder within the file Password.txt" << endl;

    return 0;
}
