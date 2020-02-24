//
//  main.cpp
//  AtCoderB20200224
//
//  Created by yuuki oosu on 2020/02/24.
//  Copyright © 2020 yuuki oosu. All rights reserved.
//

#include <iostream>

int calcDigit(int N, int K, int d) {
    if(N < K) {
        return d+1;
    } else {
        return calcDigit(N/K, K, d+1);
    }
}

int main(int argc, const char * argv[]) {
    int N(0), K(0);

    std::cin >> N >> K;

    int digit = calcDigit(N, K, 0);

    std::cout << digit;

    return 0;
}
