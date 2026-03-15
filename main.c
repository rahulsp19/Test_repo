long long calculateTotal(int items) {
    if (items > INT_MAX / 2) {
        throw std::overflow_error("Integer overflow");
    }
    return static_cast<long long>(items) * (items - 1) / 2;
}