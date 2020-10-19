// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Org.BouncyCastle.Asn1.DerSet
#include "Org/BouncyCastle/Asn1/DerSet.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1EncodableVector
#include "Org/BouncyCastle/Asn1/Asn1EncodableVector.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
// Including type: Org.BouncyCastle.Asn1.DerOutputStream
#include "Org/BouncyCastle/Asn1/DerOutputStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly Org.BouncyCastle.Asn1.DerSet Empty
Org::BouncyCastle::Asn1::DerSet* Org::BouncyCastle::Asn1::DerSet::_get_Empty() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Org::BouncyCastle::Asn1::DerSet*>("Org.BouncyCastle.Asn1", "DerSet", "Empty"));
}
// Autogenerated static field setter
// Set static field: static public readonly Org.BouncyCastle.Asn1.DerSet Empty
void Org::BouncyCastle::Asn1::DerSet::_set_Empty(Org::BouncyCastle::Asn1::DerSet* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Asn1", "DerSet", "Empty", value));
}
// Autogenerated method: Org.BouncyCastle.Asn1.DerSet.FromVector
Org::BouncyCastle::Asn1::DerSet* Org::BouncyCastle::Asn1::DerSet::FromVector(Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::DerSet*>("Org.BouncyCastle.Asn1", "DerSet", "FromVector", elementVector, needsSorting));
}
// Autogenerated method: Org.BouncyCastle.Asn1.DerSet..ctor
Org::BouncyCastle::Asn1::DerSet* Org::BouncyCastle::Asn1::DerSet::New_ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector, bool needsSorting) {
  return THROW_UNLESS(il2cpp_utils::New<DerSet*>(elementVector, needsSorting));
}
// Autogenerated method: Org.BouncyCastle.Asn1.DerSet..cctor
void Org::BouncyCastle::Asn1::DerSet::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Asn1", "DerSet", ".cctor"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.DerSet..ctor
Org::BouncyCastle::Asn1::DerSet* Org::BouncyCastle::Asn1::DerSet::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<DerSet*>());
}
// Autogenerated method: Org.BouncyCastle.Asn1.DerSet..ctor
Org::BouncyCastle::Asn1::DerSet* Org::BouncyCastle::Asn1::DerSet::New_ctor(Org::BouncyCastle::Asn1::Asn1Encodable* element) {
  return THROW_UNLESS(il2cpp_utils::New<DerSet*>(element));
}
// Autogenerated method: Org.BouncyCastle.Asn1.DerSet..ctor
Org::BouncyCastle::Asn1::DerSet* Org::BouncyCastle::Asn1::DerSet::New_ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector* elementVector) {
  return THROW_UNLESS(il2cpp_utils::New<DerSet*>(elementVector));
}
// Autogenerated method: Org.BouncyCastle.Asn1.DerSet.Encode
void Org::BouncyCastle::Asn1::DerSet::Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Encode", derOut));
}