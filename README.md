# Desafio 1 Informatica

Esta es una actividad desarrollada por:
1. Claudia Nataly Orozco Ocampo
2. Elmer David Mosquera Martinez

## Palabras clave

Para el desarrollo de esta actividad se partió desde las bases más fundamentales de la computación: un bit, y a partir de ahí se despliegan las siguientes palabras clave.

## 1. ¿Qué es un bit?

Es la unidad mínima de información en computación y telecomunicaciones. Solo puede tener uno de dos valores: 0 o 1.

Partiendo desde esta premisa se solicitan operaciones a nivel de bits. Esto implica que el programa debe trabajar internamente con la unidad más pequeña de información en computación.

## 2. ¿Qué es un byte?

Es una unidad de información digital que equivale a un conjunto de 8 bits.

**Dato curioso:** La palabra byte viene de "bite" (mordisco en inglés), haciendo referencia a un "trozo" de datos que la computadora puede morder.

---

**Acerca de esta actividad:** El juego Tetris debe ser desarrollado en C++.

Con esta consideración: el significado de bit o byte, ¿adquiere otro significado?

**Respuesta:** En esencia no, el bit sigue siendo la unidad más pequeña, y el byte es un conjunto de 8 bits. Sin embargo, hay que tener presente que el lenguaje C++ hace uso de estas unidades. La cuestión es: ¿de qué manera?

## ¿Cómo creo una variable tipo bit en C++?

**NO SE PUEDE.** Resulta que en C++ la unidad más pequeña es el byte. ¿Entonces cómo interactúo con ellos?

## Más detalles en la presentación

## ¿Qué son las operaciones a nivel de bits?

Son la base del álgebra de Boole. En C++, se utilizan los operadores bitwise para manipular los bits directamente sobre los tipos enteros (`int`, `char`, `long`).

---

Antes de continuar, es necesario hacer énfasis en que en C++ el tipo de dato `char` es un tipo numérico. Aunque solemos usarlo para almacenar letras o símbolos, internamente la computadora no guarda "letras", sino el valor numérico que representa a ese carácter.

> `char` tiene 8 bits y representa la unidad más pequeña en C++.

**Acerca de esta actividad:** Sí puedo acceder y modificar los bits en un `char`. ¿Cómo declarar un `char`, de manera que yo pueda determinar desde el principio el valor de cada bit?

```cpp
unsigned char byte = 0b00000000;
```

Esta notación se llama **literales binarios** y se introdujo formalmente en el estándar C++14.

**Sintaxis:**
- `0b`: Es el prefijo que le indica al compilador "lo que sigue es un número binario".
- `00000000`: Son los dígitos binarios (bits).

## ¿Cómo puedo modificar los bits en un char?

Aquí es donde entran las operaciones a nivel de bits y las máscaras.

Usando lo que ya mencionamos acerca de crear un byte personalizado, mejor conocido como **máscara**, y operamos con `&`, `|`, `^` o `~`, operando según sobre una máscara base.

**Ejemplo:**

```c++
    unsigned char mascaraBase = 0b00000000;      // Esta es la máscara base
    unsigned char mascaraModificadora = 0b00100000; // Esta es la máscara modificadora

    Al operar:
    mascaraBase = (mascaraBase | mascaraModificadora);
```

Obtenemos que `mascaraBase` pasó de ser `0b00000000` a `0b00100000`.

## ¿Como puedo almacenar mas de 8bits?

Hasta este momento hemos usado mascaras de **8bits** (**1byte**), mendiante char, bajo la misma premisa de poder derfinir cada bits en el conjunto, contamos con las siguientes alternativas:

1. **8 bits:** unsigned char 
2. **16 bits:** unsigned short 
3. **32 bits:** unsigned int (en la mayoría de arquitecturas modernas)
4. **64 bits:** unsigned long long (garantizado de al menos 64 bits)

## Uso de typedef

Llegamos a un punto de interes para nosotros, porque encontramos que podemos empaquetar **64bis** sin librerias, pero es de imaginarse un codigo lleno de **unsigned long long**, y gracias a un libro llamado **Como programo en C++ de los autores P.J. DEITEL y H.M DEITEL** dimos con la posibilidad de darle un apodo a esa **asignacion de memoria**.

````c++
    typedef unsigned long long paquete64;
````

## ¿Como cambia la modificacion de bits en paquetes de bits mas grandes?.

Como vimos en el ejemplo anterior podemos modificar los bits de una mascara con una mascara modificadora y no es casualidad de que la mascara tenga tambien la misma cantidad de bist. Por lo que en escencia es lo mismo; ejemplo acontinuacion con `paquete`

````c++
    typedef unsigned long long paquete64;

    paquete64* paqueteBase = 0b00000000'00000000'00000000'00000000'00000000'00000000'00000000'00000000;
    paquete64* paqueteModificador = 0b00000000'00000000'00000000'00000000'00000000'00001000'00000000'00000000;


    Al operar:
    paqueteBase = (paqueteBase | paqueteModificador);
````

Obtenemos que `paqueteBase` pasó de ser `0b00000000'00000000'00000000'00000000'00000000'00000000'00000000'00000000;` a `0b00000000'00000000'00000000'00000000'00000000'00001000'00000000'00000000`.

## ¿Hay alguna forma de evitar escribir toda la mascara modificadora?

Pasamos a investigar, de por si no cuesta mucho **escribir 64 bits para la mascara modificadora** pero hacerlo inicializar para inicializar todo en 0, **¿No es lo mismo poner 0b0 que 0b0000000000?**.