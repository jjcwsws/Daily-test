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
//	WHILE (*SOURCE != '\0') {  // 循环直到源字符串结束
//		*DESTINATION = *SOURCE;  // 将源字符串的字符复制到目标字符串
//		DESTINATION++;  // 移动目标字符串指针
//		SOURCE++;  // 移动源字符串指针
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
//ISALPHA()：用于判断字符是否为字母（包括大写和小写字母）。
//ISDIGIT()：用于判断字符是否为数字（0 - 9）。
//ISALNUM()：用于判断字符是否为字母或数字。
//ISSPACE()：用于判断字符是否为空白字符，如空格、制表符、换行符等。
//ISPUNCT()：用于判断字符是否为标点符号。
//ISUPPER()：用于判断字符是否为大写字母。
//ISLOWER()：用于判断字符是否为小写字母。
//TOLOWER()：用于将字符转换为小写字母。
//TOUPPER()：用于将字符转换为大写字母。