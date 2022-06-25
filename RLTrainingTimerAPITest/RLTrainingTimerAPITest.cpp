#include "RLTrainingTimerAPITest.h"

BAKKESMOD_PLUGIN(RLTrainingTimerAPITest, "Temporary plugin for testing", "1.0", PLUGINTYPE_FREEPLAY)

void RLTrainingTimerAPITest::onLoad()
{
	cvarManager->registerNotifier("rltt_api_test", [this](const std::vector<std::string>&) {
		cvarManager->executeCommand("rltt_inject_and_load_training_program uuid_goes_here json_content_goes_here");




		cvarManager->executeCommand("rltt_inject_and_load_training_program uuid_goes_here this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_this_is_a_very_long_string_which_simulates_a_long_json_string_");
	}, "", PERMISSION_ALL);
}
void RLTrainingTimerAPITest::onUnload() {}