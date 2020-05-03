#include "CppBindingLibs.h"
#include "System/MessageManager.h"
#include "lua.h"
namespace proto
{
	int _send(lua_State* L)
	{
		size_t len = 0;
		const char* c = luaL_checklstring(L, 1, &len);
		std::string msg(c, len);

		if (AMessageManager::CheckValid()) {
			AMessageManager::I()->SendMessage(msg);
		}
		return 1;
	}
}