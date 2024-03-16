//////#include <stdio.h>
//////#include <stdlib.h>
//////
//////struct Data {
//////    int length;
//////    int array[];  // 柔性数组
//////};
//////
//////int main() {
//////    int len = 5;
//////    struct Data* data = malloc(sizeof(struct Data) + len * sizeof(int));
//////
//////    data->length = len;
//////    for (int i = 0; i < len; i++) {
//////        data->array[i] = i;
//////    }
//////
//////    for (int i = 0; i < len; i++) {
//////        printf("%d ", data->array[i]);
//////    }
//////    printf("
//////        ");
//////
//////        free(data);
//////    return 0;
//////}
////
////#include <stdio.h>
////
////int main() {
////    FILE* filePtr;
////    char ch;
////
////    // 打开文件
////    filePtr = fopen("example.txt", "r");
////
////    if (filePtr == NULL) {
////        printf("无法打开文件");
////        return 1;
////    }
////
////    // 逐个字符读取并输出文件内容
////    while ((ch = fgetc(filePtr)) != EOF) {
////        printf("%c", ch);
////    }
////
////    // 关闭文件
////    fclose(filePtr);
////    filePtr = NULL;
////
////    return 0;
////}
//
//#include <stdio.h>
//
//int main() {
//    FILE* file = fopen("example.txt", "r");
//    if (file == NULL) {
//        printf("Failed to open file.");
//        return 1;
//    }
//
//    int ch;
//    while ((ch = fgetc(file)) != EOF) {
//        putchar(ch);
//    }
//
//    fclose(file);
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    FILE* file = fopen("output.txt", "w");
//
//    if (file == NULL) {
//        printf("无法打开文件");
//        return 1;
//    }
//
//    int result = fputc('A', file);
//
//    if (result == EOF) {
//        printf("写入失败");
//        return 1;
//    }
//
//    fclose(file);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    FILE* file = fopen("example.txt", "r");  // 打开一个文件供读取
//
//    char str[100];
//    if (fgets(str, sizeof(str), file) != NULL) {
//        printf("读取到的字符串：%s", str);
//    }
//
//    fclose(file);  // 关闭文件
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    FILE* file = fopen("output.txt", "w");
//
//    if (file == NULL) {
//        printf("无法打开文件");
//        return 1;
//    }
//
//    const char* str = "Hello, world!";
//    int result = fputs(str, file);
//
//    if (result == EOF) {
//        printf("写入失败");
//        return 1;
//    }
//
//    fclose(file);
//
//    return 0;
//}
//
//#include <stdio.h>
//int main() {
//    FILE* fp;
//    int num1, num2;
//
//    // 打开文件
//    fp = fopen("input.txt", "r");
//    if (fp == NULL) {
//        printf("无法打开文件");
//        return 1;
//    }
//
//    // 从文件中读取两个整数
//    int items_read = fscanf(fp, "%d %d", &num1, &num2);
//    if (items_read != 2) {
//        printf("读取数据失败");
//        return 1;
//    }
//
//    // 输出读取结果
//    printf("num1 = %d", num1);
//    printf("num2 = %d", num2);
//
//    // 关闭文件
//    fclose(fp);
//
//    return 0;
//}
//
//
//
//#include <stdio.h>
//
//int main() {
//    FILE* file = fopen("output.txt", "w");
//    if (file == NULL) {
//        printf("Failed to open the file.");
//        return 1;
//    }
//
//    fprintf(file, "Hello, World!");
//
//    fclose(file);
//    file = NULL;
//    return 0;
//}
//
//#include <stdio.h>
//int main() {
//    FILE* file;
//    char buffer[100];
//    int result;
//
//    // 打开文件
//    file = fopen("example.txt", "rb");
//    if (file == NULL) {
//        printf("无法打开文件。");
//        return 1;
//    }
//
//    // 从文件中读取数据
//    result = fread(buffer, sizeof(char), 50, file);
//    if (result <= 0) {
//        printf("读取文件失败。");
//        return 1;
//    }
//
//    // 输出读取的数据
//    printf("读取的数据：%s", buffer);
//
//    // 关闭文件
//    fclose(file);
//    file = NULL;
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int data[] = { 1, 2, 3, 4, 5 };
//    FILE* file = fopen("data.bin", "wb");
//
//    if (file != NULL) {
//        size_t written = fwrite(data, sizeof(int), sizeof(data) / sizeof(int), file);
//        if (written == sizeof(data) / sizeof(int)) {
//            printf("数据写入成功。");
//        }
//        else {
//            printf("数据写入失败。");
//        }
//        fclose(file);
//    }
//    else {
//        printf("无法打开文件。");
//    }
//
//    return 0;
//}
//
//
//
//#include <stdio.h>
//
//int main() {
//    FILE* file = fopen("example.txt", "r");
//    if (file == NULL) {
//        printf("无法打开文件！");
//        return 1;
//    }
//
//    rewind(file);  // 将文件位置指针重新定位到文件开头
//
//    // 在此处进行文件读取操作
//
//    fclose(file);  // 关闭文件
//    file = NULL;
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    FILE* file = fopen("example.txt", "r");  // 打开一个文本文件供读取
//
//    if (file == NULL) {
//        printf("无法打开文件");
//        return -1;
//    }
//
//    fseek(file, 0, SEEK_END);  // 将文件指针移动到文件末尾
//    long file_size = ftell(file);  // 获取文件大小
//
//    printf("文件大小：%ld 字节", file_size);
//
//    fclose(file);  // 关闭文件
//
//    return 0;
//}
//
//    