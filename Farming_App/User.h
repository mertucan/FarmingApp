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
};