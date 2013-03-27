/*
 *    5:48!!! fast time!
 */

#include <iostream>

using namespace std;

int main()
{
    bool numberFound = false;
    int number = 2050;
    int counter = 0;
    while (!numberFound)
    {
        counter = 0;
        for (int i = 1; i < 21; i++)
        {
            if ( number % i == 0)
            {
                counter++;
            }
            else
                break;
        }
        if (counter == 20)
        {
            cout << "Answer: " << number << endl;
            return 0;
        }
        number++;
    }
}