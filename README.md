# parallelism-theory

## Запуск с FLOAT

```bash
cmake -DUSE_FLOAT=ON . && cmake --build ./ && ./code
```

## Запуск с DOUBLE

```bash
cmake -DUSE_FLOAT=OFF . && cmake --build ./ && ./code
```