#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// AllSingleton/Contacts
struct Contacts_t352143704;
struct Contacts_t352143704_marshaled_pinvoke;
struct Contacts_t352143704_marshaled_com;

#include "codegen/il2cpp-codegen.h"


// Methods for marshaling
struct Contacts_t352143704;
struct Contacts_t352143704_marshaled_pinvoke;

extern "C" void Contacts_t352143704_marshal_pinvoke(const Contacts_t352143704& unmarshaled, Contacts_t352143704_marshaled_pinvoke& marshaled);
extern "C" void Contacts_t352143704_marshal_pinvoke_back(const Contacts_t352143704_marshaled_pinvoke& marshaled, Contacts_t352143704& unmarshaled);
extern "C" void Contacts_t352143704_marshal_pinvoke_cleanup(Contacts_t352143704_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Contacts_t352143704;
struct Contacts_t352143704_marshaled_com;

extern "C" void Contacts_t352143704_marshal_com(const Contacts_t352143704& unmarshaled, Contacts_t352143704_marshaled_com& marshaled);
extern "C" void Contacts_t352143704_marshal_com_back(const Contacts_t352143704_marshaled_com& marshaled, Contacts_t352143704& unmarshaled);
extern "C" void Contacts_t352143704_marshal_com_cleanup(Contacts_t352143704_marshaled_com& marshaled);
