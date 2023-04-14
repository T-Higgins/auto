//------------------------------------------------------------------------
// Copyright(c) 2023 Bobbo Studios.
//------------------------------------------------------------------------

#pragma once
#include "public.sdk/source/vst/vstaudioeffect.h"

namespace Steinberg {
    namespace Vst {
        // define the processor class for Volumer2 here
        class Volumer2Processor : public AudioEffect {
        public:
            Volumer2Processor();
            virtual ~Volumer2Processor();
            tresult PLUGIN_API initialize(FUnknown* context) SMTG_OVERRIDE;
            tresult PLUGIN_API process(ProcessData& data) SMTG_OVERRIDE;
            tresult PLUGIN_API setBusArrangements(SpeakerArrangement* inputs, int32 numIns, SpeakerArrangement* outputs, int32 numOuts) SMTG_OVERRIDE;
        };
    }
}
