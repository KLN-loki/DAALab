// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// int main()
// {
//     pid_t pid1, pid2;

//     pid1 = fork();
//     if (pid1 == 0)
//     {

//         printf("C1 (pid=%d) created with parent P (pid=%d).\n", getpid(), getppid());
//         sleep(5);
//         printf("C1 (pid=%d) exiting.\n", getpid());
//     }
//     else if (pid1 > 0)
//     {

//         printf("P (pid=%d) created.\n", getpid());

//         pid2 = fork();
//         if (pid2 == 0)
//         {

//             printf("C2 (pid=%d) created with parent P (pid=%d).\n", getpid(), getppid());
//             printf("C2's parent is P (pid=%d).\n", getppid());
//             printf("C2 (pid=%d) is sleeping.\n", getpid());
//             sleep(2);
//             printf("C2 (pid=%d) exiting.\n", getpid());
//             exit(0);
//         }
//         else if (pid2 > 0)
//         {

//             printf("P (pid=%d) is sleeping.\n", getpid());
//             sleep(4);
//             printf("P (pid=%d) exiting.\n", getpid());
//             exit(0);
//         }
//         else
//         {

//             printf("Error creating C2 process.\n");
//         }
//     }
//     else
//     {

//         printf("Error creating C1 process.\n");
//     }
//     return 0;
// }

#include<iostream>

using namespace std;

class base
{
    public:
    static void show_static(){
        cout << "This is static function" << endl;
    }
    virtual void show_virtual(){
        cout << "This is virtual function" << endl;
    }
};

class derived : public base
{
    public:
    static void show_static(){
        cout << "This is derived static function" << endl;
    }
    virtual void show_virtual(){
        cout << "This is derived virtual function" << endl;
    }
};

int main()
{
    base b;
    b.show_static();
    b.show_virtual();

    derived d;
    d.show_static();
    d.show_virtual();
    return 0;
}