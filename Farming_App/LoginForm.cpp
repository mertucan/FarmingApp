#include "LoginForm.h"

using namespace FarmingApp;

[STAThread]
void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew LoginForm);
}
