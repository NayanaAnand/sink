#ifndef SINK_I_IMPL_H
#define SINK_I_IMPL_H

#include "sink_base.h"

class sink_i : public sink_base
{
    ENABLE_LOGGING
    public:
        sink_i(const char *uuid, const char *label);
        ~sink_i();

        void constructor();

        int serviceFunction();

    protected:
};

#endif // SINK_I_IMPL_H
