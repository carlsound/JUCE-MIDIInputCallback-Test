/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.2.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MidiMessagesGuiComponent  : public Component,
                                  MidiInputCallback
{
public:
    //==============================================================================
    MidiMessagesGuiComponent ();
    ~MidiMessagesGuiComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	MidiInputCallback* getMIdiInputCallback();
    void setLabel(String message);
    void setSampleRate(double sampleRate);
	void handleIncomingMidiMessage(MidiInput *source, const MidiMessage &message) override;
	void handlePartialSysexMessage(MidiInput *source, const uint8 *messageData, int numBytesSoFar, double timestamp) override;
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	MidiMessageCollector midi_message_collector_;
    double sample_rate_;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Label> midi_messages_label_;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MidiMessagesGuiComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
