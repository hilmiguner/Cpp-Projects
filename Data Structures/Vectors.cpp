#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> Vec)
{
	for (size_t i = 0 ; i < Vec.size() ; i++)
	{
		cout << "Vec[" << i << "] = " << Vec[i] << endl;
	}
}
// Notice that the type of the variable is size_t, not int. 
// size_t is a numeric type that represents the largest number of elements that a vector can hold. 
// Using this instead of int isn’t required but it prevents compiler warnings. 

void printElements(vector<int> Vec) 
{ 
    for (size_t i = 0 ; i < Vec.size() ; i++) 
	{ 
        cout << "Vec[" << i << "] = " << Vec.at(i) << endl; 
    } 
}
// Vec[i] = Vec.at(i) They are the same things.

int main()
{
	const int SIZE = 20;
	vector<int> numbers1(SIZE);
	
	//  A vector can take a second parameter. 
	// The second parameter makes every element's value to second parameter value. 
	// So if a vector does not take a second parameter, every elements take for int 0, for double 0.0 for char "".
	vector<int> numbers2(SIZE, 15);
	
	cout<<numbers2.size()<<endl;
	
	cout << "-------------------------------" << endl;
	
	printVec(numbers1);
	printElements(numbers2);
	
	cout << "-------------------------------" << endl;
	
	vector<int> numbers3; 
	// When we do this, the vector is empty. It has no elements, so you can’t even access V[0]. Calling the size() method will return 0. 
	//There is also a method named empty() that returns true if the vector is empty or false if it is not.
	
	cout << numbers3.size() << endl;
	cout << numbers3.empty() << endl;
	
	cout << "-------------------------------" << endl;
	
	numbers3.resize(10);  // We can now access numbers3[0]...numbers3[9] 
	numbers3[9] = 35; 
	numbers3.resize(9);   // We can now only access up to numbers3[8]. The 35 that we set previously no longer exists.
	numbers3.clear();     // Now numbers3 is empty again 
	bool e = numbers3.empty();   // e == true
	cout << e << endl;
	
	cout << "-------------------------------" << endl;
	
	// numbers3 is a empty vector right now.
	
	cout << "Size: " << numbers3.size() << endl;
	numbers3.push_back(10);          // Increasing its size by 1. Adds 10 to the end of the vector.
	cout << "Size: " << numbers3.size() << endl;
	printVec(numbers3);
	
	cout << "-------------------------------" << endl;
	
	vector<int> numbers4; // An empty vector.
	numbers4.push_back(1);
	numbers4.push_back(2);
	numbers4.push_back(3);
	vector<int>::iterator Iter = numbers4.begin();
	int num = *Iter;  // Num is 1.
	cout<<num<<endl;
	
	Iter++;
	num = *Iter;  // Num is 2.
	cout<<num<<endl;
	
	Iter++;
	num = *Iter;  // Num is 3.
	cout<<num<<endl;
	
	Iter = numbers4.end(); // .end() does point to a position after the last element.
	
	cout<<numbers4.size()<<" "<<*Iter<<endl;
	
	cout << "-------------------------------" << endl;
	
	vector<int>::iterator Iter2;
	for (Iter2 = numbers4.begin() ; Iter2 != numbers4.end() ; Iter2++)
	{
		cout << *Iter2 << endl;
	}
	
	cout << "-------------------------------" << endl;
	
	vector<int> numbers5(100);  // Create a 100-element vector 
 
	vector<int>::iterator Iter3; 
	Iter3 = numbers5.begin() + 50;  // Iter3 points to numbers5[50] 
	 
	*Iter3 = 12345;   // Sets numbers5[50] to 12345 
	 
	Iter3 = numbers5.begin() + 100; // (Iter3 = numbers5.begin() + 100) == (Iter3 = numbers5.end()) is TRUE.
	
	cout << "-------------------------------" << endl;
	
	vector<int> numbers6;   // V starts out empty 
	numbers6.push_back(1); 
	numbers6.push_back(2); 
	numbers6.push_back(3);
	
	printVec(numbers6);
	
	cout << "**********" << endl;
	 
	numbers6.insert(numbers6.begin(), 20);
	
	printVec(numbers6);
	
	cout << "**********" << endl;
	
	numbers6.insert(numbers6.begin() + 2, 30);
	
	printVec(numbers6);
	
	cout << "**********" << endl;
	
	numbers6.insert(numbers6.end(), 40);
	
	printVec(numbers6);
	
	cout << "-------------------------------" << endl;
	
	vector<int> numbers7; 
	for (int i = 1; i <= 6; i++) 
	{ 
	    numbers7.push_back(i); 
	}
	
	printVec(numbers7);
	
	cout << "**********" << endl;
	 
	numbers7.erase(numbers7.begin() + 2);
	
	printVec(numbers7);
	
	cout << "**********" << endl;
	
	numbers7.erase(numbers7.begin(), numbers7.begin() + 2);
	
	printVec(numbers7);
	
	cout << "**********" << endl;
	
	numbers7.pop_back();
	
	printVec(numbers7);
	
	cout << "**********" << endl;
	
	numbers7.erase(numbers7.begin(), numbers7.end());
	cout << "Size of the vector is " << numbers7.size() << endl;
	
	cout << "**********" << endl;
}
