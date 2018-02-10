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
	//
	device_manager_ = std::make_shared<DeviceManager>();
	msg_gui_component_ = std::make_shared<MidiMessagesGuiComponent>();
    //
    msg_gui_component_->setSampleRate(p.getSampleRate());
	//
	device_manager_->setMidiInputCallback(msg_gui_component_->getMIdiInputCallback());
	//
	addAndMakeVisible(*msg_gui_component_, -1);
}

MidiInputCallbackTestAudioProcessorEditor::~MidiInputCallbackTestAudioProcessorEditor()
{
	device_manager_ = nullptr;
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
