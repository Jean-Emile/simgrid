/* Copyright (c) 2010-2018. The SimGrid Team. All rights reserved.          */

/* This program is free software; you can redistribute it and/or modify it
 * under the terms of the license (GNU LGPL) which comes with this package. */

#ifndef AMPI_HPP
#define AMPI_HPP

#include <simgrid/s4u.hpp>

namespace simgrid {
namespace smpi {
namespace plugin {
namespace ampi {
  extern simgrid::xbt::signal<void(simgrid::s4u::ActorPtr)> on_iteration_out;
  extern simgrid::xbt::signal<void(simgrid::s4u::ActorPtr)> on_iteration_in;
}
}
}
}

#endif
