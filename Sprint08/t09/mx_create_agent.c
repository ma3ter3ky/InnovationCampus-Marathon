#include "only_smiths.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    if (name == NULL) {
        return NULL;
    }
    t_agent *agent = malloc(sizeof(t_agent));
    if (agent == NULL) {
        return NULL;
    }
    agent->name = mx_strdup(name);
    agent->power = power;
    agent->strength = strength;
    return agent;
}















