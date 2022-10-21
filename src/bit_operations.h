class BitOperations {
public:
    int getBit (int number, int position) {
        return (number >> position) & 1;
    }

    int setBit (int number, int position) {
        return (number | (1 << position));
    }

    int clearBit(int number, int position) {
        return (number & ~(1 << position));
    }

    int updateBit(int number, int position, bool value) {
        return value? setBit(number, position) : clearBit(number, position);
    }
};