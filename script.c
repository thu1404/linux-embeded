#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Khai báo biến
    int minRange = 1000;  // Giá trị nhỏ nhất trong khoảng
    int maxRange = 3000;  // Giá trị lớn nhất trong khoảng
    int random1, random2;
    char filename[] = "./deviceInfo";  // Tên file

    // Khởi tạo bộ sinh số ngẫu nhiên
    srand(time(NULL));

    // Tạo số ngẫu nhiên trong khoảng cho trước
    random1 = rand() % (maxRange - minRange + 1) + minRange;
    random2 = rand() % (maxRange - minRange + 1) + minRange;

    // Ghi vào file
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Không thể mở file.\n");
        return 1;
    }
    fprintf(file, "TV|%d|%d|OFF|\n", random1, random2);
    fclose(file);

    printf("Ghi file thành công.\n");

    return 0;
}