#include "libft.h"
#include <string.h>
#include <stdio.h>

//  ATOI 

// int	main(void)
// {
// 	int	num1, num2, num3;
// 	char	*s1 = "  75numbers";
// 	char	*s2 = "my number";
// 	char	*s3 = "-123";

// 	num1 = atoi(s1);
// 	printf("in string %s was number %d\n", s1, num1);
// 	num2 = atoi(s2);
// 	printf("in string %s was number %d\n", s2, num2);
//    num2 = ft_atoi(s2);
// 	printf("in string %s was number %d\n", s2, num2);
// 	num3 = atoi(s3);
// 	printf("in string %s was number %d\n", s3, num3);
//    num3 = ft_atoi(s3);
// 	printf("in string %s was number %d\n", s3, num3);
//    return (0);
// }

//BZERO замена первых символов строки буффер нолями

// int main(int c, char** v)
// {
//     char buffer[] = "This is a test of the memset function";
//     printf("Before: %s\n", buffer);
//     ft_bzero(buffer, 8);
//     printf("After:  %s\n", buffer + 8);
//     return (0);
// }

//CALLOC выделение память для строки и заполнение 0

// int main(void)
// {
//    char *str = NULL;
//    str = calloc(1,sizeof(char)); /* выделить память для строки */
//    if(str)
//    {
//       strcpy(str,"Hello_worldeded!!!"); /* скопировать в строку "Hello" */
//       printf("Строка : %s\n",str);
//       free(str); /* освободить память */
//    }
//    else
//    {
//       printf("Недостаточно памяти\n");
//    }
//    return(0);
// }

// ITOA конвертирует из int в char

// int		main(void)
// {
// 	printf("\n%s\n", ft_itoa(-10050003));

// }

//MEMCHR поиск символа в строке и вывод строки после него вместе с ним

// int main (void)
// {
//    unsigned char src[15]="1233567890"; // Исходный массив
//    char *sym; // Переменная, в которую будет сохранен указатель
//    // на искомый символ.

// 	printf ("src old: %s\n",src); // Вывод исходного массива
// 	sym = ft_memchr(src, '3', 10); // Поиск требуемого символа

//    		// Если требуемый символ найден, то заменяем его
//    		// на символ '!'
// 	if (sym != NULL)
//       sym[0]='!';
// 	printf ("src new: %s\n",sym); // Вывод исходного массива
// 	return 0;
// }

//MEMCMP сравнение символов и возвращает разницу

// int main (void)
// {
//    // Исходные массивы
//    unsigned char src[15]="123456789";
//    unsigned char dst[15]="1234567890";

//    // Сравниваем первые 10 байт массивов
//    // и результат выводим на экран
//    if (memcmp (src, dst, 10) == 0)
//       printf("Области памяти идентичные.");
//    else
//       printf("Области памяти отличаются.");

//    return 0;
// }

//MEMCPY копирует заданное кол-во символов из 1 строки в другю

// int main (void)
// {
//    unsigned char src[10]= "123456";
//    unsigned char dst[10]= "";
//    ft_memcpy(dst, src, 5); // Копируем 6 байт из массива src в массив dst
//    printf("dst: %s\n",dst);
//    return 0;
// }

//MEMMOVE копирует из src в dst c перекрытием

// int main (void)
// {
// 	char d[] = "qwerty";
// 	char s[] = "12345";
// 	printf("%s",(char*)ft_memmove(d, s, 4));
// 	return(0);
// }

//MEMSET заменим массив на цифру 1

// int main(void)
// {
// 	unsigned char	src[] = "qwerty1234"; //  исходник
// 	ft_memset(src, 49, 7); //заменим массив на цифру 1
// 	printf("src: %s\n", src); //вывод
// 	return (0);
// }

//STRDUP

// int		main(void)
// {
//    printf("%s\n", ft_strdup("Hello world!"));
//    printf("%s\n", strdup("Hello world!"));
// 	return (0);
// }

// int main (void)
// {    
  
//    char str [11]=”0123456789”;  // Исходная строка
//    char *istr; // Переменная, в которую будет помещен указатель на дубликат строки
// 	istr = strdup(str);  // Дублирование строки
//    printf (“Дубликат: %s\n“, istr);
//    free (istr); // Очищаем память, выделенную под дубликат
//    return 0;
// }

