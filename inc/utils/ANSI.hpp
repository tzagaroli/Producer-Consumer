#ifndef ANSI_HPP
#define ANSI_HPP

#include <string>

// Type aliases for ANSI escape codes
using ANSI_t = char*;
using cANSI_t = const char*;

namespace ansi
{
// --- Reset ---
constexpr cANSI_t reset        = "\x1b[0m";

// --- Text Styles ---
constexpr cANSI_t bold         = "\x1b[1m";
constexpr cANSI_t dim          = "\x1b[2m";
constexpr cANSI_t italic       = "\x1b[3m";
constexpr cANSI_t underline    = "\x1b[4m";
constexpr cANSI_t blink        = "\x1b[5m";
constexpr cANSI_t reverse      = "\x1b[7m"; // inversion fg/bg
constexpr cANSI_t hidden       = "\x1b[8m";
constexpr cANSI_t strikethrough= "\x1b[9m";

// --- Text Colors (Normal) ---
constexpr cANSI_t black        = "\x1b[30m";
constexpr cANSI_t red          = "\x1b[31m";
constexpr cANSI_t green        = "\x1b[32m";
constexpr cANSI_t yellow       = "\x1b[33m";
constexpr cANSI_t blue         = "\x1b[34m";
constexpr cANSI_t magenta      = "\x1b[35m";
constexpr cANSI_t cyan         = "\x1b[36m";
constexpr cANSI_t white        = "\x1b[37m";

// --- Text Colors (Bright) ---
constexpr cANSI_t bright_black   = "\x1b[90m";
constexpr cANSI_t bright_red     = "\x1b[91m";
constexpr cANSI_t bright_green   = "\x1b[92m";
constexpr cANSI_t bright_yellow  = "\x1b[93m";
constexpr cANSI_t bright_blue    = "\x1b[94m";
constexpr cANSI_t bright_magenta = "\x1b[95m";
constexpr cANSI_t bright_cyan    = "\x1b[96m";
constexpr cANSI_t bright_white   = "\x1b[97m";

// --- Background Colors (Normal) ---
constexpr cANSI_t bg_black     = "\x1b[40m";
constexpr cANSI_t bg_red       = "\x1b[41m";
constexpr cANSI_t bg_green     = "\x1b[42m";
constexpr cANSI_t bg_yellow    = "\x1b[43m";
constexpr cANSI_t bg_blue      = "\x1b[44m";
constexpr cANSI_t bg_magenta   = "\x1b[45m";
constexpr cANSI_t bg_cyan      = "\x1b[46m";
constexpr cANSI_t bg_white     = "\x1b[47m";

// --- Background Colors (Bright) ---
constexpr cANSI_t bg_bright_black   = "\x1b[100m";
constexpr cANSI_t bg_bright_red     = "\x1b[101m";
constexpr cANSI_t bg_bright_green   = "\x1b[102m";
constexpr cANSI_t bg_bright_yellow  = "\x1b[103m";
constexpr cANSI_t bg_bright_blue    = "\x1b[104m";
constexpr cANSI_t bg_bright_magenta = "\x1b[105m";
constexpr cANSI_t bg_bright_cyan    = "\x1b[106m";
constexpr cANSI_t bg_bright_white   = "\x1b[107m";
} // namespace ansi

#endif // ANSI_HPP