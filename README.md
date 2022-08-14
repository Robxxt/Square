# Square
The program receives two arguments that represents the height and width of the figure to draw. The unique library I will use is &lt;unistd.h>. All the rest of functions are going to be created by myself.
Due to the screen size limitation, the implementation can be imposible for some huge inputs so in order to prevent unwanted behavior I limited the input for 100 both height and width.

In order to compile use this command: gcc -Wall -Wextra -Werror main.c -o main

#Behavior

Input: 10, 10
0--------0
|        |
|        |
|        |
|        |
|        |
|        |
|        |
|        |
0--------0

Input: 0, 10

Input: 10, 0

Input: 10, 1
0--------0

Input: 1, 10
0
|
|
|
|
|
|
|
|
0

Input: 15, 9
0-------------0
|             |
|             |
|             |
|             |
|             |
|             |
|             |
0-------------0
