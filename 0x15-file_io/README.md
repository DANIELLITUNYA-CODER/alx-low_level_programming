# 0x15. File I/O

## Overview

This repository contains C programs that demonstrate file input/output operations. The tasks are part of the ALX Low Level Programming curriculum.

## Table of Contents

1. [Task 0: Tread lightly, she is near](#task-0-tread-lightly-she-is-near)
2. [Task 1: Under the snow](#task-1-under-the-snow)
3. [Task 2: Speak gently, she can hear](#task-2-speak-gently-she-can-hear)
4. [Task 3: cp](#task-3-cp)
5. [Advanced Task: elf](#advanced-task-elf)

## Task 0: Tread lightly, she is near

Write a function that reads a text file and prints it to the POSIX standard output.

### Prototype
```c
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

