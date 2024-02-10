# parallelism-theory

## Запуск с FLOAT

```bash
cmake -DUSE_FLOAT=ON . && cmake --build ./ && ./code
```

## Запуск с DOUBLE

```bash
cmake -DUSE_FLOAT=OFF . && cmake --build ./ && ./code
```

## Вывод

### FLOAT
```bash
Summed: -0.0277862
```

### DOUBLE
```bash
Summed: 4.89582e-11
```
