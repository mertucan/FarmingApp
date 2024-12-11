#pragma once

using namespace System;

public ref class User {
public:
    int id;
    String^ username;
    String^ password;
    String^ phone_number;
    String^ email;
    double budget;

    User() {
        id = 0;
        username = "";
        password = "";
        phone_number = "";
        email = "";
        budget = 0.0;
    }

    // Yapıcı metod (constructor)
    User(int farmersId, String^ username, String^ password, String^ phoneNumber, String^ email, double budget) {
        id = farmersId;
        this->username = username;
        this->password = password;
        this->phone_number = phoneNumber;
        this->email = email;
        this->budget = budget;
    }
};
