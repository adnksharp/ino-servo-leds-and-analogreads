# Analog Read
[![sensors-bb.png](https://i.postimg.cc/hPd9BdPJ/sensors-bb.png)](https://postimg.cc/7fqC1bzD)
Lectura de entradas analógicas usando la función ```analogRead()```

## Analog Read
En una función ```iRead()``` se leen 13 entradas analógicas para que la función devuelva un valor promedio.

- El valor que devuelve la función se guarda en una variable global llamada **Input** y se compara con el valor anterior (**Cache**). 
- Si los valores son diferentes, se ejecuta una función que guarda el valor en un vector (**History[]**)e imprime el valor en la consola.

        Entrada analógica: "Input"%


[![aread-esquem-tico.png](https://i.postimg.cc/t433b81h/aread-esquem-tico.png)](https://postimg.cc/K1YkrqDz)

## Sensors
Usando una LDR, un potencionmetro y un boton, controlamos la luminosidad de un LED:
- El boton cambia el valor de una variable ```bool``` para ignorar o no los valores del potenciometro y la LDR para mantener encendiendo el LED. 
- Si la LDR recibe un valor menor a 512, el LED se enciende con una luminosidad de 0% al 100% segun el valor del potenciometro.

Usando otro potenciometro definimos la salida de un servomotor usando la función ```map``` y la libreria ```Servo```

[![sensors-esquem-tico.png](https://i.postimg.cc/Z5Pp9zN4/sensors-esquem-tico.png)](https://postimg.cc/yDdk55nb)