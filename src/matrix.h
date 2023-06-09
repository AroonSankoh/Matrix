//
// Created by Will Rosenberg on 1/1/23.
//
#pragma once

#include <iostream>

class Matrix
{
    friend std::ostream& operator<< (std::ostream& o, const Matrix& m);
    friend Matrix operator* (int a, const Matrix& m);

    static const int BLOCK_SIZE = 8; //size for block matrix operations
private:
    int row;
    int col;
    double *arr;

public:
    //constructors
    Matrix(int row, int col);
    Matrix(int row1, int col1, double * inputArr);
    Matrix(const Matrix & m); //copy constructor
    Matrix(Matrix && m); //move constructor
    Matrix & operator=(const Matrix & m); //copy assignment operator
    Matrix & operator=(Matrix && m); //move assignment operator
    ~Matrix();

    //helper methods
    static Matrix createMatrix(int row, int col);
    int toIndex(int row, int col) const;
    int getSize() const;
    int getRow() const;
    int getCol() const;
    double * getArr() const;
    bool operator==(Matrix &m) const;
    bool operator!=(Matrix &m) const;
    int gcd(int a, int b);
    int lcm(double a, double b);
    static void rrefHelper(Matrix & A, int row_m, int row_n);
    double detHelper(Matrix m) const;
    int gcdRowOperation(const Matrix A, int row);

    //matrix operations
    Matrix operator+(Matrix &m) const;
    Matrix operator*(Matrix &m) const; //matrix mult
    Matrix operator*(double a) const;

    Matrix rref();
    Matrix rrefComplete();
    Matrix transpose() const;
    double determinant() const;
    Matrix inverse() const;
    void printMatrix() const;
};

std::ostream& operator<< (std::ostream& o, const Matrix& m);
Matrix operator* (double a, const Matrix& m);
