#pragma once

#include "calculator.h"

#include <QtTest>

class TestCalculator: public QObject
{
    Q_OBJECT

private slots:
    // -- setup/cleanup --
    void init();

    // -- tests --
    void testConstructor();
    void testSum();
    void testDiff();
    void testMult();
    void testDiv();

private:
    const int A0 = 0;
    const int B0 = 0;

private:
    Calculator mCalc;
};
