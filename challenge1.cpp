/*
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 * completed in 12 min.
 */


//ALEC'S CODE
#include <iostream>

using namespace std;

int main()
{
    int threeCounter = 0, fiveCounter = 0;
    
    //count threes
    for (int i = 0; i < 1000; i += 3)
    {
        threeCounter += i;
    }
    
    //count fives
    for (int i = 0; i < 1000; i += 5)
    {
        fiveCounter += i;
    }
    
    int subtractThis = 0;
    //count multiples of 3 and 5 and subtract them
    for (int i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            subtractThis += i;
        }
    }
    
    cout << (threeCounter + fiveCounter - subtractThis) << endl;
    
    return 0;
}
//END ALEC'S CODE


//AUSTIN’S CODE
/*
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	int tracker = 0;
	for(int i = 0; i < 1000; i++){
		if (i % 3 == 0)
			tracker += i;
		if(i % 5 == 0)
			tracker += i;
		if(i % 5 == 0 && i % 3 == 0)
			tracker -= i;
	}
	cout<<tracker;
}
*/
//END OF AUSTIN’S CODE