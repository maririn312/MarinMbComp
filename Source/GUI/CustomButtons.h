/*
  ==============================================================================

    CustomButtons.h
    Created: 24 Dec 2023 1:05:52am 
    Author: maririn312

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

struct PowerButton : juce::ToggleButton { };

struct AnalyzerButton : juce::ToggleButton
{
    void resized() override;
    
    juce::Path randomPath;
};
