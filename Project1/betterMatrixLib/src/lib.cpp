#include <lib.h>
#include <cstdlib>
#include <time.h>

long **matrixAdd(long **matrixA, long **matrixB, std::pair<int, int> matrixSizeA)
{
    long **matrixSum = allocateLongMatrix(matrixSizeA.first, matrixSizeA.second);
    for (int i = 0; i < matrixSizeA.first; i++)
    {
        for (int j = 0; j < matrixSizeA.second; j++)
        {
            matrixSum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return matrixSum;
}

float **matrixAdd(float **matrixA, float **matrixB, std::pair<int, int> matrixSizeA)
{
    float **matrixSum = allocateFloatMatrix(matrixSizeA.first, matrixSizeA.second);
    for (int i = 0; i < matrixSizeA.first; i++)
    {
        for (int j = 0; j < matrixSizeA.second; j++)
        {
            matrixSum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return matrixSum;
}

long **matrixSubtract(long **matrixA, long **matrixB, std::pair<int, int> matrixSizeA)
{
    long **matrixSubt = allocateLongMatrix(matrixSizeA.first, matrixSizeA.second);
    for (int i = 0; i < matrixSizeA.first; i++)
    {
        for (int j = 0; j < matrixSizeA.second; j++)
        {
            matrixSubt[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return matrixSubt;
}

float **matrixSubtract(float **matrixA, float **matrixB, std::pair<int, int> matrixSizeA)
{
    float **matrixSubt = allocateFloatMatrix(matrixSizeA.first, matrixSizeA.second);
    for (int i = 0; i < matrixSizeA.first; i++)
    {
        for (int j = 0; j < matrixSizeA.second; j++)
        {
            matrixSubt[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return matrixSubt;
}

long **matrixMultiply(long **matrixA, long **matrixB, std::pair<int, int> matrixSizeA, std::pair<int, int> matrixSizeB)
{
    long **matrixMult = allocateLongMatrix(matrixSizeA.first, matrixSizeB.second);
    for (int i = 0; i < matrixSizeA.first; i++)
    {
        for (int j = 0; j < matrixSizeB.second; j++)
        {
            matrixMult[i][j] = 0;
            for (int k = 0; k < matrixSizeA.second; k++)
            {
                matrixMult[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    return matrixMult;
}

float **matrixMultiply(float **matrixA, float **matrixB, std::pair<int, int> matrixSizeA, std::pair<int, int> matrixSizeB)
{
    float **matrixMult = allocateFloatMatrix(matrixSizeA.first, matrixSizeB.second);
    for (int i = 0; i < matrixSizeA.first; i++)
    {
        for (int j = 0; j < matrixSizeB.second; j++)
        {
            matrixMult[i][j] = 0;
            for (int k = 0; k < matrixSizeA.second; k++)
            {
                matrixMult[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    return matrixMult;
}

long **matrixMultiplyByScalar(long **matrix, std::pair<int, int> matrixSizeA, long scalar)
{
    long **matrixMultByScal = allocateLongMatrix(matrixSizeA.first, matrixSizeA.second);
    for (int i = 0; i < matrixSizeA.first; ++i)
    {
        for (int j = 0; j < matrixSizeA.second; ++j)
        {
            matrixMultByScal[i][j] = matrix[i][j] * scalar;
        }
    }
    return matrixMultByScal;
}

float **matrixMultiplyByScalar(float **matrix, std::pair<int, int> matrixSizeA, float scalar)
{
    float **matrixMultByScal = allocateFloatMatrix(matrixSizeA.first, matrixSizeA.second);
    for (int i = 0; i < matrixSizeA.first; ++i)
    {
        for (int j = 0; j < matrixSizeA.second; ++j)
        {
            matrixMultByScal[i][j] = matrix[i][j] * scalar;
        }
    }
    return matrixMultByScal;
}

long **matrixTranspoze(long **matrix, std::pair<int, int> matrixSizeA)
{
    long **matrixTransp = allocateLongMatrix(matrixSizeA.first, matrixSizeA.second);
    for (int i = 0; i < matrixSizeA.second; ++i)
    {
        for (int j = 0; j < matrixSizeA.first; ++j)
        {
            matrixTransp[j][i] = matrix[i][j];
        }
    }
    return matrixTransp;
}

float **matrixTranspoze(float **matrix, std::pair<int, int> matrixSizeA)
{
    float **matrixTransp = allocateFloatMatrix(matrixSizeA.first, matrixSizeA.second);
    for (int i = 0; i < matrixSizeA.second; ++i)
    {
        for (int j = 0; j < matrixSizeA.first; ++j)
        {
            matrixTransp[j][i] = matrix[i][j];
        }
    }
    return matrixTransp;
}

long **matrixPower(long **matrix, std::pair<int, int> matrixSizeA, unsigned short power)
{
    long **matrixPowered = allocateLongMatrix(matrixSizeA.first, matrixSizeA.second);
    long **tmp;
    copyMatrix(matrixPowered, matrix, matrixSizeA.first, matrixSizeA.second);
    while (power - 1)
    {
        tmp = matrixMultiply(matrixPowered, matrix, matrixSizeA, matrixSizeA);
        copyMatrix(matrixPowered, tmp, matrixSizeA.first, matrixSizeA.second);
        deleteMatrix(tmp, matrixSizeA.first);
        power--;
    }
    return matrixPowered;
}

float **matrixPower(float **matrix, std::pair<int, int> matrixSizeA, unsigned short power)
{
    float **matrixPowered = allocateFloatMatrix(matrixSizeA.first, matrixSizeA.second);
    float **tmp;
    copyMatrix(matrixPowered, matrix, matrixSizeA.first, matrixSizeA.second);
    while (power - 1)
    {
        tmp = matrixMultiply(matrixPowered, matrix, matrixSizeA, matrixSizeA);
        copyMatrix(matrixPowered, tmp, matrixSizeA.first, matrixSizeA.second);
        deleteMatrix(tmp, matrixSizeA.first);
        power--;
    }
    return matrixPowered;
}

long matrixDeterminant(long **matrix, std::pair<int, int> matrixSizeA)
{
    int sign = 1, m;

    for (int k = 0; k < matrixSizeA.first - 1; k++)
    {
        //dla matrix[k][k] == 0 zamieniamy wiersze i zmieniamy znak na przeciwny
        if (matrix[k][k] == 0)
        {
            m = 0;
            for (m = k + 1; m < matrixSizeA.first; m++)
            {
                if (matrix[m][k] != 0)
                {
                    for (int j = k; j < matrixSizeA.first; j++)
                        mySwap::swap(matrix[m][j], matrix[k][j]);
                    sign = -sign;
                    break;
                }
            }
            //w przypadku braku niezerowego wyrazu wyznacznik = 0
            if (m == matrixSizeA.first)
            {
                return 0;
            }
        }
        for (int i = k + 1; i < matrixSizeA.first; i++)
        {
            for (int j = k + 1; j < matrixSizeA.first; j++)
            {
                matrix[i][j] = matrix[k][k] * matrix[i][j] - matrix[i][k] * matrix[k][j];
                if (k != 0)
                {
                    matrix[i][j] /= matrix[k - 1][k - 1];
                }
            }
        }
    }

    return sign * matrix[matrixSizeA.first - 1][matrixSizeA.first - 1];
}

float matrixDeterminant(float **matrix, std::pair<int, int> matrixSizeA)
{
    int sign = 1;

    for (int k = 0; k < matrixSizeA.first - 1; k++)
    {
        //dla matrix[k][k] == 0 zamieniamy wiersze i zmieniamy znak na przeciwny
        if (matrix[k][k] == 0)
        {
            int m = 0;
            for (m = k + 1; m < matrixSizeA.first; m++)
            {
                if (matrix[m][k] != 0)
                {
                    for (int j = k; j < matrixSizeA.first; j++)
                        mySwap::swap(matrix[m][j], matrix[k][j]);
                    sign = -sign;
                    break;
                }
            }
            //w przypadku braku niezerowego wyrazu wyznacznik = 0
            if (m == matrixSizeA.first)
            {
                return 0;
            }
        }
        for (int i = k + 1; i < matrixSizeA.first; i++)
        {
            for (int j = k + 1; j < matrixSizeA.first; j++)
            {
                matrix[i][j] = matrix[k][k] * matrix[i][j] - matrix[i][k] * matrix[k][j];
                if (k != 0)
                {
                    matrix[i][j] /= matrix[k - 1][k - 1];
                }
            }
        }
    }
    return sign * matrix[matrixSizeA.first - 1][matrixSizeA.first - 1];
}

bool matrixIsDiagonal(long **matrix, std::pair<int, int> matrixSizeA)
{
    bool isDiagonal = true;
    for (int i = 0; i < matrixSizeA.first; ++i)
    {
        for (int j = 0; j < matrixSizeA.second; ++j)
        {
            if (i == j)
            {
                if (matrix[i][j] == 0)
                    isDiagonal = false;
            }
            else
            {
                if (matrix[i][j] != 0)
                    isDiagonal = false;
            }
        }
    }
    return isDiagonal;
}

bool matrixIsDiagonal(float **matrix, std::pair<int, int> matrixSizeA)
{
    bool isDiagonal = true;
    for (int i = 0; i < matrixSizeA.first; ++i)
    {
        for (int j = 0; j < matrixSizeA.second; ++j)
        {
            if (i == j)
            {
                if (matrix[i][j] == 0)
                    isDiagonal = false;
            }
            else
            {
                if (matrix[i][j] != 0)
                    isDiagonal = false;
            }
        }
    }
    return isDiagonal;
}
// blad dla std::swap
namespace mySwap
{

    void swap(int &a, int &b)
    {
        long temp = a;
        a = b;
        b = temp;
    }

    void swap(long &a, long &b)
    {
        long temp = a;
        a = b;
        b = temp;
    }

    void swap(float &a, float &b)
    {
        float temp = a;
        a = b;
        b = temp;
    }
}

void sortRow(long *row, int columns)
{
    for (int j = 0; j < columns - 1; j++)
        for (int i = 0; i < columns - 1; i++)
            if (row[i] > row[i + 1])
                mySwap::swap(row[i], row[i + 1]);
}

void sortRow(float *row, int columns)
{
    for (int j = 0; j < columns - 1; j++)
        for (int i = 0; i < columns - 1; i++)
            if (row[i] > row[i + 1])
                mySwap::swap(row[i], row[i + 1]);
}

void matrixSortRows(long **matrix, std::pair<int, int> matrixSizeA)
{
    for (int i = 0; i < matrixSizeA.first; ++i)
    {
        sortRow(matrix[i], matrixSizeA.second);
    }
}

void matrixSortRows(float **matrix, std::pair<int, int> matrixSizeA)
{
    for (int i = 0; i < matrixSizeA.first; ++i)
    {
        sortRow(matrix[i], matrixSizeA.second);
    }
}

long **matrixGenerate(std::pair<int, int> matrixSizeA, int min, int max)
{
    long **matrix = allocateLongMatrix(matrixSizeA.first, matrixSizeA.second);

    for(int i = 0; i < matrixSizeA.first; ++i)
    {
        for(int j = 0; j < matrixSizeA.second; ++j)
        {
            matrix[i][j] = rand()%(max+1-min)+min;
        }
    }
    return matrix;
}

float **matrixGenerate(std::pair<int, int> matrixSizeA, float min, float max)
{
    float **matrix = allocateFloatMatrix(matrixSizeA.first, matrixSizeA.second);

    for(int i = 0; i < matrixSizeA.first; ++i)
    {
        for(int j = 0; j < matrixSizeA.second; ++j)
        {
            matrix[i][j] = (float)(rand()%(int(max)+1-(int)min)+(int)min);
        }
    }
    return matrix;
}

long **allocateLongMatrix(int rows, int columns)
{
    long **matrix = new long *[rows];
    for (int i = 0; i < rows; i++)
        matrix[i] = new long[columns];
    return matrix;
}

float **allocateFloatMatrix(int rows, int columns)
{
    float **matrix = new float *[rows];
    for (int i = 0; i < rows; i++)
        matrix[i] = new float[columns];
    return matrix;
}

void copyMatrix(long **matrixA, long **matrixB, int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            matrixA[i][j] = matrixB[i][j];
        }
    }
}

void copyMatrix(float **matrixA, float **matrixB, int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            matrixA[i][j] = matrixB[i][j];
        }
    }
}

void deleteMatrix(long **matrix, int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void deleteMatrix(float **matrix, int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}
