// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1EncodableVector
#include "Org/BouncyCastle/Asn1/Asn1EncodableVector.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static readonly Org.BouncyCastle.Asn1.Asn1Encodable[] EmptyElements
::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* Org::BouncyCastle::Asn1::Asn1EncodableVector::_get_EmptyElements() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>*>("Org.BouncyCastle.Asn1", "Asn1EncodableVector", "EmptyElements"));
}
// Autogenerated static field setter
// Set static field: static readonly Org.BouncyCastle.Asn1.Asn1Encodable[] EmptyElements
void Org::BouncyCastle::Asn1::Asn1EncodableVector::_set_EmptyElements(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Asn1", "Asn1EncodableVector", "EmptyElements", value));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1EncodableVector..ctor
Org::BouncyCastle::Asn1::Asn1EncodableVector* Org::BouncyCastle::Asn1::Asn1EncodableVector::New_ctor(int initialCapacity) {
  return THROW_UNLESS(il2cpp_utils::New<Asn1EncodableVector*>(initialCapacity));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1EncodableVector..ctor
Org::BouncyCastle::Asn1::Asn1EncodableVector* Org::BouncyCastle::Asn1::Asn1EncodableVector::New_ctor(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* v) {
  return THROW_UNLESS(il2cpp_utils::New<Asn1EncodableVector*>(v));
}
// Creating initializer_list -> params proxy for: System.Void .ctor(params Org.BouncyCastle.Asn1.Asn1Encodable[] v)
Org::BouncyCastle::Asn1::Asn1EncodableVector* Org::BouncyCastle::Asn1::Asn1EncodableVector::New_ctor(std::initializer_list<Org::BouncyCastle::Asn1::Asn1Encodable*> v) {
  return Org::BouncyCastle::Asn1::Asn1EncodableVector::New_ctor(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>::New(v));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1EncodableVector.Add
void Org::BouncyCastle::Asn1::Asn1EncodableVector::Add(Org::BouncyCastle::Asn1::Asn1Encodable* element) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", element));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1EncodableVector.Add
void Org::BouncyCastle::Asn1::Asn1EncodableVector::Add(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* objs) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", objs));
}
// Creating initializer_list -> params proxy for: System.Void Add(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
void Org::BouncyCastle::Asn1::Asn1EncodableVector::Add(std::initializer_list<Org::BouncyCastle::Asn1::Asn1Encodable*> objs) {
  Org::BouncyCastle::Asn1::Asn1EncodableVector::Add(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>::New(objs));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1EncodableVector.AddOptional
void Org::BouncyCastle::Asn1::Asn1EncodableVector::AddOptional(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* objs) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddOptional", objs));
}
// Creating initializer_list -> params proxy for: System.Void AddOptional(params Org.BouncyCastle.Asn1.Asn1Encodable[] objs)
void Org::BouncyCastle::Asn1::Asn1EncodableVector::AddOptional(std::initializer_list<Org::BouncyCastle::Asn1::Asn1Encodable*> objs) {
  Org::BouncyCastle::Asn1::Asn1EncodableVector::AddOptional(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>::New(objs));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1EncodableVector.AddOptionalTagged
void Org::BouncyCastle::Asn1::Asn1EncodableVector::AddOptionalTagged(bool isExplicit, int tagNo, Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddOptionalTagged", isExplicit, tagNo, obj));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1EncodableVector.get_Item
Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Asn1::Asn1EncodableVector::get_Item(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::Asn1Encodable*>(this, "get_Item", index));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1EncodableVector.get_Count
int Org::BouncyCastle::Asn1::Asn1EncodableVector::get_Count() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1EncodableVector.CopyElements
::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* Org::BouncyCastle::Asn1::Asn1EncodableVector::CopyElements() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>*>(this, "CopyElements"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1EncodableVector.TakeElements
::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* Org::BouncyCastle::Asn1::Asn1EncodableVector::TakeElements() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>*>(this, "TakeElements"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1EncodableVector.Reallocate
void Org::BouncyCastle::Asn1::Asn1EncodableVector::Reallocate(int minCapacity) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reallocate", minCapacity));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1EncodableVector.CloneElements
::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* Org::BouncyCastle::Asn1::Asn1EncodableVector::CloneElements(::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>* elements) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<Org::BouncyCastle::Asn1::Asn1Encodable*>*>("Org.BouncyCastle.Asn1", "Asn1EncodableVector", "CloneElements", elements));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1EncodableVector..cctor
void Org::BouncyCastle::Asn1::Asn1EncodableVector::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Asn1", "Asn1EncodableVector", ".cctor"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1EncodableVector..ctor
Org::BouncyCastle::Asn1::Asn1EncodableVector* Org::BouncyCastle::Asn1::Asn1EncodableVector::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<Asn1EncodableVector*>());
}
// Autogenerated method: Org.BouncyCastle.Asn1.Asn1EncodableVector.GetEnumerator
System::Collections::IEnumerator* Org::BouncyCastle::Asn1::Asn1EncodableVector::GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "GetEnumerator"));
}
System::Collections::IEnumerator* Org::BouncyCastle::Asn1::Asn1EncodableVector::System_Collections_IEnumerable_GetEnumerator() {
  return Org::BouncyCastle::Asn1::Asn1EncodableVector::GetEnumerator();
}