/*
 * Find the sum of all the numbers in the Fibonacci Sequence that are even and below 4 million
 *
 * completed in 12 min.
 */

//ALEC'S CODE

#include <iostream>

using namespace std;

int main()
{
    int small = 1, med = 2, lar = 0, temp = 0, sum = 2;
    
    lar = small + med;
    while(lar < 4000000)
    {
        //find new sequence number
        temp = lar + med;
        
        //shift all the numbers up in the sequence
        small = med;
        med = lar;
        lar = temp;
        
        //If the number is even, add it to the sum
        if (lar % 2 == 0 && lar < 4000000)
        {
            sum += lar;
        }
    }
    
    cout << "sum = " << sum << endl;
    
    
    return 0;
}


//AUSTIN’S CODE

/*
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	int total = 0;
	int temp = 1;
	for(int i = 2; i <= 4000000;){
		if(i % 2 == 0)
			total += i;
		int nextValue = i;
		i = i + temp;
		temp = nextValue;
	}
	cout << total << endl;
	return 0;
}
*/