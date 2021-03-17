/*
Question 1
Declare an int variable named dog_age, and set it equal to your dog’s age as a number.
Write a comment that explains this line of code.
Note: This version of the program is for dogs older than 2 years old.

Question 2
Let’s declare three more int variables:

early_years: for your dog’s first two years
later_years: for your dog’s following years
human_years: for your dog’s total human years

Question 3
“The first two years of a dog’s life count as 21 human years.”
Let’s give the variable early_years a value of 21.
Write a comment that explains this line of code.

Question 4
“Each following year counts as 4 human years.”
So the equation looks something like:
later\_years = (dog\_age - 2) * 4later_years=(dog_age−2)∗4
Give the variable later_years a value of dog_age minus 2, and then multiply by 4.
Write a comment that explains this line of code.

Question 5
Add early_years and later_years together, and store that in a variable named human_years.

Write a comment that explains this line of code.

Question 6
Write a std::cout statement that displays your dog’s name and age in human years.
Use chaining to display the value in the following sentence:
My name is ____! Ruff ruff, I am [AGE] years old in human years.
You can fill in the blank with your dog’s name and [AGE] with the value of human_years in the sentence above.

Question 7
Compile and execute the code to make sure it’s bug-free!

Question 8
Great work! You just converted a dog’s age to human years. Try changing dog_age and see what happens.

And now you might be wondering, how can you make this program work for puppies, too?

Well, you need to use something called a conditional to determine if the dog is younger than 2 and do something different if that’s true. This is covered in the next lesson!
Sample solutions:
dog_years1.cpp
dog_years2.cpp
P.S. If you make something cool, share it with us!

*/


#include <iostream>

int main() {
  int dog_age = 6; //Dogs age faster than humans do
  int early_years;
  int later_years;
  int human_years;

  early_years = 21; //The dog's age after 2 human years
  later_years = (dog_age - 2)*4; //Each following year counts as 4 human years

  human_years = early_years + later_years; //The human year equivalent

  std::cout << "My name is Luther! Ruff ruff, I am " << human_years << " years old in human years.\n";

}






















