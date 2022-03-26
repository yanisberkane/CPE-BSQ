# Elementary Programming in C - BSQ Project
Language: C

This progoram finds the largest possible square on a board while avoiding obstacles.

The board is represented by a file passed as the program’s argument. The file is valid if it is respecting those
constraints:

  - its first line contains the number of lines on the board (and only that).
  
  - “.” (representing an empty place) and “o” (representing an obstacle) are the only two characters for the
  other lines.
  
  - all of the lines are of the same length (except the first one).
  
  - it contains at least one line.
  
  - each line is terminated by ‘\n’.

The program prints the board, with some “.” replaced by “x” to represent the largest square found.

## Map file Example
![image](https://user-images.githubusercontent.com/91698189/160253970-6f1cea03-37b3-49e2-98cf-13df5edf54ac.png)
![image](https://user-images.githubusercontent.com/91698189/160254001-f4f4558d-9d9f-492a-b417-afe10a352edf.png)
