#include <map>

enum ENUniversities
{
    FAST_NUCES,
    SZABIST,
    SIR_SYED
};

// Map enum values to their string representations
const map<ENUniversities, string> universityNames = {
    {FAST_NUCES, "FAST NUCES"},
    {SZABIST, "SZABIST"},
    {SIR_SYED, "SIR SYED"}
};