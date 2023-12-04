#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    unsigned int do_lon_max = 50;
    int n;

    // Nhập số lượng phần tử của mảng (n)
    cout << "Nhap so luong phan tu cua mang (0 <= n <= 50): ";
    cin >> n;

    // Kiểm tra n có hợp lệ không
    if (n < 0 || n > do_lon_max) {
        cout << "So luong phan tu khong hop le." << endl;
        return 1; // Kết thúc chương trình với mã lỗi
    }

    int mang[do_lon_max];

    // Nhập giá trị cho mảng từ bàn phím
    cout << "Nhap " << " " << n << " " << " so nguyen cho mang:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> mang[i];
    }

    // In ra mảng vừa nhập
    cout << "Mang vua nhap la:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << mang[i] << " ";
    }
    cout << endl;

    // Đếm số phần tử chẵn trong mảng
    int dem_so_chan = 0;
    for (int i = 0; i < n; ++i) {
        if (mang[i] % 2 == 0) {
            dem_so_chan++;
        }
    }
    cout << "So luong phan tu chan trong mang la: " << dem_so_chan << endl;

    // Tìm giá trị lớn nhất trong mảng
    int gia_tri_max = *max_element(mang, mang + n);
    cout << "Gia tri lon nhat trong mang la: " << gia_tri_max << endl;

    // Tìm kiếm phần tử x trong mảng
    int x;
    cout << "Nhap gia tri x can tim: ";
    cin >> x;

    bool xay_dung = false;
    for (int i = 0; i < n; ++i) {
        if (mang[i] == x) {
            xay_dung = true;
            cout << "Phan tu " << x << " xuat hien tai vi tri " << i + 1 << " trong mang." << endl;
            break;
        }
    }
    if (!xay_dung) {
        cout << "Khong tim thay phan tu " << x << " trong mang." << endl;
    }

    // Sắp xếp mảng theo thứ tự tăng dần
    sort(mang, mang + n);
    cout << "Mang sau khi sap xep tang dan:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << mang[i] << " ";
    }
    cout << endl;

    return 0;
}
