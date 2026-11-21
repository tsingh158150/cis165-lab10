Name: Trishi Singh

Lottery Digit Matching Program

Course section: CIS-165-H099

**Initial plan**

The program will use two integer arrays, winningDigits and player, each with five elements. First, it will seed the random-number generator once and use a loop with rand() % 10 to create five winning digits from 0 through 9\. Next, it will prompt the user to enter five digits and store them in the player array with a loop. A third loop will compare the arrays at matching indices only. Each time the two digits at the same index are equal, the program will add one to a match counter. Finally, it will print both arrays and the total number of matching positions with clear labels.

**Compile and run**

* Run the executable:  
  * Windows: lottery.exe  
  * Mac/Linux: ./lottery  
* Enter five digits between 0 and 9\.  
* The program generates five random winning digits.  
* It compares the winning digits with the player's digits at the same positions.  
* It displays both arrays and the total number of matches.

**Test Results**

Test 1: Fixed winning digits

* Winning digits: \[7, 4, 9, 1, 3\]  
* Player digits: \[4, 2, 9, 7, 3\]  
* Expected result: 2 matches.  
* Actual result: 2 matches.  
* Result: Passed.

Test 2: All five digits match

* Winning digits: \[7, 4, 9, 1, 3\]  
* Player digits: \[7, 4, 9, 1, 3\]  
* Expected result: 5 matches.  
* Actual result: 5 matches.  
* Result: Passed.

Test 3: No digits match

* Winning digits: \[7, 4, 9, 1, 3\]  
* Player digits: \[0, 0, 0, 0, 0\]  
* Expected result: 0 matches.  
* Actual result: 0 matches.  
* Result: Passed.

Test 4: Repeated digits

* Winning digits: \[1, 1, 2, 2, 3\]  
* Player digits: \[1, 2, 2, 3, 3\]  
* Expected result: 3 matches.  
* Actual result: 3 matches.  
* Result: Passed.

Test 5: Additional fixed array test

* Winning digits: \[1, 2, 3, 4, 5\]  
* Player digits: \[5, 4, 3, 2, 1\]  
* Expected result: 1 match.  
* Actual result: 1 match.  
* Result: Passed.

Test 6: Final Random-Generation Run

* Player input: \[1, 2, 3, 4, 5\]  
* Winning digits generated: \[4, 6, 7, 3, 3\]  
* Player digits: \[1, 2, 3, 4, 5\]  
* Expected result: 0 matches.  
* Actual output: 0 matches.

**Code explanation**

* How does the random expression keep every digit between 0 and 9? rand() % 10 gives the remainder after division by 10\. A remainder can be 0 through 9, so each generated digit is in the required range.  
* Why does a matching digit in another position not count? The comparison uses winningDigits\[i\] \== player\[i\]. It checks only the two elements with the same index, not the other positions.  
* Trace the example arrays. For winning \[7, 4, 9, 1, 3\] and player \[4, 2, 9, 7, 3\], indices 0 and 1 do not match, index 2 matches, index 3 does not match, and index 4 matches. The counter goes from 0 to 1 to 2, giving 2 matches.  
* Why do array loops stop before SIZE, and what did the fixed tests establish? A five-element array has valid indices 0 through 4\. The loop condition i \< SIZE stops at 4 and prevents accessing index 5, which is outside the array. The fixed tests checked zero, partial, and all-position matches, including repeated digits.

