//
//#include <stdio.h>
///* печать таблицы температур по Фаренгейту
// и Цельсию для fahr = 0, 20, ..., 300 */
//int main()
//{
//    int fahr;
//    int celsius;
//    int lower, upper, step;
//    lower = 0; /* нижняя граница таблицы температур */
//    upper = 300; /* верхняя граница */
//    step = 20; /* шаг */
//
//    fahr = lower;
//    while (fahr <= upper)
//    {
//        celsius = ((fahr-32) * 5 / 9);
//        printf ("%3d\t%3d\n", fahr, celsius);
//        fahr = fahr + step;
//    }
//}



//#include <stdio.h>
///* печать таблицы температур по Фаренгейту
// и Цельсию для fahr = 0, 20, ..., 300 */
//int main()
//{
//    float fahr;
//    float celsius;
//    int lower, upper, step;
//    lower = 0; /* нижняя граница таблицы температур */
//    upper = 300; /* верхняя граница */
//    step = 20; /* шаг */
//    printf("Farenheit  Celsius\n");
//    fahr = lower;
//    while (fahr <= upper)
//    {
//        celsius = ((fahr-32.0) * (5.0/ 9.0)) ;
//        printf ("%3.0f   \t   %6.2f\n", fahr, celsius);
//        fahr = fahr + step;
//    }
//}

//
//#include <stdio.h>
///* печать таблицы температур по Фаренгейту
// и Цельсию для fahr = 0, 20, ..., 300 */
//int main()
//{
//    float fahr;
//    float celsius;
//    float lower, upper, step;
//    lower = -100.0; /* нижняя граница таблицы температур */
//    upper = 100.0; /* верхняя граница */
//    step = 20.0; /* шаг */
//    printf("Celsius  Farenheit\n");
//    celsius = lower;
//    while (celsius <= upper)
//    {
//        fahr = (celsius * (9.0 / 5.0) + 32.0);
//        printf ("%6.2f   \t   %6.2f\n", celsius, fahr);
//        celsius = celsius + step;
//    }
//}

// http://antilopu-gnu.blogspot.com/2012/10/blog-post_22.html


//#include <stdio.h>
///* печать таблицы температур по Фаренгейту и Цельсию */
//int main() {
//    int fahr;
//    for (fahr = 300; fahr >= 0; fahr = fahr - 10)
//        printf ("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
//}

#include <stdio.h>
#define LOWER 0 /* нижняя граница таблицы */
#define UPPER 300 /* верхняя граница */
#define STEP 20 /* размер шага */
/* печать таблицы температур по Фаренгейту и Цельсию */
int main ()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf ("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
