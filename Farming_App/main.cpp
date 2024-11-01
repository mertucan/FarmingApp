#include "LoginForm.h"
#include "RegisterForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Giriþ Formu
    FarmingApp::LoginForm loginForm;
    //Application::Run(% loginForm);

    // Kayýt Formu
    FarmingApp::RegisterForm registerForm;
    Application::Run(% registerForm);

    return 0;
}
