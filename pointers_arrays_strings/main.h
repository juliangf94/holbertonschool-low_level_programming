#ifndef MAIN_H
#define MAIN_H

/* Function prototype for _putchar (used by some string functions) */
int _putchar(char c);

/* 0. 98 Battery st. */
void reset_to_98(int *n);

/* 1. Don't swap horses in crossing a stream */
void swap_int(int *a, int *b);

/* 2. This report, by its very length, defends itself against the risk of being read */
int _strlen(char *s);

/* 3. I do not fear computers. I fear the lack of them */
void _puts(char *str);

/* 4. I can only go one way. I've not got a reverse gear */
void print_rev(char *s);

/* 5. A good engineer thinks in reverse... */
void rev_string(char *s);

/* 6. Half the lies they tell about me aren't true */
void puts2(char *str);

/* 7. Winning is only half of it. Having fun is the other half */
void puts_half(char *str);

/* 8. Arrays are not pointers (ALLOWED to use printf) */
void print_array(int *a, int n);

/* 9. strcpy */
char *_strcpy(char *dest, char *src);

/* 10. Great leaders are willing to sacrifice the numbers... */
int _atoi(char *s);

#endif /* MAIN_H */
