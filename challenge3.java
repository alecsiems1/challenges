class challenge3 {
    public static void main(String[] args)
    {
        long number = 600851475143L;
        long largFactor = 0L;
        
        for (long i = 2L; i < (number / 2); i++)
        {
            //is i a factor of the number?
            if ( number % i == 0)
            {
                System.out.println("i = " + i + " | number = " + number);
                //is the factor prime?
                if(numberIsPrime(i))
                {
                    System.out.println(i + " PRIME FACTOR");
                    //modify the number since both are true
                    number /= i;
                }
            }
        }
        
        System.out.println("ANSWER: " + number);
    }
    
    //is a number prime?
    static boolean numberIsPrime(long number)
    {
        for(long j = 2L; j < number / 2 + 1; j++)
        {
            if(number % j == 0)
            {
                return false;
            }
        }
        return true;
    }
}