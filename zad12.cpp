#include <iostream>
#include <string>

using namespace std;

class Camera {
private:
    string model;
    float price;
    int resolution;
    int memoryCardSize;
    float weight;

public:
    Camera(string model, float price, int resolution, int memoryCardSize, float weight) {
        this->model = model;
        this->price = price;
        this->resolution = resolution;
        this->memoryCardSize = memoryCardSize;
        this->weight = weight;
    }

    string getModel() {
        return model;
    }

    float getPrice() {
        return price;
    }

    int getResolution() {
        return resolution;
    }

    int getMemoryCardSize() {
        return memoryCardSize;
    }

    float getWeight() {
        return weight;
    }
};

int main() {
    Camera camera("Canon M50", 1100, 29, 128, 2.0);

    cout << "Camera Details:" << endl;
    cout << "Model: " << camera.getModel() << endl;
    cout << "Price: $" << camera.getPrice() << endl;
    cout << "Resolution: " << camera.getResolution() << " megapixels" << endl;
    cout << "Memory Card Size: " << camera.getMemoryCardSize() << " GB" << endl;
    cout << "Weight: " << camera.getWeight() << " kg" << endl;

    return 0;
}
