#include <iostream>

#define IS_EVEN(num) (num % 2 == 0)
#define IS_POSITIVE(num) (num > 0)
#define CHECK_EVEN
#define CHECK_POSITIVE
#define PRINTE(w) printf("this number is even: %d\n", w)
#define PRINTO(w) printf("this number is odd: %d\n", w)
#define PRINTP(w) printf("this number is positive: %d\n", w)
#define PRINTN(w) printf("this number is not positive: %d\n", w)

using namespace std;

void Input(int* a, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "n = "; cin >> n;
    int* p = new int[n];
    Input(p, n);

    for (int i = 0; i < n; ++i) 
    {
#ifdef CHECK_EVEN
        if (IS_EVEN(p[i])) {
            PRINTE(p[i]);
        }
        else {
            PRINTO(p[i]);
        }
#endif

#ifdef CHECK_POSITIVE
        if (IS_POSITIVE(p[i])) {
            PRINTP(p[i]);
        }
        else {
            PRINTN(p[i]);
        }
#endif
    }
    return 0;
}
