long long calculateTotal(int items) {
    if (items > 1 && static_cast<long long>(items) * (items - 1) > LLONG_MAX) {
        throw std::overflow_error("Integer overflow");
    }
    return static_cast<long long>(items) * (items - 1) / 2;
}