# Analog Read
[![sensors-bb.png](https://i.postimg.cc/hPd9BdPJ/sensors-bb.png)](https://postimg.cc/7fqC1bzD)

Lectura de entradas analógicas usando la función ```analogRead()```

## Hardware y software necesarios
- Placa de desarrollo Arduino.
- 2 LED.
- 2 resistencias de $\displaystyle 200\Omega$ a 1 $\displaystyle K\Omega$.
- 2 resistencias de 1 $\displaystyle K\Omega$.
- 1 pulsadores push button.
- 1 LDR.
- 2 potenciómetros.
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/).


## Funcionamiento
### AnalogRead
#### Variables
- ```Sensor```: pin analógico a leer.
- ```Trash```: Promedio de lecturas para eliminar ruido.
- ```Reads```: Cantidad de lecturas a realizar.
- ```Input```: Variable donde se guarda el valor leído.
- ```Cache```: Valor de la lectura anterior.
- ```History```: Historial de lecturas en un vector.

#### Funcionamiento
Dentro de una función **iRead** se realiza la lectura de la entrada analógica y se guarda en la variable ```Trash```. La variable ```Cache``` se utiliza para guardar el valor de la lectura anterior. La función **iRead** se ejecuta cada vez que se requiere leer una entrada analógica y se guarda el valor en la variable ```Input```.

En la ultima posición del vector ```History``` se guarda el valor de la lectura actual y se imprime en pantalla si el valor es diferente al valor de la lectura anterior.

[![aread-esquem-tico.png](https://i.postimg.cc/t433b81h/aread-esquem-tico.png)](https://postimg.cc/K1YkrqDz)

### Sensors
#### Variables
- ```LDR```: pin analógico de la entrada analógica 1.
- ```PTN```: pin analógico del potenciómetro 1.
- ```OUT```: pin analógico del potenciómetro 2.
- ```SWITCH```: pin del botón.
- ```LED```: pin del LED.
- ```state```: variable que indica el estado del botón.
- ```Auto```: variable que indica el estado del LED.
#### Funcionamiento
la variable ```state``` se utiliza para indicar el estado del botón.
Si se presiona el botón, la variable ```Auto``` cambia de estado.

Si Auto es falso, el LED se encenderá. De lo contrario, el LED se aencenderá segun el valor de **PTN** si **LDR** es mayor a 513.

```OUT``` es usado para controlar la posición de un servomotor.

[![sensors-esquem-tico.png](https://i.postimg.cc/Z5Pp9zN4/sensors-esquem-tico.png)](https://postimg.cc/yDdk55nb)
