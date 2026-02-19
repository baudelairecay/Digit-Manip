# Digit-Manip
A C++ Library whose main purpose is solving problems on numbers 
that would typically require string concatenation.
In its current state, it holds for most numbers, however it falls short in many cases 
due to the use of the pow() function from the Cmath library. I have a solution in progress
that will allow me to raise numbers to powers without the use of the cmath header file at all.


Issue(s) Identified:

Length function only works for numbers that do not have a leading zero
square_digit function works, however my logic for placing the numbers into the array was flawed.