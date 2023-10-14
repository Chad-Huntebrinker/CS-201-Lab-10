//Chad Huntebrinker
//Lab 10
//10/29/20
//Partner Name: Chad Huntebrinker (myself)

//Note: in order to see output, make line 25 a comment so it won't throw an exception

#include<iostream>
#include<fstream>

using namespace std;

void main() {

	//PT I
	cout << "PART I" << endl;
	int * my_var = nullptr;

	cout << my_var << endl; 
	//Prediction: it will be nullptr
	//Actual: 0000000000000000
	//Notes: I thought it would be the memory location nullptr, which I though was nullptr.
	//In fact, nullptr is the value of the pointer, not the memory location.  How I found
	//this was with the ouput which was 0000000000000000.
	//cout << *my_var << endl;
	//Prediction: it will be blank
	//Actual: Exception was thrown, there was a problem
	//Notes: *my_var has nullptr as it's value.  So when the program was asked to output *my_var,
	//there was nothing for the program to output.  So, the program threw an exception and since
	//there was nothing to catch the exception, the program stopped.
	cout << &my_var << endl;
	//Prediction: it will be the memory location for my_var
	//Actual: some memory location like 000000D57B2FF698
	//Notes: This outputs the memory location of my_var.
	// I know this is true because the & symbol is asking for the memory location of the pointer.
	//So, the memory location of the pointer is what will be outputted.

	cout << endl;

	//PT II
	cout << "PART II" << endl;
	my_var = new int (27);
	
	cout << my_var << endl;
	//Prediction: null
	//Actual: some memory location like 0000017C459AE710
	//Notes: Must be pointing to the new int location.
	cout << *my_var << endl;
	//Prediction: 27
	//Actual: 27
	//Notes: my_var is pointing to the value of 27. I know this because
	//the * symbol when paired with a pointer tells the program to show the value the program
	//is pointing to. Also, the output was 27.
	cout << &my_var << endl;
	//Prediction: location of my_var
	//Actual: some memory location like 0000001ECEEFFC48
	//Notes: This outputs the memory location of my_var.  I know this because the & symbol is 
	//asking for the memory location of the pointer, so that is what will be outputted.

	cout << endl;

	//PT III
	cout << "PART III" << endl;
	int * new_var = new int; 
	int twenty_seven = 27;
	*new_var = twenty_seven;

	cout << new_var << endl;
	//Prediction: memory location of twenty_seven. 
	//Actual:some memory location like 0000017C459AE990
	//Notes: This outputs the memory location that new_var is pointing to 
	//which is the memory location of twenty_seven.  I know this because the pointer points
	//to the variable location of twenty_seven on line 66. 
	cout << *new_var << endl;
	//Prediction: 27
	//Actual:27
	//Notes: When the pointer is paired with the * symbol, it tells the program to output
	//the value that it is pointing to which is the value of twenty_seven.  I know this is
	//true because the pointer has the * symbol before it and becasue 27 was outputted.
	cout << &new_var << endl;
	//Prediction: memory location of new_var
	//Actual:some memory location like 0000001ECEEFFC68
	//Notes: Correct answer.  This outputs the memory location of new_var.  I know this is true
	//because the program puts the & symbol before the pointer which tells the program to output
	//the memory location of the pointer new_var.

	cout << endl;

	//PT IV
	cout << "PART IV" << endl;
	my_var = new_var;

	cout << my_var << endl;
	//Prediction: memory location of twenty_seven and new_var
	//Actual:some memory location like 0000017C459AE990
	//Notes: This outputs the memory location that my_var is pointing
	//to which is the memory location that new_var is also pointing to which is memory location
	//of twenty_seven.  I know this is true because the output just before this 
	//on line 68 is the exact same as what was outputted now.
	cout << *my_var << endl;
	//Prediction: 27
	//Actual:27
	//Notes: The value that my_var is pointing to is 27.  The reason why I know this is true is
	//because the my_var pointer was assigned the same memory location to point to as new_var
	//which is pointing to the variable twenty_seven.  Also, it outputs 27.
	cout << &my_var << endl;
	//Prediction: memory location of my_var
	//Actual:some memory location like 0000001ECEEFFC48
	//Notes: Correct answer.  This outputs the memory location of my_var.  I know this is true
	//because there is an & symbol paired with the my_var which tells the program to output the
	//memory location of my_var.  Also, this was the same output as the output on line 54 when
	//my_var was asked to output it's own memory location.
	
	cout << endl;

	//PT IV

	//Your Code Here


	//Copy & Paste the following at various output points in your code (x6)

	cout << "User Output" << endl << endl << endl;
	int eight = 8, six = 6, *super_var, ten = 10;

	my_var = &eight;
	new_var = &six;
	*my_var = eight;
	*new_var = six;
	new_var = my_var;
	cout << "1)";
	cout << my_var << endl;
	cout << &eight << endl;
	//Your Prediction: Memory location of eight. This will output the same thing.
	//Actual: they both output some memory location like 00000050129BF9C4 but they are the same.
	//Notes: I know this because the pointer my_var is assigned to the memory location of
	//eight.  Also, the output was the same.


	cout << "2)";
	cout << *new_var << endl;
	//Your Prediction: 8
	//Actual: 8
	//Notes: new_var was assigned to my_var which was pointing to eight which has the value of 8.
	//I know this because the * symbol means to output the value that the new_var is pointing to.
	//Also, the output was 8.


	cout << "3)";
	*my_var = *my_var + 492;
	cout << eight << endl;
	//Your Prediction: 500
	//Actual: 500
	//Notes: Eight is affected by anything that happenes to my_var.  So, the statement on 
	//line 150 is telling the program to add 492 to the value that my_var is pointing to,
	//which is 8.  8 + 492 = 500, so the value of eight is increased by 492.  I know this is
	//true because of the statement above and because 500 is what was outputted.

	cout << "4)";
	*my_var = 300;
	cout << *my_var << endl;
	//Your Prediction: 300
	//Actual: 300
	//Notes: *my_var was updated to equal 300.  So the new value that the my_var is pointing to
	// is 300.  I know this is true because the statement was updated on line 161 and because the
	//the output was 300.


	cout << "5)";
	*my_var = ten;
	cout << eight << endl;
	//Your Prediction: 300
	//Actual: 10
	//Notes: Eight is affected by anything that happenes to my_var because my_var is still
	//pointing to memory location of eight.  So, when the value that my_var is assigned to is
	//updated to equal ten (which ten is equal to 10), the variable eight is also updated to
	//equal 10.  I know this is true because the * symbol means the value that the my_var
	//is pointing to is now 10 and because 10 is outputted.


	cout << "6)";
	super_var = my_var;
	*super_var = *my_var-299;
	cout << *super_var << endl;
	//Your Prediction: 1
	//Actual:-289
	//Notes: Because of the last problem, 10 - 299 = -289.  So, super_var is pointing to the same
	//memory location my_var is pointing to.  When 299 is taken away from the my_var value, that
	//is what the super_var value is equal to.  I know this is true because the * symbol means
	//the value that the pointer is pointing to and because -289 is what was updated.

	
	cout << "7)";
	cout << *my_var << endl;
	//Your Prediction: 1
	//Actual: -289
	//Notes: Because my_var assigned the super_var to the same memory location, they both will
	//output the same thing.  Since super_var value was -289 due to line 183, *my_var's value is
	//now also -289.  I know this is true because on line 182, the memory location that the
	//super_var and my_var pointers are pointing to are the same.  So, when super_var's value
	//is changed, my_var's value is also changed to -289. Also, -289 was outputted.


	cout << "8)";
	super_var = new int(3);
	cout << *super_var << endl;
	//Your Prediction: 3
	//Actual: 3
	//Notes: super_var was given a new value, so *super_var = 3.  I know this is true due to
	//line 205 and because 3 was outputted.

}