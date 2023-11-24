#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB6_2rec/LAB6_2rec.cpp"
#include <vector>  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(averageIndexOfEvenElementsRec_EmptyArray) {
            std::vector<int> a;
            double result = averageIndexOfEvenElementsRecursive(a.data(), a.size(), 0, 0, 0);
            Assert::AreEqual(result, 0.0);
        }

        TEST_METHOD(averageIndexOfEvenElementsRec_NoEvenElements) {
            int a[] = { 1, 3, 5, 7, 9 };
            int n = sizeof(a) / sizeof(a[0]);
            double result = averageIndexOfEvenElementsRecursive(a, n, 0, 0, 0);
            Assert::AreEqual(result, 0.0);
        }

        TEST_METHOD(averageIndexOfEvenElementsRec_AllEvenElements) {
            int a[] = { 2, 4, 6, 8, 10 };
            int n = sizeof(a) / sizeof(a[0]);
            double result = averageIndexOfEvenElementsRecursive(a, n, 0, 0, 0);
            Assert::AreEqual(result, (0 + 1 + 2 + 3 + 4) / 5.0);
        }

        TEST_METHOD(averageIndexOfEvenElementsRec_MixedElements) {
            int a[] = { 1, 2, 3, 4, 5, 6 };
            int n = sizeof(a) / sizeof(a[0]);
            double result = averageIndexOfEvenElementsRecursive(a, n, 0, 0, 0);
            Assert::AreEqual(result, (1 + 3 + 5) / 3.0);
        }
    };
}
