# Digit-Manip
A C++ Library whose main purpose is solving problems on numbers 
that would typically require string concatenation.
In its current state, it holds for most numbers, however it falls short in many cases 
due to the use of the pow() function from the Cmath library. I have a solution in progress
that will allow me to raise numbers to powers without the use of the cmath header file at all.


Issue Identified:
Whenever the digit equals 0, and 0 is not the only digit in the number,
the digit is skipped entirely and the digit immediately following the 0 is considered.
This is a fundamental flaw in my logic, and as such I may need to take a different 
approach to my algorithm.
