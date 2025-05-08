# 📚 Libft

A **Libft** é uma biblioteca personalizada em C desenvolvida como parte do currículo da [42 School](https://42sp.org.br/). Seu objetivo é recriar funções de bibliotecas do C e implementar outras funções utilitárias fundamentais, servindo como base para projetos futuros.

---

## ✅ Funcionalidades

### 🔠 Manipulação de caracteres e strings

- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- `ft_tolower`, `ft_toupper`, `ft_strlen`, `ft_atoi`, `ft_htoi`, `ft_itoa`
- `ft_strdup`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- `ft_strjoin`, `ft_strtrim`, `ft_substr`, `ft_split`
- `ft_strlcpy`, `ft_strlcat`
- `ft_striteri`, `ft_strmapi`

### 🧠 Manipulação de memória

- `ft_bzero`, `ft_calloc`
- `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`

### 🗃️ Utilitários diversos

- `ft_putstr_fd`, `ft_putchar_fd`, `ft_putendl_fd`, `ft_putnbr_fd`, `ft_putnum_base`
- `ft_get_next_line`, `ft_matrixfree`, `ft_countsplit`

### 🔗 Manipulação de listas encadeadas

```c
typedef struct s_list {
    void            *content;
    struct s_list   *next;
} t_list;
```

Funções:
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`
- `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

## 🧩 Estrutura do Projeto

- **`libft.h`**: Header com todas as declarações e definições
- **`libft.a`**: Biblioteca estática gerada após a compilação
- **`Makefile`**: Arquivo para automatizar a compilação com os seguintes targets:

```make
make            # Compila a biblioteca
make clean      # Remove arquivos .o
make fclean     # Remove arquivos .o e libft.a
make re         # Executa fclean e depois make
```

---

## ⚙️ Compilação

```bash
make
```

Isso irá gerar o arquivo `libft.a` que pode ser incluído em outros projetos:

```c
#include "libft.h"
```

E compilado com:

```bash
gcc main.c -L. -lft
```

---

## 🔎 Exemplo de Uso

```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello Libft!");
    ft_putendl_fd(str, 1);
    free(str);
    return 0;
}
```

---

## 🧪 Testes

- Teste cada função com entradas esperadas e casos extremos
- Utilize ferramentas como `valgrind` para checar vazamentos de memória

---

## 📜 Licença

Distribuído sob os termos do arquivo [`LICENSE`](./LICENSE).

---

> Projeto desenvolvido por **[ngomes-t@student.42sp.org.br](mailto:ngomes-t@student.42sp.org.br)** para a 42 São Paulo
