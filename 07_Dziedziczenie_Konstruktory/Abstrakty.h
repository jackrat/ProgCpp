#pragma once

using namespace System;

ref class KlasaAbstr abstract { //wystarczy choæby jedna "pure virtual" ¿eby klasa by³a abstrakcyjna
public:
	virtual void Met0() {}
	virtual void Met1(String^ s) = 0;// pure virtual method (czysto wirtualna/abstrakcyjna)
	virtual int Met2(int i) { return 0; }
};

ref class KlasaPotom : KlasaAbstr
{
public:
	virtual void Met1(String^ s) override {} // override / new
};

ref class KlasaAbstr2 abstract { //interfejs
public:
	virtual void Met0() = 0;
	virtual void Met1(String^ s) = 0;
	virtual int Met2(int i) = 0;
};

interface class IInterface1 { //interfejs
	virtual void Met0() = 0;
	virtual void Met1(String^ s) = 0;
	virtual int Met2(int i) = 0;
};


ref class KlasaPotom2 : IInterface1
{
public:
	virtual void Met0() override {}
	virtual void Met1(String^ s) override {}
	virtual int Met2(int fff) override { return 123; }

};


class KlasaA {
public:
	virtual void Met0() {}
};

class KlasaB {
public:
	virtual void Met1(String^ s) {}
	virtual int Met2(int i) { return 0; }
};

class KlasaC : public KlasaA, public KlasaB // dziedziczenie publiczne!
{
public:
	virtual int Met3(int i) { return 0; }
};

//ref class KlasaD :KlasaA {};// klasa ref nie mo¿e dziedziczyæ z klasy std

//class KlasaE :KlasaPotom {};// klasa std nie moze dziedziczyæ z klasy ref