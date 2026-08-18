
*This project has been created as part of the 42 curriculum by serozdem.*

# Libft – 42 School

## Description

**libft**, C programlama dilinde sık kullanılan standart kütüphane fonksiyonlarının yeniden yazılmış bir koleksiyonudur.
Projenin temel amacı:

* Standart C kütüphanesindeki (`<string.h>`, `<stdlib.h>`, `<ctype.h>` vb.) temel fonksiyonları yasak fonksiyonlar kullanmadan baştan yazmak.
* Standart kütüphanede bulunmayan ancak pratikte çok faydalı olan yardımcı fonksiyonlar oluşturmak.

Bu kütüphane, 42’nin ilerleyen projelerinde (`get_next_line`, `ft_printf`, `so_long`, `pipex`, `push_swap`, `minishell`, `cub3D` vb.) temel bir araç olarak kullanılacaktır.

---

## Technical Considerations & Rules

* **Dil:** C
* **Kod Standardı:** 42 Normuna tam uyumlu (**Norminette**).
* **Derleme Bayrakları:** `-Wall -Wextra -Werror`
* **Yasaklar:** Global değişkenler, `libtool`, prototiplerde C99 `restrict` niteleyicisi.
* **Bellek Yönetimi:** Sıfır memory leak (bellek sızıntısı), doğru temizleme (`free`), beklenmeyen çökmelerin (`Segmentation Fault`, `Double Free`) önlenmesi.
* **Statik Kütüphane:** `ar` aracı kullanılarak oluşturulur.

---

## Fonksiyon Listesi

### Karakter Kontrol ve Dönüşüm
```c
int     ft_isalpha(int c);
int     ft_isalnum(int c);
int     ft_isdigit(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);

Bellek İşlemleri
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);
String İşlemleri
size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *big, const char *little, size_t len);
char    *ft_strdup(const char *s);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
char    **ft_split(char const *s, char c);
Sayı ve Dönüşüm
int     ft_atoi(const char *nptr);
Dosya Descriptor’ına Yazma
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
Linked List
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}               t_list;
t_list  *ft_lstnew(void *content);
int     ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstadd_front(t_list **lst, t_list *new);
void    ft_lstdelone(t_list *lst, void (*del)(void *));
void    ft_lstclear(t_list **lst, void (*del)(void *));
void    ft_lstiter(t_list *lst, void (*f)(void *));
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
Instructions & Usage
Gereksinimler

    GCC veya Clang derleyici

    make aracı

    Standart C kütüphane başlık dosyaları
    Derleme ve Makefile Kuralları

Deponun kök dizininde aşağıdaki komutları çalıştırabilirsiniz:

    make veya make all: Kütüphaneyi derler ve libft.a dosyasını oluşturur.

    make bonus: Bonus (linked list) fonksiyonlarını derler.

    make clean: Tüm nesne (.o) dosyalarını temizler.

    make fclean: Nesne dosyalarını ve oluşturulan libft.a kütüphanesini siler.

    make re: Projeyi sıfırdan yeniden derler (fclean + all).
    Kullanım

Kütüphaneyi başka bir C projektöründe kullanmak için:

    Başlık dosyasını kaynak kodunuza ekleyin:
    #include "libft.h"
    Programınızı statik kütüphane ile birlikte derleyin:
    cc main.c libft.a
    esources
Klasik Kaynaklar

    man 3 <fonksiyon>

    The C Programming Language — Kernighan & Ritchie

    cplusplus.com cstring reference

    cplusplus.com cstdlib reference

    cppreference.com C documentation

    Beej's Guide to C

42 ve Topluluk Kaynakları

    42 Libft subject PDF

    Libft Cheat Sheet

    42 Cursus Guide

AI Kullanımı

Bu projede AI araçları aşağıdaki amaçlarla kullanılmıştır:  

    Standart fonksiyonların edge case’lerini ve tanımsız davranışlarını anlamak.  

    ft_split, ft_strtrim, ft_substr ve linked list fonksiyonları için mantık ve yapı fikirleri almak.  

    Pointer aritmetiği ve bellek yönetimi konularını daha hızlı kavramak.  

    Kod okunabilirliğini artırmak için isimlendirme ve yapı önerileri almak.  

    Makefile ve proje yapısı için başlangıç şablonu oluşturmak.  

Hiçbir fonksiyon doğrudan kopyalanmamıştır. Tüm implementasyonlar tarafımdan yazılmış, AI yalnızca öğretici ve kod inceleyici olarak kullanılmıştır.  
Author  

    serozdem — 42 Student