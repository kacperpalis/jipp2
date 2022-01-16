#ifndef JIPP2_LAB_H
#define JIPP2_LAB_H

#include <utility>
/**
 * Dodaje dwie macierze typu long
 * @param matrixA pierwsza macierz
 * @param matrixB druga macierz
 * @param matrixSizeA rozmiar macierzy typu pair
 * @return adres macierzy wynikowej
 */
long **matrixAdd(long **matrixA, long **matrixB, std::pair<int, int> matrixSizeA);

/**
 * Dodaje dwie macierze typu float
 * @param matrixA pierwsza macierz
 * @param matrixB druga macierz
 * @param matrixSizeA rozmiar macierzy typu pair
 * @return adres macierzy wynikowej
 */
float **matrixAdd(float **matrixA, float **matrixB, std::pair<int, int> matrixSizeA);

/**
 * Odejmuje dwie macierze typu long
 * @param matrixA pierwsza macierz
 * @param matrixB druga macierz
 * @param matrixSizeA rozmiar macierzy typu pair
 * @return adres macierzy wynikowej
 */
long **matrixSubtract(long **matrixA, long **matrixB, std::pair<int, int> matrixSizeA);

/**
 * Odejmuje dwie macierze typu float
 * @param matrixA pierwsza macierz
 * @param matrixB druga macierz
 * @param matrixSizeA rozmiar macierzy typu pair
 * @return adres macierzy wynikowej
 */
float **matrixSubtract(float **matrixA, float **matrixB, std::pair<int, int> matrixSizeA);

/**
 * Mnozy dwie macierze typu long
 * @param matrixA pierwsza macierz
 * @param matrixB druga macierz
 * @param matrixSizeA rozmiar macierzy typu pair pierwszej macierzy
 * @param matrixSizeB rozmiar macierzy typu pair drugiej macierzy
 * @return adres macierzy wynikowej
 */
long **matrixMultiply(long **matrixA, long **matrixB, std::pair<int, int> matrixSizeA, std::pair<int, int> matrixSizeB);

/**
 * Mnozy dwie macierze typu float
 * @param matrixA pierwsza macierz
 * @param matrixB druga macierz
 * @param matrixSizeA rozmiar macierzy typu pair pierwszej macierzy
 * @param matrixSizeB rozmiar macierzy typu pair drugiej macierzy
 * @return adres macierzy wynikowej
 */
float **matrixMultiply(float **matrixA, float **matrixB, std::pair<int, int> matrixSizeA, std::pair<int, int> matrixSizeB);

/**
 * Mnozy macierz typu long przez skalar takiego samego typu
 * @param matrix macierz mnozona
 * @param matrixSizeA rozmiar macierzy typu pair
 * @param scalar wartosc skalara
 * @return adres macierzy wynikowej
 */
long **matrixMultiplyByScalar(long **matrix, std::pair<int, int> matrixSizeA, long scalar);

/**
 * Mnozy macierz typu float przez skalar takiego samego typu
 * @param matrix macierz mnozona
 * @param matrixSizeA rozmiar macierzy typu pair
 * @param scalar wartosc skalara
 * @return adres macierzy wynikowej
 */
float **matrixMultiplyByScalar(float **matrix, std::pair<int, int> matrixSizeA, float scalar);

/**
 * Transponuje macierz typu long
 * @param matrix macierz transponowana
 * @param matrixSizeA rozmiar macierzy typu pair
 * @return adres macierzy wynikowej
 */
long **matrixTranspoze(long **matrix, std::pair<int, int> matrixSizeA);

/**
 * Transponuje macierz typu float
 * @param matrix macierz transponowana
 * @param matrixSizeA rozmiar macierzy typu pair
 * @return adres macierzy wynikowej
 */
float **matrixTranspoze(float **matrix, std::pair<int, int> matrixSizeA);

/**
 * Poteguje macierz typu long
 * @param matrix macierz potegowana
 * @param matrixSizeA rozmiar macierzy typu pair
 * @param power wartosc potegi
 * @return  adres macierzy wynikowej
 */
long **matrixPower(long **matrix, std::pair<int, int> matrixSizeA, unsigned short power);

/**
 * Poteguje macierz typu float
 * @param matrix macierz potegowana
 * @param matrixSizeA rozmiar macierzy typu pair
 * @param power wartosc potegi
 * @return  adres macierzy wynikowej
 */
float **matrixPower(float **matrix, std::pair<int, int> matrixSizeA, unsigned short power);

/**
 * Oblicza wyznacznik macierzy typu long wykorzystujac algorytm Bareissa
 * @param matrix macierz, z ktorej obliczany jest wyznacznik
 * @param matrixSizeA rozmiar macierzy typu pair
 * @return  wartosc wyznacznika
 */
long matrixDeterminant(long **matrix, std::pair<int, int> matrixSizeA);

