// src/config/ConfigLoader.cpp
#include "engine/ConfigLoader.hpp"
#include <yaml-cpp/yaml.h>
#include <stdexcept>

namespace engine {

EngineConfig ConfigLoader::load(const std::string& path) {
    EngineConfig cfg;
    YAML::Node doc = YAML::LoadFile(path);

    if (auto node = doc["book_depth"])
        cfg.book_depth = node.as<std::size_t>();
    else
        throw std::runtime_error("Missing 'book_depth' in config");

    if (auto node = doc["use_skiplist"])
        cfg.use_skiplist = node.as<bool>();
    // else leave default

    return cfg;
}

} // namespace engine