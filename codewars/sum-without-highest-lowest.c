int sum(const int numbers[/*length*/], int length) {
    if (length < 3) { return 0; }
    int res = 0, higherIndex = 0, lowerIndex = 0;

    for (int i = 0; i < length; i++) {
        res += numbers[i];
        if (numbers[i] > numbers[higherIndex])
            higherIndex = i;
        if (numbers[i] < numbers[lowerIndex])
            lowerIndex = i;
    }

    res -= numbers[higherIndex];
    res -= numbers[lowerIndex];
        
    return res;
}