//STRITTERI

// void my_func(unsigned int i, char *str)
// {
//  	printf("My inner function: index = %d and the string is %s\n", i, str);
// }

// 	int main()
// {
//  	char str[10] = "Hello.";
//  	printf("The result is %s\n", str);
//  	ft_striteri(str, my_func);
//  	printf("The result is %s\n", str);
//  	return 0;
// }

// STRMAPI

// int main()
// {
// 	char str[] = "hello";
// 	char *res;
// 	printf("str is %s\n", str);
// 	res = ft_strmapi(str, char (*f)(unsigned int, char))
//}

// SRTCNMP

// int main (void)
// {    
   
//    char str1[16]="1234567890"; // Сравниваемые строки
//    char str2[16]="1234507890";
  
   
//    if (strncmp (str1, str2,6)==0)
//       printf("Первые 6 символов строк идентичны");
//    else		// Сравниваем первые пять символов двух строк
//       printf("Первые 6 символов строк отличаются");

//    return 0;
// }

// STRNSTR

// int main (void)
// {    
// 	char str1[16]= "1234567890"; 
// 	char str2[16]= "789";
// 	size_t len = 6;
// 	//size_t max = ft_strlen(str2);
// 	/*char *s1 = strnstr(str1, str2, max);
// 	char *s2 =ft_strnstr(str1, str2, max);*/
// 	if (ft_strnstr(str1, str2, len))
// 	//printf("strnstr: %s\n ft_strnstr: %s\n", s1, s2);

// 		printf("'%s' found in '%s'", str2, str1);
// 	else
// 		printf("'%s' not found in '%s'", str2, str1);
//    return 0;
// }

//STRRCHR ищет последнее вхождение символа и печатает строку обрезая ее до символа

// int	main (void)
// {    
   
//    char str []= "0123456789123456789"; // Массив со строкой для поиска
//    int ch = '1'; // Код искомого символа
//    char *ach; // Указатель на искомую переменную в строке, по которой 
//    				//осуществляется поиск.
//    ach = strrchr(str, ch); // Ищем символ ‘6’
//    if (ach == NULL)
//       printf ("Символ в строке не найден\n"); // Выводим результат на консоль
//    else
//       printf ("Искомый символ в строке на позиции # %ld\n",ach-str+1);
//    return 0;
// }

//STRTRIM обрезает строку с обоих сторон символами справа 

// int					main(void)
// {
// 	printf("%s\n", ft_strtrim("loreminaem", "lem"));
// 	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));

// 	return (0);
// }

//SUBSTR

// int main(void)
// {  
//    printf("substring is %s", ft_substr("printer", 2, 4));
//    //printf("substring is %d", substr("programming", 0, 3));
//    return (0);
// }

//STRJOIN обьединяет 2 строки в 1 

// int main(void)
// {
//       printf("new string is %s\n", ft_strjoin("hello ", "world"));
//       return (0);
// }

//STRLCAT

// int		main(void)
// {
// 	char			dest[14] = "go home";
// 	char			src[7] = "qwerty";
// 	unsigned int	size;

// 	size = 13;
// 	printf("%zu\n", ft_strlcat(dest, src, size));
//    printf("%lu", strlcat(dest,src, size));
//    return (0);
// }

//STRLCPY 

// char  buf[6];                      // буфер размером меньше строки

// int main(void)
// {
//    const char *str = NULL;
//    size_t sz;

//    buf[1] = '\0';      // избыточная инициализация для отладочной печати
//    printf("string: \"%s\"\n\n", str);
//    printf("буфер перед копированием: \"%s\"\n", buf);
//    sz = ft_strlcpy(buf, str, sizeof(buf));    
//    if (sz >= sizeof(buf))      
//       printf("обнаружено усечение строки с %zu до %lu символов !\n", sz, sizeof(buf)-1);
//    printf("буфер после копирования:  \"%s\"\n", buf);
//    return 0;
// }

//SPLIT

// int main()
// {
//     char c = ' ';
//     char const *str = "  qwerty qeqw dfgdf dgd  ";
//     char **arr = ft_split(str, c);
//     int i = 0;
//     while (arr[i])
//     {
//         printf("[%s]\n", arr[i]);
//         i++;
//     }
// 	return(0);
// }