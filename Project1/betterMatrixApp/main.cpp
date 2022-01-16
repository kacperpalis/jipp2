#include <iostream>
#include <lib.h>
#include <time.h>
#include <cstdlib>

using namespace std;

#include <utility>

pair<int, int> matrixSizeA;
pair<int, int> matrixSizeB;

string matrixCalcInstruction[] = {"Kalkulator macierzy",
                                  "betterMatrixApp [nazwa dzialania]",
                                  "Dzialania: ",
                                  "matrixAdd - dodawanie dwoch macierzy",
                                  "matrixSubtract - odejmowanie dwoch macierzy",
                                  "matrixMultiply - mnozenie dwoch macierzy",
                                  "matrixMultiplyByScalar - mnozenie macierzy przez skalar",
                                  "matrixTranspoze - transponowanie macierzy",
                                  "matrixPower - potegowanie macierzy",
                                  "matrixDeterminant - obliczanie wyznacznika macierzy",
                                  "matrixIsDiagonal - sprawdzenie, czy macierz jest diagonalna",
                                  "matrixSortRows - sortowanie kazdego wiersza macierzy"};

void typeChoice(bool &isFloat);

void readMatrixSize(int &rows, int &columns);

void badInput();

void readMatrixElements(long **matrix, int rows, int columns);

void readMatrixElements(float **matrix, int rows, int columns);

void printResult(long **matrix, int rows, int columns);

void printResult(float **matrix, int rows, int columns);

void printResultOfGenerate(long **matrix, int rows, int columns);

void printResultOfGenerate(float **matrix, int rows, int columns);

void printHelp();

