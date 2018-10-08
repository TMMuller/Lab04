/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 *



 *Student: Todd Muller
 *Date: October 8, 2018 (the present)
 *
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

// TODO: implement add_numbers
void add_numbers(vector<short> &data)
{
	for (int i = 0; i < 10; i++)
	{
		data.push_back(rand() % 10); //Pushback a random number that is smaller than 10
	}
}

// TODO: implement print_even
void print_even(const vector<short>& data)
{
	for (ulong i = 0; i<data.size(); i++) {
		if (i % 2 == 0) {
			cout << data.at(i) << ","; //Displays the values in the positive data locations
		}
	}
}
// TODO: implement is_present
bool is_present(const vector<short> &data, short value)
{
	for (std::vector<short>::const_iterator iter = data.begin(); iter != data.end(); ++iter)
	{
		//Check the consition of whether the variable value is in the vector
		if (*iter == value) {
			return true;
		}
	}
	return false;
}
// TODO: implement std::sort function



