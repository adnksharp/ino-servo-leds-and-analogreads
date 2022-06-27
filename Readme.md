# Analog Read
[![aread-bb.png](https://i.postimg.cc/dVP2zJ0s/aread-bb.png)](https://postimg.cc/nC29mb7g)
Lectura de entradas analógicas usando la función ```analogRead()```

## Funcionnamiento
En una función ```iRead()``` se leen 13 entradas analógicas para que la función devuelva un valor promedio.

- El valor que devuelve la función se guarda en una variable global llamada **Input** y se compara con el valor anterior (**Cache**). 
- Si los valores son diferentes, se ejecuta una función que guarda el valor en un vector (**History[]**)e imprime el valor en la consola.

        Entrada analógica: "Input"%


[![aread-esquem-tico.png](https://i.postimg.cc/t433b81h/aread-esquem-tico.png)](https://postimg.cc/K1YkrqDz)