#include <iostream>
using namespace std;
class E1 { };
class E2 : public E1 { };
void test(int n)
{
    if (n == 0)
        throw "Error message";
    if (n == 1)
        throw n;
    if (n == 2)
    {
        E1 e1;
        throw e1;
    }
    if (n == 3)
    {
        E2 e2;
        throw e2;
    }
}
int main()
{
    try
    {
        test(3);
    }
    catch (const char* msg)
    {
        cout << msg;
    }
    catch (int n)
    {
        cout << "\nint ..." << n << endl;
    }
    catch (E1 e)
    {
        cout << "Object of E1 thrown" << endl;
    }
    catch (E2 e)
    {
        cout << "Object of E2 thrown" << endl;
    }
    catch (...)
    {
        cout << "Generic exception handler" << endl;
    }
    return 0;
}
