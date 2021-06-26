# TP2_Algoritmos_y_programacion
Este es un trabajo practico de una materia de la UBA

Diccionario:

Este: me refiero a "Ente" como a todos los objetos que hay en el juego: zombis, vampiros, humanos, agua, escopeta, etc

LOGICA:
La logica que se uso para este pryecto fue la siguiente:

1) Para almacenar la informacion de todas las lineas del archivo se uso una clase llamada Objeto_generico que se encargaba de crear tantos objetos como Entes
aparezcan en el archivo, estos objetos_genericos tienen como atributos sus posiciones en x e y, su tipo, y cantidad(La cantidad es 1 para todos, excepto en el
caso del agua y las balas que puede ser distinta). Estos objetos genericos se guaurdan en un vector de punteros los cuales guardan la direccion de memoria de
cada uno de estos objetos.

2) Luego de gaurdar cada objeto se los lleva a la clase que se encarga de crearlos (mediante el vector "cola de carga") teniendo un metodo por clase, que llama
al creador de cada uno de estos.

3) En cada uno de los metodos de la clase Creador, ademas de llamar al constructor respectivo de cada clase, llama a metodos de otras clases que se encargan de
contar la cantidad de Entes, y la clase que crea el tablero, la cual tiene un metodo que agrega estos Entes al tablero


