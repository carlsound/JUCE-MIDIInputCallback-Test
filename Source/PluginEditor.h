/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
//
#include "MidiManager.h"
#include "MidiMessagesGuiComponent.h"


//==============================================================================
/**
*/
class MidiInputCallbackTestAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    MidiInputCallbackTestAudioProcessorEditor (MidiInputCallbackTestAudioProcessor&);
    ~MidiInputCallbackTestAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    MidiInputCallbackTestAudioProcessor& processor;
    //
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MidiInputCallbackTestAudioProcessorEditor)
	//
	//std::shared_ptr<MidiManager> midi_mgr_;
	std::shared_ptr<MidiMessagesGuiComponent> msg_gui_component_;
	//ScopedPointer<MidiMessagesGuiComponent> msg_gui_component_;
	//
	MidiMessageCollector midi_message_collector_;
};
