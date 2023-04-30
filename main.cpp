#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    srand(time(NULL));

    int arg = stoi(argv[1]);
    int number = 1 + rand() % (arg - 1 + 1);
    cout << number << endl;
}
