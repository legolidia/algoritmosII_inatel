# Busca Binária #

```c++
int inicio, fim;

if (fim < inicio) 
    return -1;

int metade = (inicio + fim)/2;

if(vetor[metade] == buscado)
    return metade;

if(vetor[metade] < buscado) 
    inicio = metade + 1;
else 
    fim = metade - 1;
```