#include <qthread.h>
#include <iostream>

using namespace std;

class MyThread : public QThread
{
public:
    virtual void run()
    {
        int count = 0;
        while (true)
        {
            sleep(1);
            cout << ++count << endl;
        }
    }
};


int main(int argc, char *argv[])
{
    MyThread thread;
    thread.start();
    thread.wait();

    return 0;
}
