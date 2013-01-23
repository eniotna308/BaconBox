/**
 * @file
 * @ingroup Display
 */
#ifndef BB_LUA_MANAGER_H
#define BB_LUA_MANAGER_H

	#include "lua.hpp"
 	#include <string>

namespace BaconBox {

	class LuaManager {
	public:
		LuaManager();
		void doString(const std::string & string);

	private:
		lua_State *L;

	};

}
#endif
