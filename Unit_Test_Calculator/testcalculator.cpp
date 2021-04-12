#include "testcalculator.h"

// -- setup/cleanup --
void TestCalculator::init()
{
    mCalc.SetA(A0);
    mCalc.SetB(B0);
}

// -- tests --
void TestCalculator::testConstructor()
{
    // default values
    Calculator c1;

    QVERIFY(c1.GetA() == 0);
    QVERIFY(c1.GetB() == 0);

    // full constructor
    const int A = 10;
    const int B = 2;
    Calculator c2(A, B);

    QVERIFY2(c2.GetA() == A, "first operand doesn't match");
    QVERIFY2(c2.GetB() == B, "second operand doesn't match");
}


//testing for addition
void TestCalculator::testSum()
{
    // sum default
    QCOMPARE(mCalc.Sum(), A0 + B0 );

    // sum after setting a and b
    const int A = 10;
    const int B = 2;
    mCalc.SetA(A);
    mCalc.SetB(B);

    QCOMPARE(mCalc.Sum(), A + B);
}

//testing for subtraction
void TestCalculator::testDiff()
{
    // Diff default
    QCOMPARE(mCalc.Diff(), A0 - B0 );

    // creating local const variables a and b
    const int A = 10;
    const int B = 4;

    QCOMPARE(mCalc.Diff(), A - B); //this testcase fails because we are comparing diffrent values
}

//testing for multiplication
void TestCalculator::testMult()
{
    // Mult default
    QCOMPARE(mCalc.Mult(), A0 * B0 );//just compare result from mult()

}

//testing for division
void TestCalculator::testDiv()
{
    //setting new values for mA and mB
    const int A = 10;
    const int B = 5;
    mCalc.SetA(A);
    mCalc.SetB(B);
    bool flag = false;
    //Checking if B is '0'
    if(mCalc.GetB() != 0){
      flag = true;
    }
    QVERIFY(flag);//execution breaks if B is '0' (cannot divide by zero)
                  // else cotinues with following code
    QCOMPARE(mCalc.Div(), A / B );
}


// generate basic main: no GUI, no events
QTEST_APPLESS_MAIN(TestCalculator)

// uncomment next line if class declaration is in .cpp (no .h)
//#include "TestCalculator.moc"
