// Fill out your copyright notice in the Description page of Project Settings.

#include "Survive.h"
#include "Modules/ModuleManager.h"
#include "Private/LuaContext.h"
#include "lua.h"
//using namespace UnLua;
IMPLEMENT_PRIMARY_GAME_MODULE(FSurviveModule, Survive, "Survive" );
void FSurviveModule::StartupModule()
{
	//if(GLuaCxt) //lua_State * L = GLuaCxt->L;
	FModuleManager::Get().LoadModule(TEXT("SurviveEditor"));
}

void FSurviveModule::ShutdownModule()
{

}