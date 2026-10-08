int word_score (const char *word) {
    int result = 0;

    for (unsigned int i = 0; word[i] != '\0'; i++)
        result += (word[i] - 'a' + 1);

    return result;
}
