#include <iostream>
#include <yaml-cpp/yaml.h>

int main(int argc, char** argv) {
    try {
        YAML::Node config = YAML::LoadFile("config/config.yaml");
        std::cout << "loaded config with "
                  << config.size()
                  << " entries.\n";
    } catch (const std::exception& ex) {
        std::cout << "failed to load config: "
                  << ex.what() << "\n";
    }

    std::cout << "hello matching engine.\n";
    return 0;
}