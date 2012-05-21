#include <QtGui>
#include <QtCore/QString>
#include <QtTest/QtTest>
#include <QtCore/QCoreApplication>
#include "../textedit.h"

class Test2Test : public QObject
{
    Q_OBJECT

public:
    Test2Test();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase1();
    void testCase2();
    void testCase3();
    void testCase4();
    void testCase5();
    void testCase6();
    void testCase7();
    void testCase8();
    void testCase9();
    void testCase10();
};
Test2Test::Test2Test()
{
}

void Test2Test::initTestCase()
{
}

void Test2Test::cleanupTestCase()
{
}

void Test2Test::testCase1()
{
    QLineEdit lineEdit;
    QTest::keyClicks(&lineEdit, "hello world");
    QCOMPARE(lineEdit.text(), QString("hello world"));
}
void Test2Test::testCase2()
{
    TextEdit txt;
    QString result =txt.textSize("12");
    bool success;
    if (result=="12")
        success=true;
    else success=false;
    QCOMPARE(true,success);
}
void Test2Test::testCase3()
{
    TextEdit txt;
    QCOMPARE(true,txt.fileNew());
}
void Test2Test::testCase4()
{
    TextEdit txt;
    QTextEdit mytxt;
    QTest::keyClicks(&mytxt, "Pavlova Viktoria is student of BNTU");
    QCOMPARE(mytxt.toPlainText(), QString("Pavlova Viktoria is student of BNTU"));
}
void Test2Test::testCase5()
{
    TextEdit txt;
    bool p;
    p=txt.textBold();
    QCOMPARE(true,p);
}
void Test2Test::testCase6()
{
    TextEdit txt;
    bool success;
    int result =txt.textStyle(0);
    if (result==0)
        success=true;
    else success=false;
    QCOMPARE(true,success);
}
void Test2Test::testCase7()
{
    TextEdit txt;
    bool result;
    result=txt.fileOpen("G:/Lab1_tests/textedit/1.docx");
    QCOMPARE(result,true);
}
void Test2Test::testCase8()
{
    bool result;
    result=txt.fileOpen("G:/Lab1_tests/textedit/1.jpg");
    QCOMPARE(result,true);
}
void Test2Test::testCase9()
{
    bool success;
    TextEdit txt;
    QString str="5555";
    success=txt.ForSaveWord(str);
    QCOMPARE(success,true);
}
void Test2Test::testCase10()
{
    TextEdit txt;
    bool p;
    p=txt.textItalic();
    QCOMPARE(true,p);
}
QTEST_MAIN(Test2Test);

#include "tst_test2test.moc"