int main(int argc, char *argv[])
{
    string choice1;
    string choice2;

    int rowsA, columnsA, rowsB, columnsB;

    long longScalar, **longMatrixA, **longMatrixB, **longResultMatrix;

    float **floatMatrixA, **floatMatrixB, **floatResultMatrix, floatScalar;

    bool isFloat = false;
    unsigned short power;

    int min, max;

    if (argc == 2)
    {
        choice1 = argv[1];

        if (choice1 == "matrixAdd" || choice1 == "matrixSubtract" || choice1 == "matrixMultiply")
        {

            typeChoice(isFloat);
            cout << "Macierz A" << endl;
            readMatrixSize(matrixSizeA.first, matrixSizeA.second);
            cout << "Macierz B" << endl;
            readMatrixSize(matrixSizeB.first, matrixSizeB.second);

            if (!isFloat)
            {

                longMatrixA = allocateLongMatrix(matrixSizeA.first, matrixSizeA.second);
                longMatrixB = allocateLongMatrix(matrixSizeB.first, matrixSizeB.second);
                cout << "Macierz A" << endl;
                readMatrixElements(longMatrixA, matrixSizeA.first, matrixSizeA.second);
                cout << "Macierz B" << endl;
                readMatrixElements(longMatrixB, matrixSizeB.first, matrixSizeB.second);

                if (choice1 == "matrixAdd")
                    longResultMatrix = matrixAdd(longMatrixA, longMatrixB, matrixSizeA);
                else if (choice1 == "matrixSubtract")
                    longResultMatrix = matrixSubtract(longMatrixA, longMatrixB, matrixSizeA);
                else
                    longResultMatrix = matrixMultiply(longMatrixA, longMatrixB, matrixSizeA, matrixSizeB);
                printResult(longResultMatrix, matrixSizeA.first, matrixSizeB.second);
                deleteMatrix(longMatrixA, matrixSizeA.first);
                deleteMatrix(longMatrixB, matrixSizeB.first);
                deleteMatrix(longResultMatrix, matrixSizeA.first);
            }
            else
            {

                floatMatrixA = allocateFloatMatrix(matrixSizeA.first, matrixSizeA.second);
                floatMatrixB = allocateFloatMatrix(matrixSizeB.first, matrixSizeB.second);
                cout << "Macierz A" << endl;
                readMatrixElements(floatMatrixA, matrixSizeA.first, matrixSizeA.second);
                cout << "Macierz B" << endl;
                readMatrixElements(floatMatrixB, matrixSizeB.first, matrixSizeB.second);

                if (choice1 == "matrixAdd")
                    floatResultMatrix = matrixAdd(floatMatrixA, floatMatrixB, matrixSizeA);
                else if (choice1 == "matrixSubtract")
                    floatResultMatrix = matrixSubtract(floatMatrixA, floatMatrixB, matrixSizeA);
                else
                    floatResultMatrix = matrixMultiply(floatMatrixA, floatMatrixB, matrixSizeA, matrixSizeB);

                printResult(floatResultMatrix, matrixSizeA.first, matrixSizeA.second);
                deleteMatrix(floatMatrixA, matrixSizeA.first);
                deleteMatrix(floatMatrixB, matrixSizeB.first);
                deleteMatrix(floatResultMatrix, matrixSizeA.first);
            }
        }
        else if (choice1 == "matrixMultiplyByScalar" || choice1 == "matrixTranspoze" || choice1 == "matrixPower")
        {

            typeChoice(isFloat);
            readMatrixSize(matrixSizeA.first, matrixSizeA.second);

            if (!isFloat)
            {
                longMatrixA = allocateLongMatrix(matrixSizeA.first, matrixSizeA.second);
                readMatrixElements(longMatrixA, matrixSizeA.first, matrixSizeA.second);

                if (choice1 == "matrixMultiplyByScalar")
                {
                    cout << "Podaj wartosc skalara: " << endl;
                    if (!(cin >> longScalar))
                        badInput();
                    longResultMatrix = matrixMultiplyByScalar(longMatrixA, matrixSizeA, longScalar);
                }
                else if (choice1 == "matrixPower")
                {
                    cout << "Podaj wartosc potegi: " << endl;
                    if (!(cin >> power))
                        badInput();
                    longResultMatrix = matrixPower(longMatrixA, matrixSizeA, power);
                }
                else
                {
                    if (rowsA != columnsA)
                        mySwap::swap(matrixSizeA.first, matrixSizeA.second);
                    longResultMatrix = matrixTranspoze(longMatrixA, matrixSizeA);
                }

                printResult(longResultMatrix, matrixSizeA.first, matrixSizeA.second);
                deleteMatrix(longMatrixA, matrixSizeA.first);
                deleteMatrix(longResultMatrix, matrixSizeA.first);
            }
            else
            {

                floatMatrixA = allocateFloatMatrix(matrixSizeA.first, matrixSizeA.second);
                readMatrixElements(floatMatrixA, matrixSizeA.first, matrixSizeA.second);

                if (choice1 == "matrixMultiplyByScalar")
                {
                    cout << "Podaj wartosc skalara: " << endl;
                    if (!(cin >> floatScalar))
                        badInput();
                    floatResultMatrix = matrixMultiplyByScalar(floatMatrixA, matrixSizeA, floatScalar);
                }
                else if (choice1 == "matrixPower")
                {
                    cout << "Podaj wartosc potegi: " << endl;
                    if (!(cin >> power))
                        badInput();
                    floatResultMatrix = matrixPower(floatMatrixA, matrixSizeA, power);
                }
                else
                {
                    if (rowsA != columnsA)
                        mySwap::swap(matrixSizeA.first, matrixSizeA.second);
                    floatResultMatrix = matrixTranspoze(floatMatrixA, matrixSizeA);
                }

                printResult(floatResultMatrix, matrixSizeA.first, matrixSizeA.second);
                deleteMatrix(floatMatrixA, matrixSizeA.first);
                deleteMatrix(floatResultMatrix, matrixSizeA.first);
            }
        }
        else if (choice1 == "matrixDeterminant" || choice1 == "matrixIsDiagonal" || choice1 == "matrixSortRows")
        {

            typeChoice(isFloat);
            readMatrixSize(matrixSizeA.first, matrixSizeA.second);

            if (!isFloat)
            {
                longMatrixA = allocateLongMatrix(matrixSizeA.first, matrixSizeA.second);
                readMatrixElements(longMatrixA, matrixSizeA.first, matrixSizeA.second);
                if (choice1 == "matrixDeterminant")
                {
                    cout << "Wyznacznik macierzy wynosi: " << matrixDeterminant(longMatrixA, matrixSizeA) << endl;
                }
                else if (choice1 == "matrixIsDiagonal")
                {
                    if (matrixIsDiagonal(longMatrixA, matrixSizeA))
                        cout << "Macierz jest diagonalna" << endl;
                    else
                        cout << "Macierz nie jest diagonalna" << endl;
                }
                else
                {
                    matrixSortRows(longMatrixA, matrixSizeA);
                    cout << "Posortowana macierz: " << endl;
                    printResult(longMatrixA, matrixSizeA.first, matrixSizeA.second);
                }
                deleteMatrix(longMatrixA, matrixSizeA.first);
            }
            else
            {

                floatMatrixA = allocateFloatMatrix(matrixSizeA.first, matrixSizeA.second);
                readMatrixElements(floatMatrixA, matrixSizeA.first, matrixSizeA.second);

                if (choice1 == "matrixDeterminant")
                {
                    cout << "Wyznacznik macierzy wynosi: " << matrixDeterminant(floatMatrixA, matrixSizeA) << endl;
                }
                else if (choice1 == "matrixIsDiagonal")
                {
                    if (matrixIsDiagonal(floatMatrixA, matrixSizeA))
                        cout << "Macierz jest diagonalna" << endl;
                    else
                        cout << "Macierz nie jest diagonalna" << endl;
                }
                else
                {
                    matrixSortRows(floatMatrixA, matrixSizeA);
                    cout << "Posortowana macierz: " << endl;
                    printResult(floatMatrixA, matrixSizeA.first, matrixSizeA.second);
                }
                deleteMatrix(floatMatrixA, matrixSizeA.first);
            }
        }
        else if (choice1 == "help")
        {
            printHelp();
        }
        else
        {
            cout << "Niepoprawna nazwa dzialania" << endl;
            printHelp();
        }
    }


    else if (argc == 3)
    {
        choice1 = argv[1];
        choice2 = argv[2];

        if (choice2 == "generate")
        {
            srand(time(NULL));

            if (choice1 == "matrixAdd" || choice1 == "matrixSubtract" || choice1 == "matrixMultiply")
            {
                typeChoice(isFloat);
                cout << "Macierz A" << endl;
                readMatrixSize(matrixSizeA.first, matrixSizeA.second);
                cout << "Macierz B" << endl;
                readMatrixSize(matrixSizeB.first, matrixSizeB.second);

                cout << "Podaj minimalna wartosc losowania" << endl;
                cin >> min;
                cout << "Podaj maksymalna wartosc losowania" << endl;
                cin >> max;

                if (!isFloat)
                {

                    longMatrixA = matrixGenerate(matrixSizeA, min, max);
                    longMatrixB = matrixGenerate(matrixSizeA, min, max);
                    cout << "Wygenerowana macierz A" << endl;
                    printResultOfGenerate(longMatrixA, matrixSizeA.first, matrixSizeA.second);
                    cout << "Wygenerowana macierz B" << endl;
                    printResultOfGenerate(longMatrixA, matrixSizeB.first, matrixSizeB.second);

                    if (choice1 == "matrixAdd")
                        longResultMatrix = matrixAdd(longMatrixA, longMatrixB, matrixSizeA);
                    else if (choice1 == "matrixSubtract")
                        longResultMatrix = matrixSubtract(longMatrixA, longMatrixB, matrixSizeA);
                    else
                        longResultMatrix = matrixMultiply(longMatrixA, longMatrixB, matrixSizeA, matrixSizeB);
                    printResult(longResultMatrix, matrixSizeA.first, matrixSizeB.second);
                    deleteMatrix(longMatrixA, matrixSizeA.first);
                    deleteMatrix(longMatrixB, matrixSizeB.first);
                    deleteMatrix(longResultMatrix, matrixSizeA.first);
                }
                else
                {
                    floatMatrixA = matrixGenerate(matrixSizeA, (float)min, (float)max);
                    floatMatrixB = matrixGenerate(matrixSizeB, (float)min, (float)max);
                    cout << "Wygenerowana macierz A" << endl;
                    printResultOfGenerate(floatMatrixA, matrixSizeA.first, matrixSizeA.second);
                    cout << "Wygenerowana macierz B" << endl;
                    printResultOfGenerate(floatMatrixB, matrixSizeB.first, matrixSizeB.second);

                    if (choice1 == "matrixAdd")
                        floatResultMatrix = matrixAdd(floatMatrixA, floatMatrixB, matrixSizeA);
                    else if (choice1 == "matrixSubtract")
                        floatResultMatrix = matrixSubtract(floatMatrixA, floatMatrixB, matrixSizeA);
                    else
                        floatResultMatrix = matrixMultiply(floatMatrixA, floatMatrixB, matrixSizeA, matrixSizeB);

                    printResult(floatResultMatrix, matrixSizeA.first, matrixSizeA.second);
                    deleteMatrix(floatMatrixA, matrixSizeA.first);
                    deleteMatrix(floatMatrixB, matrixSizeB.first);
                    deleteMatrix(floatResultMatrix, matrixSizeA.first);
                }
            }
            else if (choice1 == "matrixMultiplyByScalar" || choice1 == "matrixTranspoze" || choice1 == "matrixPower")
            {

                typeChoice(isFloat);

                cout << "Macierz A" << endl;
                readMatrixSize(matrixSizeA.first, matrixSizeA.second);
                cout << "Macierz B" << endl;
                readMatrixSize(matrixSizeB.first, matrixSizeB.second);

                cout << "Podaj minimalna wartosc losowania" << endl;
                cin >> min;
                cout << "Podaj maksymalna wartosc losowania" << endl;
                cin >> max;

                if (!isFloat)
                {
                    longMatrixA = matrixGenerate(matrixSizeA, min, max);
                    cout << "Wygenerowana macierz" << endl;
                    printResultOfGenerate(longMatrixA, matrixSizeA.first, matrixSizeA.second);

                    if (choice1 == "matrixMultiplyByScalar")
                    {
                        cout << endl << "Podaj wartosc skalara: " << endl;
                        if (!(cin >> longScalar))
                            badInput();
                        longResultMatrix = matrixMultiplyByScalar(longMatrixA, matrixSizeA, longScalar);
                    }
                    else if (choice1 == "matrixPower")
                    {
                        cout << endl << "Podaj wartosc potegi: " << endl;
                        if (!(cin >> power))
                            badInput();
                        longResultMatrix = matrixPower(longMatrixA, matrixSizeA, power);
                    }
                    else
                    {
                        if (rowsA != columnsA)
                            mySwap::swap(matrixSizeA.first, matrixSizeA.second);
                        longResultMatrix = matrixTranspoze(longMatrixA, matrixSizeA);
                    }

                    printResult(longResultMatrix, matrixSizeA.first, matrixSizeA.second);
                    deleteMatrix(longMatrixA, matrixSizeA.first);
                    deleteMatrix(longResultMatrix, matrixSizeA.first);
                }
                else
                {

                    floatMatrixA = matrixGenerate(matrixSizeA, (float)min, (float)max);
                    cout << "Wygenerowana macierz" << endl;
                    printResultOfGenerate(floatMatrixA, matrixSizeA.first, matrixSizeA.second);

                    if (choice1 == "matrixMultiplyByScalar")
                    {
                        cout << "Podaj wartosc skalara: " << endl;
                        if (!(cin >> floatScalar))
                            badInput();
                        floatResultMatrix = matrixMultiplyByScalar(floatMatrixA, matrixSizeA, floatScalar);
                    }
                    else if (choice1 == "matrixPower")
                    {
                        cout << "Podaj wartosc potegi: " << endl;
                        if (!(cin >> power))
                            badInput();
                        floatResultMatrix = matrixPower(floatMatrixA, matrixSizeA, power);
                    }
                    else
                    {
                        if (rowsA != columnsA)
                            mySwap::swap(matrixSizeA.first, matrixSizeA.second);
                        floatResultMatrix = matrixTranspoze(floatMatrixA, matrixSizeA);
                    }

                    printResult(floatResultMatrix, matrixSizeA.first, matrixSizeA.second);
                    deleteMatrix(floatMatrixA, matrixSizeA.first);
                    deleteMatrix(floatResultMatrix, matrixSizeA.first);
                }
            }
            else if (choice1 == "matrixDeterminant" || choice1 == "matrixIsDiagonal" || choice1 == "matrixSortRows")
            {

                typeChoice(isFloat);
                cout << "Macierz A" << endl;
                readMatrixSize(matrixSizeA.first, matrixSizeA.second);
                cout << "Macierz B" << endl;
                readMatrixSize(matrixSizeB.first, matrixSizeB.second);

                cout << "Podaj minimalna wartosc losowania" << endl;
                cin >> min;
                cout << "Podaj maksymalna wartosc losowania" << endl;
                cin >> max;

                if (!isFloat)
                {
                    longMatrixA = matrixGenerate(matrixSizeA, min, max);
                    cout << "Wygenerowana macierz" << endl;
                    printResultOfGenerate(longMatrixA, matrixSizeA.first, matrixSizeA.second);
                    if (choice1 == "matrixDeterminant")
                    {
                        cout << "Wyznacznik macierzy wynosi: " << matrixDeterminant(longMatrixA, matrixSizeA) << endl;
                    }
                    else if (choice1 == "matrixIsDiagonal")
                    {
                        if (matrixIsDiagonal(longMatrixA, matrixSizeA))
                            cout << "Macierz jest diagonalna" << endl;
                        else
                            cout << "Macierz nie jest diagonalna" << endl;
                    }
                    else
                    {
                        matrixSortRows(longMatrixA, matrixSizeA);
                        cout << "Posortowana macierz: " << endl;
                        printResult(longMatrixA, matrixSizeA.first, matrixSizeA.second);
                    }
                    deleteMatrix(longMatrixA, matrixSizeA.first);
                }
                else
                {

                    floatMatrixA = matrixGenerate(matrixSizeA, (float)min, (float)max);
                    cout << "Wygenerowana macierz" << endl;
                    printResultOfGenerate(floatMatrixA, matrixSizeA.first, matrixSizeA.second);

                    if (choice1 == "matrixDeterminant")
                    {
                        cout << "Wyznacznik macierzy wynosi: " << matrixDeterminant(floatMatrixA, matrixSizeA) << endl;
                    }
                    else if (choice1 == "matrixIsDiagonal")
                    {
                        if (matrixIsDiagonal(floatMatrixA, matrixSizeA))
                            cout << "Macierz jest diagonalna" << endl;
                        else
                            cout << "Macierz nie jest diagonalna" << endl;
                    }
                    else
                    {
                        matrixSortRows(floatMatrixA, matrixSizeA);
                        cout << "Posortowana macierz: " << endl;
                        printResult(floatMatrixA, matrixSizeA.first, matrixSizeA.second);
                    }
                    deleteMatrix(floatMatrixA, matrixSizeA.first);
                }
            }
        }
        else if (choice1 == "help")
        {
            printHelp();
        }
        else
        {
            cout << "Niepoprawna nazwa dzialania" << endl;
            printHelp();
        }
    }
    else
    {
        cout << "Nieprawidlowa liczba parametrow" << endl;
        printHelp();
        exit(1);
    }

    return 0;
}

