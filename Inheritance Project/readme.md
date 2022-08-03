# Inheritance Project
Create a set of classes that inherit from a base class. The base class should be Fruit and the derived classes are all types of fruit (Banana, Tangerine, and Pear). The base Fuit class should only have one member: Identify(). Implement your classes so that the included main function will produce the included result. Project should be written in C++ and include a readme with instructions on how to build and run on Ubuntu. Put the project on GitHub and send me a link.
```
///////main///////
#include "Fruit.hpp"
#include <vector>

int main() {
    vector<Fruit *> fruit;

    fruit.push_back(new Fruit());
    fruit.push_back(new Banana());
    fruit.push_back(new Tangerine());
    fruit.push_back(new Pear());

    for (auto f : fruit) {
        f->Identify();
    }
}

///////main///////
```

## Sample output:
```
I am a fruit.
I am a banana.
I am a tangerine.
I am a pear.
```
## How to run this projects?
1. Download project folder from github.
2. There's a `Makefile` for this project, simply compile it by entering `make` in the terminal.
4. Then run this project by entering `./Q1.exe`. 
