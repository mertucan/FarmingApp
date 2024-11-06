#include "FormSwitch.h"
#include "RegisterForm.h"

namespace FarmingApp {

    void FormSwitch::SwitchForm(System::Windows::Forms::Form^ currentForm, System::Windows::Forms::Form^ nextForm)
    {
        currentForm->Hide();        // Geçerli formu gizle
        nextForm->Show();           // Yeni formu göster
        nextForm->BringToFront();   // Yeni formu ön plana getir
    }
}