# Digit-Manip
A C++ Library whose main purpose is solving problems on numbers 
that would typically require string concatenation.
In its current state, it holds for most numbers.


## Issue(s) Identified:

1. 
Length function only works for numbers that do not have a leading zero

2. 
square_digit function "seemingly" works for all reasonable numbers, but there were
a few cases that it didn't end up working, to save myself some time I am going to
spend the next few days writing up unit tests to prevent any further frustration.


## Unimportant fixes/Preference:
1. 
I'd like the square vector function to modify vectors in place to save space.
Its totally unnecessary, but I feel like at this point optimizing a few things may be 
more interesting than what I am currently doing.

2. 
I wonder if there is a way to extend this to arrays, and not just std::vectors.
I should probably get it working before that though. 