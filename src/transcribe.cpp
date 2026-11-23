// transcribe.cpp — part of subtitle-gen-ai.

#include "subtitlegenai/transcribe.h"

#include <cstdio>

namespace subtitlegenai {

Transcribe::Transcribe(const std::string& config_path)
    : config_path_(config_path) {}

void Transcribe::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Transcribe::run() {
    if (verbose_) std::fprintf(stderr, "[subtitle-gen-ai] transcribe: run\n");
    // core logic lives here
    return true;
}

}  // namespace subtitlegenai
