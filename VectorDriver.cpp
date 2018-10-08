#include "VectorDriver.h"

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl << endl << endl;


  //This is where my code begins

  cout << "  ..:: B E G I N  T O D D ' S  C O D E ::.." << endl << endl;

  vector<short> empty_vector(7); //Generate a new vector with 7 memory locations

  cout << "new vector: ";
  print(empty_vector);
  cout << endl;

  fill_vector(empty_vector); //Fill the vector with values of 0-6

  cout << "filled vector: "; //Display the vector
  print(empty_vector);
  cout << endl;


  add_numbers(empty_vector); //Pushbacks 10 random numbers

  cout << "Vector with numbers added: "; //Displays vector
  print(empty_vector);
  cout << endl;

  add_numbers(empty_vector); //Add an additional 10 numbers to the vector and displays it
  cout << "Vector with numbers added again: ";
  print(empty_vector);
	  cout << endl;

	  cout << "The numbers in the even vector locations are: ";
	  print_even(empty_vector); //Prints the even location of jthe vector
	  cout << endl;

	  cout << "Is the value 4 in the vector provided? : "; //Test if the number 4 is in the vector
	  if (is_present(empty_vector, 4) == true) {
		  cout << "Yes" << endl;
	  }
		else {
			cout << "No" << endl;
		}

		vector<short>my_new_vector = { 2,8,3,5,1 };
		

		cout << "My new vector contains the values : ";
		print(my_new_vector);
		cout << endl;
		std::sort(my_new_vector.begin(), my_new_vector.end()); //Srts the vecotr values from smallest to greatest
		cout << "Here is my new vector sorted : ";
		print(my_new_vector);
		cout << endl;

	  cout << endl;
  cout <<" ..::E N D  T O D D ' S  C O D E ::.." << endl << endl;
  system("pause");
  return 0;
}
