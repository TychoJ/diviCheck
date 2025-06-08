#include <wx/wx.h>
#include "mainFrame.hpp"
 
class MyApp : public wxApp {
public:
    bool OnInit() override;
};
 
wxIMPLEMENT_APP(MyApp);
 
bool MyApp::OnInit() {
    MainFrame *frame = new MainFrame();
    frame->Show(true);
    return true;
}