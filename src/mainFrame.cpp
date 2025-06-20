/*
* This program source code file is part of diviCheck, a free EDA application.
* Copyright (C) The diviCheck Developers, see AUTHORS.txt for contributors.
* 
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU Affero General Public License as published
* by the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
* 
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Affero General Public License for more details.
* 
* You should have received a copy of the GNU Affero General Public License
* along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <wx/wx.h>
#include <wx/splitter.h>
#include "mainFrame.hpp"

MainFrame::MainFrame() : wxFrame(nullptr, wxID_ANY, "diviCheck", wxDefaultPosition, wxDefaultSize) { 
    CreateStatusBar();
    SetStatusText("Welcome to diviCheck!");


    wxSplitterWindow *settingsSplitter = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_BORDER | wxSP_LIVE_UPDATE);
    wxSplitterWindow *commandsSplitter = new wxSplitterWindow(settingsSplitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_BORDER | wxSP_LIVE_UPDATE);

    wxPanel *panelLeft   = new wxPanel(settingsSplitter);
    wxPanel *panelRight  = new wxPanel(commandsSplitter);
    wxPanel *panelBottom = new wxPanel(commandsSplitter);
    
    commandsSplitter->SetMinimumPaneSize(100);
    commandsSplitter->SplitHorizontally(panelRight, panelBottom);
    commandsSplitter->SetSashGravity(1.0);
    
    settingsSplitter->SetMinimumPaneSize(200);
    settingsSplitter->SplitVertically(panelLeft, commandsSplitter);
}