*Este proyecto ha sido creado como parte del currículo de 42 por ilopez-g.*

# Libft - Tu primera librería

## Descripción
Programar en C puede ser tedioso cuando no se tiene acceso a las funciones estándar más utilizadas. Este proyecto tiene como objetivo ayudarte a comprender cómo actuán estas funciones, implementarlas por tu cuenta y aprender a utilizarlas de forma eficaz. Desarrollarás una librería propia que te será muy útil en los próximos proyectos de C. Asegúrate de ir enriqueciendo tu libft a lo largo del cursus. Sin embargo, cuando la utilices, asegúrate de que todas las funciones empleadas por tu librería respetan las permitidas por cada proyecto.

## Instrucciones

### Compilación
El proyecto incluye un `Makefile` que compila los archivos fuente con los flags `-Wall`, `-Werror` y `-Wextra`, tambien utiliza el comando `ar` para generar la librería `libft.a` en la raíz del repositorio.

Las reglas principales son:
* `make`: Compila la librería completa.
* `make clean`: Elimina los archivos objeto.
* `make fclean`: Elimina los archivos objeto y la librería `libft.a`.
* `make re`: Usa las funciones de limpieza y recompila el proyecto desde cero.

### Requisitos Técnicos
* El código respeta íntegramente la **Norma** de 42.
* No se han utilizado **variables globales**.
* Las funciones auxiliares están definidas como `static` para restringir su alcance al archivo correspondiente.
* Se garantiza la correcta liberación de memoria en el heap para evitar leaks.
* Las funciones no deben terminar de forma inesperada (segfault, bus error, double free, etc), excepto en el caso de comportamientos indefinidos.

## Recursos
* **Documentación:** Se han utilizado las páginas del manual del sistema (`man`) para replicar el comportamiento y los prototipos de las funciones de la `libc`.
* **Uso de IA:** Se ha utilizado IA únicamente para estructurar el formato de este README según los requisitos del subject. En todo momento la IA ha actuado bajo un prompt personalizado donde tiene prohibido ofrecer soluciones directas, garantizando así mi aprendizaje y la autoría de este proyecto.
* **Libft anterior:** Como ya habia cursado en 42, ya tenia las soluciones de la version de Libft de hace 3 años, estas se ha consultado y se han mejorado y optimizado como muestra de una mejoria, en algunos casos se han adaptado para usar recursividad por diversion.

## Detalle de la librería

La librería implementa todas las funciones requeridas en el manual divididas en tres secciones:

1. **Parte 1 - Funciones de libc:** Rediseño de funciones estándar como `ft_strlen`, `ft_memset`, `ft_strchr`, `ft_atoi`, `ft_calloc` y `ft_strdup`, entre otras.
2. **Parte 2 - Funciones adicionales:** Funciones que no pertenecen a la libc o están implementadas de forma distinta, incluyendo manipulación de cadenas (`ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`) y escritura en descriptores de archivo (`ft_putchar_fd`, `ft_putstr_fd`, etc.).
3. **Part 3 - Listas enlazadas:** Implementación de funciones para gestionar una estructura de lista enlazada `t_list`, permitiendo la creación, eliminación, recuento y aplicación de funciones sobre nodos (`ft_lstnew`, `ft_lstadd_back`, `ft_lstclear`, etc.).
