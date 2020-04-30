#pragma once

#include "lua.hpp"

int PBCLIB_API luaopen_protobuf_c(lua_State *L);

void PBCLIB_API lua_OpenLib(lua_State *L, lua_CFunction fn, const char *k);