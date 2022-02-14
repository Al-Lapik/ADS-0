// Copyright 2021 NNTU-CS
int gcd(int a, int b) {
    if (a < b) {
        int temp = a;
        a = b;
        b = a;
    }
    
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}