/**
 * Wczytuje wybor typu elementow macierzy od uzytkownika
 * @param isFloat true - elementy float, false - elementy int
 */
void typeChoice(bool &isFloat)
{
    int choice;
    cout << "Wybierz opcje: " << endl;
    cout << "0 - elementy long " << endl;
    cout << "1 - elementy float " << endl;
    if (!(cin >> choice))
        badInput();
    if (choice == 1)
        isFloat = true;
    else if (choice == 0)
        return;
    else
        badInput();
}

/**
 * Wczytuje liczbe wierszy i kolumn od uzytkownika
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void readMatrixSize(int &rows, int &columns)
{
    cout << "Podaj liczbe wierszy macierzy:" << endl;
    if (!(cin >> rows))
        badInput();
    cout << "Podaj liczbe kolumn macierzy:" << endl;
    if (!(cin >> columns))
        badInput();
}

/**
 * Wyswietla komunikat bledu
 */
void badInput()
{
    cout << "Blad przy wczytywaniu wartosci" << endl;
    exit(2);
}

/**
 * Wczytuje elementy macierzy typu long
 * @param matrix macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void readMatrixElements(long **matrix, int rows, int columns)
{
    cout << "Podaj elementy macierzy wierszami (np. 1 2 3)" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            if (!(cin >> matrix[i][j]))
                badInput();
        }
    }
}

/**
 * Wczytuje elementy macierzy typu float
 * @param matrix macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void readMatrixElements(float **matrix, int rows, int columns)
{
    cout << "Podaj elementy macierzy wierszami (np. 1 2 3)" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            if (!(cin >> matrix[i][j]))
                badInput();
        }
    }
}

/**
 * Wyswietla macierz typu long
 * @param matrix macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void printResult(long **matrix, int rows, int columns)
{
    cout << endl << "Wynik:";
    for (int i = 0; i < rows; ++i)
    {
        cout << endl;
        for (int j = 0; j < columns; ++j)
        {
            cout << matrix[i][j] << "\t";
        }
    }
}

/**
 * Wyswietla macierz typu float
 * @param matrix macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void printResult(float **matrix, int rows, int columns)
{
    cout << endl << "Wynik:";
    for (int i = 0; i < rows; ++i)
    {
        cout << endl;
        for (int j = 0; j < columns; ++j)
        {
            cout << matrix[i][j] << "\t";
        }
    }
}

/**
 * Wyswietla macierz typu long
 * @param matrix macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void printResultOfGenerate(long **matrix, int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
    {
        cout << endl;
        for (int j = 0; j < columns; ++j)
        {
            cout << matrix[i][j] << "\t";
        }
    }
}

/**
 * Wyswietla macierz typu float
 * @param matrix macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void printResultOfGenerate(float **matrix, int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
    {
        cout << endl;
        for (int j = 0; j < columns; ++j)
        {
            cout << matrix[i][j] << "\t";
        }
    }
}

/**
 * Wyswietla dokumentacje
 */
void printHelp()
{
    for (string &lines : matrixCalcInstruction)
    {
        cout << lines << endl;
    }
}