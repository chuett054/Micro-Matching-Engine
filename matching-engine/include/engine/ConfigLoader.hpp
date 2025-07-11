#pragma once
#include "engine/config.hpp"
#include <string>

namespace engine {

class ConfigLoader {
public:
    static EngineConfig load(const std::string& path);
};

} 