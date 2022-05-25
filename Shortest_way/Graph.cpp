#include <iostream>
#include <vector>
#define inf 100000 // Значение бесконечности
namespace // Для отделения локальных переменных
{
struct Edges 
{
    int u,  // Откуда
        v,  // Куда
        w;  // Расстояние
};

const int Vmax = 1000;
const int Emax = 499;
int i, j, n, e, start;
Edges edge[Emax];
int d[Vmax];

std::vector<int> bellman_ford(int n, int s) 
{
    using namespace std;
    int i, j;
    vector<int> rt(n); // Возвращаемое значение

    // Изначально всё бесконечно.
    for (i = 0; i < n; ++i)
        d[i] = inf;

    // Расстояние к себе приравниваем к нулю
    d[s] = 0; 

    // Ищем кратчайшие расстояния
    for (i = 0; i < n - 1; ++i)
        for (j = 0; j < e; ++j)
            if (d[edge[j].v] + edge[j].w < d[edge[j].u])
                d[edge[j].u] = d[edge[j].v] + edge[j].w;

    // Заполняем выходной вектор
    // -1 значит, что пути нет
    for (i = 0; i < n; ++i)
        if (d[i] == inf)
            rt[i] = -1;
        else
            rt[i] = d[i];
    return rt;
}

// Это функция ввода. Просто надо использовать её.
std::vector<int> Enter(std::vector<std::vector<int>> matrix, size_t n, size_t start)
{
    // matrix -- матрица
    // n -- количество вершин
    // start -- стартовая позиция

    e = 0; // Счётчик рёбер

    // Заполняем таблицу рёбер
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            if (matrix[i][j] != 0)
            {
                edge[e].v = i;
                edge[e].u = j;
                edge[e].w = matrix[i][j];
                ++e;
            }
        }
    }

    // Было start - 1, но я убрал -1, дабы счёт начинался с 0, а не 1. Если будет ошибка -- вернуть.
    std::vector<int> rt = bellman_ford(n, start);
    for (int i = 0; i < n; ++i)
        std::cout << rt[i] << "\n";
    return rt;
}
}
