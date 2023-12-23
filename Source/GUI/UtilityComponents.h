/*
  ==============================================================================

    UtilityComponents.h
    Created: 24 Dec 2023 1:05:52am
    Author: maririn312

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

struct Placeholder : juce::Component
{
    Placeholder();
    
    void paint(juce::Graphics& g) override;
    
    juce::Colour customColor;
};

struct RotarySlider : juce::Slider
{
    RotarySlider();
};
