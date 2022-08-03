#ifndef FRUIT_H
#define FRUIT_H
#include <iostream>
class Fruit
{
public:
    virtual void Identify()
    {
        std::cout << "This is a fruit" << std::endl;
    };
};

class Banana : public Fruit
{
private:
    std::string type = "banana";

public:
    void Identify()
    {
        std::cout << "This is a " << type << std::endl;
    }
};

class Tangerine : public Fruit
{
private:
    std::string type = "tangerine";

public:
    void Identify()
    {
        std::cout << "This is a " << type << std::endl;
    }
};

class Pear : public Fruit
{
private:
    std::string type = "pear";

public:
    void Identify()
    {
        std::cout << "This is a " << type << std::endl;
    }
};

#endif // FRUIT_H