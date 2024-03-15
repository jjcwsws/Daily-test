//SIZE_T MY_STRLEN1(CONST CHAR* STR) {
//	SIZE_T COUNT = 0;
//	WHILE (*STR != '\0') {
//		COUNT++;
//		STR++;
//	}
//	RETURN COUNT;
//}
//SIZE_T MY_STRLEN2(CONST CHAR* STR) {
//	IF (*STR == '\0')
//		RETURN 0;
//	ELSE
//		RETURN 1 + MY_STRLEN2(++STR);
//}
//SIZE_T MY_STRLEN3(CONST CHAR* STR) {
//	CONST CHAR* PTR = STR;
//	WHILE (*PTR != '\0') {
//		PTR++;
//	}
//	RETURN PTR - STR;
//}
//
//CHAR* MY_STRCPY(CHAR* DESTINATION, CONST CHAR* SOURCE) {
//	CHAR* RET = DESTINATION;
//	ASSERT(DESTINATION != NULL);
//	ASSERT(SOURCE != NULL);
//	WHILE (*SOURCE != '\0') {  // ѭ��ֱ��Դ�ַ�������
//		*DESTINATION = *SOURCE;  // ��Դ�ַ������ַ����Ƶ�Ŀ���ַ���
//		DESTINATION++;  // �ƶ�Ŀ���ַ���ָ��
//		SOURCE++;  // �ƶ�Դ�ַ���ָ��
//	}
//
//	*DESTINATION = '\0';
//	RETURN RET;
//}
//
//CHAR* MY_STRCAT(CHAR* DESTINATION, CONST CHAR* SOURCE) {
//	ASSERT(DESTINATION);
//	ASSERT(SOURCE);
//	CHAR* RET = DESTINATION;
//	WHILE (*DESTINATION) {
//		DESTINATION++;
//	}
//	STRCPY(DESTINATION, SOURCE);
//	//WHILE (*DESTINATION++ = *SOURCE++);
//	RETURN RET;
//}
//
//INT MY_STRCMP(CONST CHAR* STR1, CONST CHAR* STR2) {
//	ASSERT(STR1);
//	ASSERT(STR2);
//	WHILE (*STR1 == *STR2) {
//		IF (*STR1 == '\0')RETURN 0;
//		STR1++;
//		STR2++;
//	}
//	RETURN (*STR1 - *STR2) > 0 ? 1 : -1;
//}
//
//CHAR* MY_STRSTR(CHAR* STR1, CONST CHAR* STR2) {
//	ASSERT(STR1);
//	IF (*STR2 == '\0')RETURN STR1;
//	CHAR* CP = STR1;
//	CHAR* S1 = CP;
//	CHAR* S2 = STR2;
//	WHILE (*CP != '\0')
//	{
//		S1 = CP;
//		S2 = STR2;
//		WHILE (*S1 != '\0' && S2 != '\0' && *S1 == *S2)
//			S1++, S2++;
//		IF (*S2 == '\0')
//			RETURN CP;
//		CP++;
//	}
//	RETURN NULL;
//}
//
//#INCLUDE <STDIO.H>
//#INCLUDE <STRING.H>
//#INCLUDE <ERRNO.H>
//
//INT MAIN() {
//	FILE* FILE = FOPEN("NONEXISTENT.TXT", "R");
//	IF (FILE == NULL) {
//		INT ERROR_CODE = ERRNO;
//		CONST CHAR* ERROR_MSG = STRERROR(ERROR_CODE);
//		PRINTF("ERROR OPENING FILE: %S", ERROR_MSG);
//	}
//	RETURN 0;
//}
//
//ISALPHA()�������ж��ַ��Ƿ�Ϊ��ĸ��������д��Сд��ĸ����
//ISDIGIT()�������ж��ַ��Ƿ�Ϊ���֣�0 - 9����
//ISALNUM()�������ж��ַ��Ƿ�Ϊ��ĸ�����֡�
//ISSPACE()�������ж��ַ��Ƿ�Ϊ�հ��ַ�����ո��Ʊ�������з��ȡ�
//ISPUNCT()�������ж��ַ��Ƿ�Ϊ�����š�
//ISUPPER()�������ж��ַ��Ƿ�Ϊ��д��ĸ��
//ISLOWER()�������ж��ַ��Ƿ�ΪСд��ĸ��
//TOLOWER()�����ڽ��ַ�ת��ΪСд��ĸ��
//TOUPPER()�����ڽ��ַ�ת��Ϊ��д��ĸ��