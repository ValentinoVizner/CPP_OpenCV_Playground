## 1. Practice using the terminal
1. Count how many lines are there in “data.dat”.
   1. A: wc -l data.dat
2. Count how many lines of those contain “dolor” or “dalor”?
   1. A: grep -E "dolor|dalor"  -c data.dat
3. Count how many words are there in “data.dat”?
   1. A: wc -w data.dat
4. Count how many of those start with “mol”?
   1. A: grep -c 'mol..' data.dat
5. Count how many files in “test folder” are “.txt” files?
   1.A: find test_folder/ -type f -name "*.txt" | wc -l 

## 2. First C++ program
In this exercise you will write a small “guessing” game. The program will pick a random number
from 0 to 99 and you will be guessing this number by providing your guess through stdin. Depending on
which number you have guessed there are 3 outcomes:
• You have guessed the number. Then the program has to tell you that you have won.
• Your number if larger than the target one. The program should tell you that it’s number is smaller.
• Your number is smaller than the target one. The program should tell you that its number is larger.
The game goes on until you have guessed the number.