/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
MidiInputCallbackTestAudioProcessorEditor::MidiInputCallbackTestAudioProcessorEditor (MidiInputCallbackTestAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
	//midi_mgr_ = std::make_shared<MidiManager>();
	msg_gui_component_ = std::make_shared<MidiMessagesGuiComponent>();
	//addChildComponent(*msg_gui_component_);
	addAndMakeVisible(*msg_gui_component_, -1);
	//addAndMakeVisible(msg_gui_component_(new MidiMessagesGuiComponent));
	//addAndMakeVisible(msg_gui_component_(new MidiMessagesGuiComponent));
}

MidiInputCallbackTestAudioProcessorEditor::~MidiInputCallbackTestAudioProcessorEditor()
{
	//midi_mgr_ = nullptr;
	msg_gui_component_ = nullptr;
}

//==============================================================================
void MidiInputCallbackTestAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
}

void MidiInputCallbackTestAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}