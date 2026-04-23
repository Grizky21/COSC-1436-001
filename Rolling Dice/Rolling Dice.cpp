#include <iostream>
#include <random>


using namespace std;


int dice20() 
{
    mt19937 rng(random_device{}());
    uniform_int_distribution<int> dice1(1, 20);
    return dice1(rng);
}

int dice4() 
{
    mt19937 rng(random_device{}());
    uniform_int_distribution<int> dice2(1, 4);
    return dice2(rng);
}

int main() 
{
    int count = 0;
    int d20 = 0;
    int d4 = 0;

    
    while (d20 != 1 || d4 != 1) 
    {
        d4 = dice4();
        d20 = dice20();
        count++;
    }

    cout << "It took " << count << " rolls to get SNAKE EYES!" << "\n";

    return 0;
}
