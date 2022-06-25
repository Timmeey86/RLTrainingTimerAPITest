#pragma once
#pragma comment(lib, "PluginSDK.lib")
#include "bakkesmod/plugin/bakkesmodplugin.h"

class RLTrainingTimerAPITest : public BakkesMod::Plugin::BakkesModPlugin
{
public:
	virtual ~RLTrainingTimerAPITest() = default;

	void onLoad() override;
	void onUnload() override;
};
