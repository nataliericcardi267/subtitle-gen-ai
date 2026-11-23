// main.cpp — entry point. Wires config and subsystems together.

#include "subtitlegenai/settings.h"
#include "subtitlegenai/transcribe.h"
#include "subtitlegenai/translate.h"
#include "subtitlegenai/formats.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    subtitlegenai::Settings settings = subtitlegenai::Settings::load_default();
    subtitlegenai::Transcribe transcribe(settings.store_path);
    subtitlegenai::Translate translate(settings.store_path);
    subtitlegenai::Formats formats(settings.store_path);
    std::fprintf(stderr, "[subtitle-gen-ai] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
