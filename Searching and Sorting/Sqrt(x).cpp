class Solution
{
public:
    double mySqrt(int x)
    {
        int start = 0;
        int end = x;
        int ans = 0;

        // Step 1: Find integer part using binary search
        while (start <= end)
        {
            long long mid = start + (end - start) / 2;
            long long square = mid * mid;

            if (square == x)
            {
                return mid;
            }
            else if (square < x)
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        // Step 2: Refine answer with decimal precision
        double result = ans;
        double increment = 0.1;

        for (int i = 0; i < 6; i++)
        { // precision up to 6 decimal places
            while ((result + increment) * (result + increment) <= x)
            {
                result += increment;
            }
            increment /= 10.0; // reduce step size
        }

        return result;
    }
};
