#include "exterminate_agents.h"

void mx_exterminate_agents(t_agent ***agents) { // agent -> agents -> &agents
	t_agent **agent_list = *agents;

	for (int i = 0; agent_list[i]; i++) {
		free(agent_list[i]->name);
		free(&agent_list[i]->power);
		free(&agent_list[i]->strength);
		free(agent_list[i]);
	}
	free(agent_list);
	agents = NULL;
}

