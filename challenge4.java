import java.util.*;
import java.lang.*;

class challenge4 {

    public static void main(String[] args) {
        
        int testNum = 0, answer = 0;
        for ( int i = 100; i < 1000; i++)
        {
            for (int j = 100; j < 1000; j++)
            {
                testNum = i * j;
                System.out.println(i + " " + j + " => " + testNum + " | " + isPalindrome(testNum));
                if (isPalindrome(testNum))
                {
                    if ( testNum > answer )
                    {
                        answer = testNum;
                    }
                }
            }
        }
        
        System.out.println(answer);
    }
    
    static boolean isPalindrome(int n)
    {
        //put number in ArrayList
        ArrayList<Integer> alNum = new ArrayList<Integer>();
        
        int temp;
        int digitCounter = 0;
        while(n != 0 )
        {
            temp = n % 10;
            alNum.add(temp);
            n /= 10;
            digitCounter++;
        }
        
        
        int testNum = 0;
        for (int i = digitCounter - 1; i >= 0; i--)
        {
            testNum += (int) Math.pow(10, i) * alNum.get(i);
        }
        
        
        for (int i = digitCounter - 1; i >= 0; i--)
        {
            if (alNum.get(i) != testNum % 10)
            {
                return false;
            }
            testNum /= 10;
        }
        
        return true;
    }
}