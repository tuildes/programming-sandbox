void twoSum(unsigned count, const int numbers[count], int target,
			unsigned *index1, unsigned *index2) {

    for (unsigned i = 0; i < (count - 1); i++) {
        for (unsigned j = (i + 1); j < count; j++) {
            if ((numbers[i] + numbers[j]) == target) {
                *index1 = i;
                *index2 = j;
                return;
            }
        }
    }

	*index1 = *index2 = -1; // Not found
}

