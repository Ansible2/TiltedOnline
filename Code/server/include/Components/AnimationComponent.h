#pragma once

#ifndef TP_INTERNAL_COMPONENTS_GUARD
#error Include Components.h instead
#endif

#include <ActionEvent.h>

struct AnimationComponent
{
    Vector<ActionEvent> Actions;
    ActionEvent CurrentAction;
    ActionEvent LastSerializedAction;
};
