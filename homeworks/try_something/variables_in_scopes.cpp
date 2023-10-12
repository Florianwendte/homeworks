#include <cstdio>

int global_value = 3333;
int local_value = 2222;
int local_local_value = 1111;


int main() {
    {
        int local_value = 10;
        int local_local_value = 999;
    }
    std::printf("global_value: %d, local_value: %d, local_local_value: %d\n", global_value, local_value, local_local_value);
    return 0;
}
