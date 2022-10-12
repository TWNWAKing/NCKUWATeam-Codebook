/**
 * Author: TWNWAKing
 * Date: 2022-10-13
 * License: CC0
 * Description: Better floor and ceil fuction for integers.
 * Status: Works
 */
int64_t floor_div(int64_t a, int64_t b) {
  return a / b - ((a ^ b) < 0 && a % b != 0);
}
int64_t ceil_div(int64_t a, int64_t b) {
  return a / b + ((a ^ b) > 0 && a % b != 0);
}