#pragma once
#include <cstddef>

namespace engine {

struct EngineConfig {
    std::size_t book_depth   = 0;
    bool        use_skiplist = false;
    // todo: add matching rules ports 
};

} 