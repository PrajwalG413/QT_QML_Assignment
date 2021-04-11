#include <QtTest>
#include <QDebug>
#include <QTest>
class Testcase1 : public QObject
{
    Q_OBJECT

public:
    Testcase1();
    ~Testcase1();

private:
    bool isTrueOrFalse(){
        return true;
    }

    int A=10, B=100;


private slots:
    void initTestCase();

   void myfirstTest();

   void mysecondTest();

   void mythirdTest();

    void cleanupTestCase();

    void test_case1();

};

Testcase1::Testcase1()
{
    qDebug("constructor");
}

Testcase1::~Testcase1()
{
     qDebug("Destructor");
}

void Testcase1::initTestCase()
{
    qDebug("call initTestCase before others");
}

//This testcase checks weather isTrueOrFalse() returns true or false
void Testcase1::myfirstTest(){
    QVERIFY(isTrueOrFalse());
}

//This testcase fails because its comparing two different strings
void Testcase1::mysecondTest(){
    QCOMPARE(QString("hello").toUpper(), QString("HI"));
}

//Checks for negetive results if they are not same testcase fails
//here D holds positive value 90 but C holds result -90
void Testcase1::mythirdTest(){
    int C = A - B;
    int D = 90;

    QCOMPARE(D, C);
}

//this testcase always executes at the end of all other testcases
void Testcase1::cleanupTestCase()
{
    qDebug("call cleanupTestCase after others ");
}
//this testcase is just to show that cleanupTestCase executes at last
void Testcase1::test_case1()
{
    qDebug("hello from test_case1");
}

QTEST_APPLESS_MAIN(Testcase1)

#include "tst_testcase1.moc"
