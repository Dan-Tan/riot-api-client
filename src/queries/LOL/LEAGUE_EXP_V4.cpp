#include "../../client.h"
#include <string>
#define encode(x) (std::string(curl_easy_escape(this->easy_handle, x.c_str(), x.length())))


Json::Value RiotApiClient::LEAGUE_EXP_V4(std::string queue, std::string tier, std::string division, std::string region) {
    queue = ENCODE(queue); tier = ENCODE(tier); division = ENCODE(DIVISION);
    std::string end_url = "/lol/league-exp/v4/entries/" + queue + "/" + tier + "/" + division;
    return this->get(end_url, region, NULL);
}
