/*
  ==============================================================================

    CustomButtons.cpp
    Created: 24 Dec 2023 1:05:52am 
    Author: maririn312

  ==============================================================================
*/

#include "CustomButtons.h"

void AnalyzerButton::resized()
{
    auto bounds = getLocalBounds();
    auto insetRect = bounds.reduced(4);
    
    randomPath.clear();
    
    juce::Random r;
    
    randomPath.startNewSubPath(insetRect.getX(),
                               insetRect.getY() + insetRect.getHeight() * r.nextFloat());
    
    for( auto x = insetRect.getX() + 1; x < insetRect.getRight(); x += 2 )
    {
        randomPath.lineTo(x,
                          insetRect.getY() + insetRect.getHeight() * r.nextFloat());
    }
}
