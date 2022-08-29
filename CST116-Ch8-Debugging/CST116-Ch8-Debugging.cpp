/********************************************************************
* File: CST116-Ch8-Debugging.cpp
*
* General Instructions: Complete each step before proceeding to the
* next.
*
* Debugging Exercise 1
*
* 1) Insert a breakpoint on the lines indicated in the code.
* 2) Run to Breakpoint 1.
* 3) Place a watch on i.
* 4) Execute the while statement by doing a "Step Into".
* 5) The execution continues to the cout statement as expected.
* 6) Step over the cout statement.
* 7) Why didn't the flow of the program return back to the while
*    statement?
* 8) Fix this problem by removing the ; after the while statement.
* 9) Stop debugging and repeat Steps 2 � 5 to verify the correction
*    worked.
* 10) Stop debugging.
*
* Debugging Exercise 2
*
* 1) Run to Breakpoint 1.
* 2) Step into the while loop.
* 3) Why did the cout not execute?
* 4) Check the value of i, now check the condition, does the
*    condition evaluate to true?
* 5) Change the "< 0" to a "< 10".
* 6) Stop debugging and repeat Steps 1 � 4 to verify the correction
*    worked.
* 7) Stop debugging.
*
* Debugging Exercise 3
*
* 1) Run the program without debugging.
* 2) What is happening now is an infinite loop.
* 3) End your program by holding down the Ctrl key and pressing C.
* 4) Fix the problem by adding a "++" after the i in the cout
*    statement.
* 5) Run the program to Breakpoint 2 and verify that the output
*    displayed on the screen is 0 � 9.
*
* Debugging Exercise 4
*
* 1) Run to Breakpoint 2.
* 2) Add a watch to the variable count.
* 3) Verify that the contents of count is garbage.
* 4) Step into the loop.
* 5) What is the value stored in count now?
* 6) Where was 10 assigned to count?
* 7) Fix the problem and re-run to verify.
********************************************************************/
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i = 0;
    int count;

    // Breakpoint 1
    // Put a breakpoint on the following line
    while (i < 0);
    cout << i << endl;

    // Breakpoint 2
    // Put a breakpoint on the following line
    for (count = 0; count < 10; count++);
    cout << count << endl;

    return 0;
}
