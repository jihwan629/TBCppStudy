﻿#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

unsigned int PRNG() // Pseudo Random Number Generator
{
    static unsigned int seed = 5523; // seed number

    seed = 823729 * seed + 2396403;

    return seed % 32768;
}

int getRandomNumber(int min, int max)
{
    static const double franction = 1.0 / (RAND_MAX + 1.0);

    return  min + static_cast<int>((max - min + 1) * (std::rand() * franction));
}

int main()
{
    //std::srand(5323); // seed
    //std::srand(static_cast<unsigned int>(std::time(0)));

    //for (int count = 1; count <= 100; count++)
    //{
    //    //cout << PRNG() << "\t";
    //    //cout << std::rand() << "\t";
    //    //cout << getRandomNumber(5, 8) << "\t";
    //    //cout << rand() % 4 + 5 << "\t";
    //    cout << rand() % 4 + 5 << "\t";

    //    if (count % 5 == 0)
    //        cout << endl;
    //}

    std::random_device rd;
    std::mt19937_64 mersenne(rd()); // create a mersenne twister
    std::uniform_int_distribution<> dice(1, 6);

    for (int count = 1; count <= 20; count++)
    {
        cout << dice(mersenne) << endl;
    }

    return 0;
}