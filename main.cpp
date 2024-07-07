#include <iostream>
#include <string>

using namespace std;

struct Console {
	static void showError(string message) {
		cout << message << endl;
	}
};

struct CustomColor {
private:
    string hex;
    static int objectCount;

public:
    CustomColor(string hex) : hex(hex) {
        objectCount++;
    }

    static int getObjectCount() {
        return objectCount;
    }

    string getHex() const {
        return hex;
    }

    ~CustomColor() {
        objectCount--;
    }
};

int CustomColor::objectCount = 0;

int main() {
    CustomColor* color_1 = new CustomColor("FF0000");
    cout << "Object count = " << CustomColor::getObjectCount() << endl;

    CustomColor* color_2 = new CustomColor("00FF00");

    cout << "Color 1 = " << color_1->getHex() << endl;
    cout << "Color 2 = " << color_2->getHex() << endl;

    delete color_1;
    delete color_2;

    cout << "Object count after deletion = " << CustomColor::getObjectCount() << endl;

    system("pause");
    return 0;
}
