#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
    if (name == NULL || power == NULL || strength == NULL) {
        return NULL;
    }
    t_agent **agents = (t_agent **)malloc(count * sizeof(t_agent *));
    for (int i = 0; i < count; i++) {
        agents[i] = mx_create_agent(name[i], power[i], strength[i]);
    }
    return agents;
}


















