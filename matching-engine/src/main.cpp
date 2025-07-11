#include "engine/ConfigLoader.hpp"
#include <iostream>

int main() {
    try {
        auto cfg = engine::ConfigLoader::load("config/config.yaml");
        std::cout << "Config: book_depth=" << cfg.book_depth
                  << ", use_skiplist=" << std::boolalpha << cfg.use_skiplist
                  << "\n";
    } catch (const std::exception& ex) {
        std::cerr << "error loading config: " << ex.what() << "\n";
        return 1;
    }

    std::cout << "hello matching engine.\n";
    return 0;
}