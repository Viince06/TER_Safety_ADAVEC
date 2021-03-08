#ifndef APP_VARIABLES_H
#define APP_VARIABLES_H
static int32_t a_minus_m = 0;
void update_differences(const uint8_t *events) {
	a_minus_m += (events[1] & (1 << 2))? 1 : 0;
	a_minus_m -= (events[1] & (1 << 4))? 1 : 0;
}
#endif //APP_VARIABLES_H
