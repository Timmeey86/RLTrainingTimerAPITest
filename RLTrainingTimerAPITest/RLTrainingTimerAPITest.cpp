#include "RLTrainingTimerAPITest.h"

BAKKESMOD_PLUGIN(RLTrainingTimerAPITest, "Temporary plugin for testing", "1.0", PLUGINTYPE_FREEPLAY)

void RLTrainingTimerAPITest::onLoad()
{
	cvarManager->registerNotifier("rltt_api_test", [this](const std::vector<std::string>&) {

		auto pluginManager = gameWrapper->GetPluginManager();

		// Inspect all currently loaded plugins
		auto pluginWasFound = false;
		for (const auto& plugin : *pluginManager.GetLoadedPlugins())
		{
			// Skip any plugin which is not RLTrainingTimer
			auto pluginInfo = plugin->_details;
			if (pluginInfo->className != "RLTrainingTimer") continue;

			// Check if RLTrainingTimer has the expected major version
			auto version = std::string(pluginInfo->pluginVersion);
			if (version.rfind("1.", 0) != 0)
			{
				cvarManager->log(std::string("Expected RLTrainingTimer major version 1.x but found " + version));
				break;
			}
			cvarManager->log(std::string(pluginInfo->className) + ", " + std::string(pluginInfo->pluginVersion));
		}
		if (!pluginWasFound)
		{
			cvarManager->log("RLTrainingTimer does not seem to be installed, or it has the wrong version!");
		}
	}, "", PERMISSION_ALL);
}
void RLTrainingTimerAPITest::onUnload() {}