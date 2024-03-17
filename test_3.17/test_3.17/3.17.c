////#include <iostream>
////#include <unistd.h>
////#include <sys/wait.h>
////
////int main() {
////    pid_t pid = fork();
////
////    if (pid == -1) {
////        std::cout << "Failed to create child process." << std::endl;
////        return 1;
////    }
////
////    if (pid == 0) {
////        // Child process
////        std::cout << "I am child process." << std::endl;
////        sleep(5);
////        return 0;
////    }
////    else {
////        // Parent process
////        int status;
////        pid_t childPid = waitpid(pid, &status, 0);
////
////        if (childPid == -1) {
////            std::cout << "Error while waiting for child process." << std::endl;
////        }
////        else {
////            if (WIFEXITED(status))
////                std::cout << "Child process exited normally with status: " << WEXITSTATUS(status) << std::endl;
////            else if (WIFSIGNALED(status))
////                std::cout << "Child process terminated by signal: " << WTERMSIG(status) << std::endl;
////            else if (WCOREDUMP(status))
////                std::cout << "Child process terminated and produced a core dump." << std::endl;
////        }
////    }
////
////    return 0;
////}
//
//int main()
//{
//    int a = 0;
//    a++;
//    execl("/usr/bin/pwd", "pwd", NULL);
//    printf("%d\n", a++);
//}
//
//
//进程程序替换
//
////#include <unistd.h>
////
////int main() {
////    // execl函数用于进行程序替换
////    execl("/bin/ls", "ls", "-l", "-a", NULL);
////
////    // 如果execl执行成功，下面的代码不会执行到
////    // 如果execl执行失败，会返回-1，可以在这里处理错误逻辑
////
////    return 0;
////}

