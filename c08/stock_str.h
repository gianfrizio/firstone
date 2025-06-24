#ifndef FT_STOCK_STR_H
#define FT_STOCK_STR_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct s_stock_str {
    int size;
    char *str;
    char *copy;
} t_stock_str;

t_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(t_stock_str *par);

#ifdef __cplusplus
}
#endif

#endif // FT_STOCK_STR_H
