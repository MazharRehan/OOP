//Singleton Design Pattern
//Singleton class

#include <iostream>
using namespace std;

class Singleton
{
    static Singleton* instance; // declare static pointer of class Singleton
    int data;
    // Private constructor so that no objects can be created.
    Singleton() {
        data = 0;
    }

public:
    static Singleton* getInstance()
    {
        if (!instance)
            instance = new Singleton;

        return instance;
    }
    int getData()
    {
        return this->data;
    }

    void setData(int data)
    {
        this->data = data;
    }

    ~Singleton()
    {
        delete instance;
        instance = NULL;
    }

};

//Initialize pointer to zero so that it can be initialized in first call to getInstance
Singleton* Singleton::instance = 0;

int main() {
    Singleton* s = s->getInstance();

    cout << s->getData() << endl;

    s->setData(100);
    cout << s->getData() << endl;

    

    return 0;
}
