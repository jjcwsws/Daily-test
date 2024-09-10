#include <iostream>
#include <pthread.h>
#include <unistd.h>
#include <sys/types.h>

void *newthreadrun(void *args)
{
    while (true)
    {
        std::cout << "I am new thread, pid: " << getpid() << std::endl;
        sleep(1);
    }
}

int main()
{
    pthread_t tid;
    pthread_create(&tid, nullptr, newthreadrun, nullptr);

    while (true)
    {
        std::cout << "I am main thread, pid: " << getpid() << std::endl;
        sleep(1);
    }
}