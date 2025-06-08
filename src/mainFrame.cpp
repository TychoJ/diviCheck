#include <wx/wx.h>
#include "mainFrame.hpp"

MainFrame::MainFrame() : wxFrame(nullptr, wxID_ANY, "diviCheck") { 
    CreateStatusBar();
    // SetStatusText("Welcome to wxWidgets!");

}