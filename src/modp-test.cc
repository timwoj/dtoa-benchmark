// {fmt} test with the compact Dragonbox cache (the default).

#include <cstdio>

#include "benchmark.h"
#include "modp_numtoa/modp_numtoa.h"

static register_method _("modp", [](double value, char* buffer) {
  modp_dtoa2(value, buffer, 18);
});
