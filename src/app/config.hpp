#pragma once
#include <common.hpp>

namespace app {

struct config {
  struct server {
    std::string address;
    std::string service;
    bool proxied = false;
  } server;

  struct log {
    std::optional<std::filesystem::path> filename;
    spdlog::level::level_enum severity = spdlog::level::off;
  } log;

  void parse(const std::filesystem::path& file);
};

}  // namespace app
