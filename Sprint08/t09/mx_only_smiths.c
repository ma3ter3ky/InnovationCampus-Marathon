#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength) {
    int smith_counter = 0;
    for (int i = 0; agents[i] != NULL; i++)
        if (mx_strcmp(agents[i]->name, "Smith") == 0 && agents[i]->strength < strength) {
            smith_counter++;
        }
    if (smith_counter == 0) {
        return NULL;
        }
    t_agent **only_smiths = (t_agent **) (malloc((smith_counter + 1) * sizeof(t_agent *)));
    smith_counter = 0;
    for (int i = 0; agents[i] != NULL; i++)
        if (mx_strcmp(agents[i]->name, "Smith") == 0 && agents[i]->strength < strength) {
            only_smiths[smith_counter] = mx_create_agent(agents[i]->name, agents[i]->power, agents[i]->strength);
            smith_counter++;
        }
    only_smiths[smith_counter] = NULL;
    //mx_exterminate_agents(agents);
    return only_smiths;
}









