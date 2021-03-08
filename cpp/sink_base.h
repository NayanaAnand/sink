#ifndef SINK_BASE_IMPL_BASE_H
#define SINK_BASE_IMPL_BASE_H

#include <boost/thread.hpp>
#include <ossie/Component.h>
#include <ossie/ThreadedComponent.h>

#include <bulkio/bulkio.h>

class sink_base : public Component, protected ThreadedComponent
{
    public:
        sink_base(const char *uuid, const char *label);
        ~sink_base();

        void start() throw (CF::Resource::StartError, CORBA::SystemException);

        void stop() throw (CF::Resource::StopError, CORBA::SystemException);

        void releaseObject() throw (CF::LifeCycle::ReleaseError, CORBA::SystemException);

        void loadProperties();

    protected:

        // Ports
        /// Port: input
        bulkio::InShortPort *input;

    private:
};
#endif // SINK_BASE_IMPL_BASE_H