/**
 * Oblicza wyznacznik z macierzy typu float wykorzystujac algorytm Bareissa
 * @param matrix macierz, z ktorej obliczany jest wyznacznik
 * @param matrixSizeA rozmiar macierzy typu pair
 * @return wartosc wyznacznika
 */
float matrixDeterminant(float **matrix, std::pair<int, int> matrixSizeA);

/**
 * Sprawdza, czy macierz typu long jest diagonalna
 * @param matrix macierz
 * @param matrixSizeA rozmiar macierzy typu pair
 * @return true gdy macierz jest diagonalna, false gdy macierz nie jest diagonalna
 */
bool matrixIsDiagonal(long **matrix, std::pair<int, int> matrixSizeA);

/**
 * Sprawdza, czy macierz typu float jest diagonalna
 * @param matrix macierz
 * @param matrixSizeA rozmiar macierzy typu pair
 * @return true gdy macierz jest diagonalna, false gdy macierz nie jest diagonalna
 */
bool matrixIsDiagonal(float **matrix, std::pair<int, int> matrixSizeA);

namespace mySwap
{

    /**
     * Zamienia wartosc dwoch zmiennych typu int poprzez referencje
     * @param a pierwsza zmienna
     * @param b druga zmienna
     */
    void swap(int &, int &);

    /**
     * Zamienia wartosc dwoch zmiennych typu long poprzez referencje
     * @param a pierwsza zmienna
     * @param b druga zmienna
     */
    void swap(long &, long &);

    /**
     * Zamienia wartosc dwoch zmiennych typu float poprzez referencje
     * @param a pierwsza zmienna
     * @param b druga zmienna
     */
    void swap(float &, float &);
}

/**
 * Sortuje wiersz macierzy typu long w kolejnosci rosnacej za pomoca bubble sort
 * @param row wiersz macierzy
 * @param columns liczba kolumn
 */
void sortRow(long *row, int columns);

/**
 * Sortuje wiersz macierzy typu float w kolejnosci rosnacej za pomoca bubble sort
 * @param row wiersz macierzy
 * @param columns liczba kolumn
 */
void sortRow(float *row, int columns);

/**
 * Sortuje wszystkie wiersze macierzy typu long za pomoca funkcji sortRow
 * @param matrix macierz sortowana
 * @param matrixSizeA rozmiar macierzy typu pair
 */
void matrixSortRows(long **matrix, std::pair<int, int> matrixSizeA);

/**
 * Sortuje wszystkie wiersze macierzy typu float za pomoca funkcji sortRow
 * @param matrix macierz sortowana
 * @param matrixSizeA rozmiar macierzy typu pair
 */
void matrixSortRows(float **matrix, std::pair<int, int> matrixSizeA);

/**
 * Generuje macierz typu long o podanych wymiarach macierzy o losowych wartosciach mieszczacych sie w podanym przedziale
 * @param matrixSizeA rozmiar macierzy
 * @param min minimalna wartosc wyrazu macierzy
 * @param max maksymalna wartosc wyrazu macierzy
 * @return adres zaalokowanej macierzy
 */
long **matrixGenerate(std::pair<int, int> matrixSizeA, int min, int max);

/**
 * Generuje macierz typu float o podanych wymiarach macierzy o losowych wartosciach mieszczacych sie w podanym przedziale
 * @param matrixSizeA rozmiar macierzy
 * @param min minimalna wartosc wyrazu macierzy
 * @param max maksymalna wartosc wyrazu macierzy
 * @return adres zaalokowanej macierzy
 */
float **matrixGenerate(std::pair<int, int> matrixSizeA, float min, float max);

/**
 * Alokuje pamiec dla macierzy typu long o podanych wymiarach macierzy
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @return adres zaalokowanej macierzy
 */
long **allocateLongMatrix(int rows, int columns);

/**
 * Alokuje pamiec dla macierzy tylu float o podanych wymiarach macierzy
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 * @return  adres zaalokowanej macierzy
 */
float **allocateFloatMatrix(int rows, int columns);

/**
 * Kopiuje wartosci pierwszej macierzy typu long do drugiej macierzy takiego samego typu
 * @param matrixA pierwsza macierz
 * @param matrixB druga macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void copyMatrix(long **matrixA, long **matrixB, int rows, int columns);

/**
 * Kopiuje wartosci pierwszej macierzy typu float do drugiej macierzy takiego samego typu
 * @param matrixA pierwsza macierz
 * @param matrixB druga macierz
 * @param rows liczba wierszy
 * @param columns liczba kolumn
 */
void copyMatrix(float **matrixA, float **matrixB, int rows, int columns);

/**
 * Zwalnia pamiec dla zaalokowanej macierzy typu long
 * @param matrix macierz
 * @param rows liczba wierszy
 */
void deleteMatrix(long **matrix, int rows);

/**
 * Zwalnia pamiec zaalokowanej macierzy typu float
 * @param matrix macierz
 * @param rows liczba wierszy
 */
void deleteMatrix(float **matrix, int rows);

#endif //JIPP2_LAB_H
