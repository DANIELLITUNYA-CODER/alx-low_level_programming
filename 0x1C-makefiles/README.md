Task 0: make -f 0-Makefile
Create your first Makefile.
Requirements:
Name of the executable: school
Rules: all
The all rule builds your executable.
Variables: none
Task 1: make -f 1-Makefile
Requirements:
Name of the executable: school
Rules: all
The all rule builds your executable.
Variables: CC, SRC
CC: the compiler to be used
SRC: the .c files
Task 2: make -f 2-Makefile
Create your first useful Makefile.
Requirements:
Name of the executable: school
Rules: all
The all rule builds your executable.
Variables: CC, SRC, OBJ, NAME
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
Task 3: make -f 3-Makefile
Requirements:
Name of the executable: school
Rules: all, clean, oclean, fclean, re
all: builds your executable
clean: deletes all Emacs and Vim temporary files along with the executable
oclean: deletes the object files
fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
re: forces recompilation of all source files
Variables: CC, SRC, OBJ, NAME, RM
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
RM: the program to delete files
Task 4: A complete Makefile
Requirements:
Name of the executable: school
Rules: all, clean, fclean, oclean, re
all: builds your executable
clean: deletes all Emacs and Vim temporary files along with the executable
oclean: deletes the object files
fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
re: forces recompilation of all source files
Variables: CC, SRC, OBJ, NAME, RM, CFLAGS
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
RM: the program to delete files
CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
Task 5: Island Perimeter
Technical Interview Preparation:
Create a function def island_perimeter(grid) that returns the perimeter of the island described in the grid.
grid is a list of list of integers:
0 represents a water zone
1 represents a land zone
One cell is a square with side length 1
Grid cells are connected horizontally/vertically (not diagonally)
Grid is rectangular, width and height don’t exceed 100
Grid is completely surrounded by water, and there is one island (or nothing)
The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island)
Task 6: make -f 100-Makefile (Advanced)
Requirements:
Name of the executable: school
Rules: all, clean, fclean, oclean, re
all: builds your executable
clean: deletes all Emacs and Vim temporary files along with the executable
oclean: deletes the object files
fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
re: forces recompilation of all source files
Variables: CC, SRC, OBJ, NAME, RM, CFLAGS
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
RM: the program to delete files
CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic'
