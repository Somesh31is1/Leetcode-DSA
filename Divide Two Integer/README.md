# Divide Two Integers

## Problem Statement
Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.

The integer division should truncate toward zero, which means losing its fractional part. For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.

Return the quotient after dividing dividend by divisor.

## My Approach

Here, we have to divide 2 integers without using direct division, and we have to return the quotient of that divison with its fractional part removed.
So, here is my approach:-

1.First check if dividend = 0 or divisor = 0, and if so, return 0 and INT_MAX respectively, as anything/0 = infinite, but in this case is the max int value
2.For standard 32 bit integer range i.e. from (-2^31, 2^31-1) to handle edge cases, we have to apply special if-else loop
3. a.If dividend = INT_MIN and divisor = -1, so quotient will be 2^31 i.e out of the range, so in this case we return INT_MAX
   b.If divisor = 1, return dividend

4. Check the sign of divison using the boolean OR operation, so while returning quotient, check if that boolen value is true or not, if true return quotient,
   else -quotient
5. The divison concept:- Repeated Subtraction
   First, use the absolute values of both dividend and divisor for repeated subtraction to avoid sign issues
   Store absolute values of both of them in long long variables, because long long have standard 64-bit range, so even if it goes out of range, it will be handled

   Use while loop, intill dividend>= divisor, do dividend-=divisor, quotient++;
   so number of iterations gives quotient value.

6. At last check if the boolean OR operation we did, is true, i.e. True = -ve sign, False = +ve sign, return quotient or -quotient as per it
   
