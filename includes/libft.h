/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nidruon <nidruon@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 18:19:26 by nidruon           #+#    #+#             */
/*   Updated: 2025/06/28 21:39:47 by nidruon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include <unistd.h>

// Default buffer size for get_next_line
# define BUFFER_SIZE 42

/* -------------------------- ANSI MARKDOWN -------------------------- */
# define RESET "\033[0m"
// regular colors
# define BLACK "\033[30m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define PURPLE "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"
// bold colors
# define BOLD_BLACK "\033[30;1m"
# define BOLD_RED "\033[31;1m"
# define BOLD_GREEN "\033[32;1m"
# define BOLD_YELLOW "\033[33;1m"
# define BOLD_BLUE "\033[34;1m"
# define BOLD_PURPLE "\033[35;1m"
# define BOLD_CYAN "\033[36;1m"
# define BOLD_WHITE "\033[37;1m"
// underline colors
# define UNDERLINE_BLACK "\033[30;4m"
# define UNDERLINE_RED "\033[31;4m"
# define UNDERLINE_GREEN "\033[32;4m"
# define UNDERLINE_YELLOW "\033[33;4m"
# define UNDERLINE_BLUE "\033[34;4m"
# define UNDERLINE_PURPLE "\033[35;4m"
# define UNDERLINE_CYAN "\033[36;4m"
# define UNDERLINE_WHITE "\033[37;4m"
// background colors
# define BACKGROUND_BLACK "\033[40m"
# define BACKGROUND_RED "\033[41m"
# define BACKGROUND_GREEN "\033[42m"
# define BACKGROUND_YELLOW "\033[43m"
# define BACKGROUND_BLUE "\033[44m"
# define BACKGROUND_PURPLE "\033[45m"
# define BACKGROUND_CYAN "\033[46m"
# define BACKGROUND_WHITE "\033[47m"
// High Intensity colors
# define HIGH_INTENSITY_BLACK "\033[90m"
# define HIGH_INTENSITY_RED "\033[91m"
# define HIGH_INTENSITY_GREEN "\033[92m"
# define HIGH_INTENSITY_YELLOW "\033[93m"
# define HIGH_INTENSITY_BLUE "\033[94m"
# define HIGH_INTENSITY_PURPLE "\033[95m"
# define HIGH_INTENSITY_CYAN "\033[96m"
# define HIGH_INTENSITY_WHITE "\033[97m"
// Bold High Intensity colors
# define BOLD_HIGH_INTENSITY_BLACK "\033[90;1m"
# define BOLD_HIGH_INTENSITY_RED "\033[91;1m"
# define BOLD_HIGH_INTENSITY_GREEN "\033[92;1m"
# define BOLD_HIGH_INTENSITY_YELLOW "\033[93;1m"
# define BOLD_HIGH_INTENSITY_BLUE "\033[94;1m"
# define BOLD_HIGH_INTENSITY_PURPLE "\033[95;1m"
# define BOLD_HIGH_INTENSITY_CYAN "\033[96;1m"
# define BOLD_HIGH_INTENSITY_WHITE "\033[97;1m"
// Underline High Intensity colors
# define UNDERLINE_HIGH_INTENSITY_BLACK "\033[90;4m"
# define UNDERLINE_HIGH_INTENSITY_RED "\033[91;4m"
# define UNDERLINE_HIGH_INTENSITY_GREEN "\033[92;4m"
# define UNDERLINE_HIGH_INTENSITY_YELLOW "\033[93;4m"
# define UNDERLINE_HIGH_INTENSITY_BLUE "\033[94;4m"
# define UNDERLINE_HIGH_INTENSITY_PURPLE "\033[95;4m"
# define UNDERLINE_HIGH_INTENSITY_CYAN "\033[96;4m"
# define UNDERLINE_HIGH_INTENSITY_WHITE "\033[97;4m"
// Background High Intensity colors
# define BACKGROUND_HIGH_INTENSITY_BLACK "\033[90;40m"
# define BACKGROUND_HIGH_INTENSITY_RED "\033[91;41m"
# define BACKGROUND_HIGH_INTENSITY_GREEN "\033[92;42m"
# define BACKGROUND_HIGH_INTENSITY_YELLOW "\033[93;43m"
# define BACKGROUND_HIGH_INTENSITY_BLUE "\033[94;44m"
# define BACKGROUND_HIGH_INTENSITY_PURPLE "\033[95;45m"
# define BACKGROUND_HIGH_INTENSITY_CYAN "\033[96;46m"
# define BACKGROUND_HIGH_INTENSITY_WHITE "\033[97;47m"
/* -------------------------- BASE FUNCTIONS -------------------------- */
void	ft_putchar(char c);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *str);
int		ft_atoi(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strdup(char *src);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_calloc(size_t count, size_t size);
int		ft_isprint(int c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	ft_putnbr_base_fd(unsigned long nb, char *base, int fd);
/* -------------------------- GET_NEXT_LINE --------------------------- */
char	*get_next_line(int fd);
/* --------------------------- FT_PRINTF ------------------------------ */
int		ft_print_char(va_list *args);
int		ft_print_hex(va_list *args, char format);
int		ft_print_int(va_list *args);
int		ft_print_hex_ptr(unsigned long num);
int		ft_print_ptr(va_list *args);
int		ft_print_str(va_list *args);
int		ft_print_unsigned(va_list *args);
int		ft_print_arg(char c, va_list *args);
int		ft_printf(const char *format, ...);

#endif
