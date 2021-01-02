class ParkingSystem {
public:
    const int big = 1;
    const int medium = 2;
    const int small = 3;
    
    ParkingSystem(int big, int medium, int small) : arr{0, big, medium, small}
    {
    }
    
    bool addCar(int carType) {
    
        if (arr[carType]) {
            arr[carType] -= 1;
            return true;
        }
        
        return false;        
    }
    
    vector<int> arr;
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */