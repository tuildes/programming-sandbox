char *human_readable_time (unsigned seconds, char *time_string) {
    unsigned temp = (seconds / 3600);
    time_string[0] = '0' + temp / 10;
    time_string[1] = '0' + temp % 10;
    time_string[2] = ':';

    temp = ((seconds / 60) % 60);
    time_string[3] = '0' + temp / 10;
    time_string[4] = '0' + temp % 10;
    time_string[5] = ':';

    temp = (seconds % 60);
    time_string[6] = '0' + temp / 10;
    time_string[7] = '0' + temp % 10;

    time_string[8] = '\0';

    return time_string;
}

char *human_readable_time (unsigned seconds, char *time_string) {
    sprintf(time_string, "%02u:%02u:%02u", seconds / 3600, seconds / 60 % 60, seconds % 60);
	return time_string;
}
