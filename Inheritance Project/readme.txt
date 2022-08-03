# Threading Project
Write an app that spawns X threads. Each thread should have a unique incrementing identifier (0-X). The main thread should wait for 10 seconds and then signal the spawned threads to begin. Each thread should get the value of a shared number, increment the shared number, and print the retrieved value and the unique ID number. Threads should do this in a loop Z times. X and Z are command line arguments. Project should be written in C++ and include a readme with instructions on how to build and run on Ubuntu. Put the project on GitHub and send me a link.

## Sample output:
```
$ ./program 4 5
Sleeping for 10 seconds...
Thread #0, value 0
Thread #2, value 1
Thread #3, value 2
Thread #1, value 3
Thread #0, value 4
Thread #3, value 5
Thread #2, value 6
Thread #1, value 7
Thread #0, value 8
Thread #3, value 9
Thread #1, value 10
Thread #2, value 11
Thread #3, value 12
Thread #1, value 13
Thread #2, value 14
Thread #0, value 15
Thread #3, value 16
Thread #1, value 17
Thread #2, value 18
```
## How to run this projects?
1. Download project folder from github.
2. There's a `Makefile` for this project, simply compile it by entering `make` in the terminal.
4. Then run this project by entering `./Q1.exe`. 