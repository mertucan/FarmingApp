#pragma once

namespace FarmingApp {

    public ref class FormSwitch
    {
    public:
        static void SwitchForm(System::Windows::Forms::Form^ currentForm, System::Windows::Forms::Form^ nextForm);
    };
}