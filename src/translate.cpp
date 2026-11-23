// translate.cpp — part of subtitle-gen-ai.

#include "subtitlegenai/translate.h"

#include <cstdio>

namespace subtitlegenai {

Translate::Translate(const std::string& config_path)
    : config_path_(config_path) {}

void Translate::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Translate::run() {
    if (verbose_) std::fprintf(stderr, "[subtitle-gen-ai] translate: run\n");
    // core logic lives here
    return true;
}

}  // namespace subtitlegenai
