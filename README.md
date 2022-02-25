LINUX SYSTEM PROGRAMMING EXERCISES IN C AND SHELL

1) Write a shell script that uses bash interpreter which will take just one parameter, compile and run the C file that corresponds to that parameter.

- Do not use "make" in the script.
- If the C file doesn't exist, the script should show an appropriate message indicating this error.
- If the file passed is not a C file, the script should show an appropriate message indicating this error.

2) Write a C program that reads all the contents of a file and writes half of the contents to a new file and the other half to another file. Use just the open, read and write syscalls. 

3) Write a C program that takes two files as arguments. When running, it reads the contents of the first file into the second file.
If the first file doesn't exist, print an appropriate error message.
If the second file doesn't exist, create it and write into it. You can use the open, read, write and creat syscalls.

Always remember to close files before terminating the program!
