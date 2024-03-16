//////#include <stdio.h>
//////#include <stdlib.h>
//////
//////struct Data {
//////    int length;
//////    int array[];  // ��������
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
////    // ���ļ�
////    filePtr = fopen("example.txt", "r");
////
////    if (filePtr == NULL) {
////        printf("�޷����ļ�");
////        return 1;
////    }
////
////    // ����ַ���ȡ������ļ�����
////    while ((ch = fgetc(filePtr)) != EOF) {
////        printf("%c", ch);
////    }
////
////    // �ر��ļ�
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
//        printf("�޷����ļ�");
//        return 1;
//    }
//
//    int result = fputc('A', file);
//
//    if (result == EOF) {
//        printf("д��ʧ��");
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
//    FILE* file = fopen("example.txt", "r");  // ��һ���ļ�����ȡ
//
//    char str[100];
//    if (fgets(str, sizeof(str), file) != NULL) {
//        printf("��ȡ�����ַ�����%s", str);
//    }
//
//    fclose(file);  // �ر��ļ�
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
//        printf("�޷����ļ�");
//        return 1;
//    }
//
//    const char* str = "Hello, world!";
//    int result = fputs(str, file);
//
//    if (result == EOF) {
//        printf("д��ʧ��");
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
//    // ���ļ�
//    fp = fopen("input.txt", "r");
//    if (fp == NULL) {
//        printf("�޷����ļ�");
//        return 1;
//    }
//
//    // ���ļ��ж�ȡ��������
//    int items_read = fscanf(fp, "%d %d", &num1, &num2);
//    if (items_read != 2) {
//        printf("��ȡ����ʧ��");
//        return 1;
//    }
//
//    // �����ȡ���
//    printf("num1 = %d", num1);
//    printf("num2 = %d", num2);
//
//    // �ر��ļ�
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
//    // ���ļ�
//    file = fopen("example.txt", "rb");
//    if (file == NULL) {
//        printf("�޷����ļ���");
//        return 1;
//    }
//
//    // ���ļ��ж�ȡ����
//    result = fread(buffer, sizeof(char), 50, file);
//    if (result <= 0) {
//        printf("��ȡ�ļ�ʧ�ܡ�");
//        return 1;
//    }
//
//    // �����ȡ������
//    printf("��ȡ�����ݣ�%s", buffer);
//
//    // �ر��ļ�
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
//            printf("����д��ɹ���");
//        }
//        else {
//            printf("����д��ʧ�ܡ�");
//        }
//        fclose(file);
//    }
//    else {
//        printf("�޷����ļ���");
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
//        printf("�޷����ļ���");
//        return 1;
//    }
//
//    rewind(file);  // ���ļ�λ��ָ�����¶�λ���ļ���ͷ
//
//    // �ڴ˴������ļ���ȡ����
//
//    fclose(file);  // �ر��ļ�
//    file = NULL;
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    FILE* file = fopen("example.txt", "r");  // ��һ���ı��ļ�����ȡ
//
//    if (file == NULL) {
//        printf("�޷����ļ�");
//        return -1;
//    }
//
//    fseek(file, 0, SEEK_END);  // ���ļ�ָ���ƶ����ļ�ĩβ
//    long file_size = ftell(file);  // ��ȡ�ļ���С
//
//    printf("�ļ���С��%ld �ֽ�", file_size);
//
//    fclose(file);  // �ر��ļ�
//
//    return 0;
//}
//
//    