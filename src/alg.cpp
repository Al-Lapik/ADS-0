// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int r = a % b;
    if (r == 0) return b;
    else {
        a = b;
        b = r;
        return gcd(a, b);
    }
}
