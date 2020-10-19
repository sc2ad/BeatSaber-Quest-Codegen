// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.DerVisibleString
#include "Org/BouncyCastle/Asn1/DerVisibleString.hpp"
// Including type: Org.BouncyCastle.Asn1.DerOutputStream
#include "Org/BouncyCastle/Asn1/DerOutputStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Asn1.DerVisibleString..ctor
Org::BouncyCastle::Asn1::DerVisibleString* Org::BouncyCastle::Asn1::DerVisibleString::New_ctor(::Array<uint8_t>* str) {
  return THROW_UNLESS(il2cpp_utils::New<DerVisibleString*>(str));
}
// Autogenerated method: Org.BouncyCastle.Asn1.DerVisibleString..ctor
Org::BouncyCastle::Asn1::DerVisibleString* Org::BouncyCastle::Asn1::DerVisibleString::New_ctor(::Il2CppString* str) {
  return THROW_UNLESS(il2cpp_utils::New<DerVisibleString*>(str));
}
// Autogenerated method: Org.BouncyCastle.Asn1.DerVisibleString.GetOctets
::Array<uint8_t>* Org::BouncyCastle::Asn1::DerVisibleString::GetOctets() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetOctets"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.DerVisibleString.GetString
::Il2CppString* Org::BouncyCastle::Asn1::DerVisibleString::GetString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GetString"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.DerVisibleString.Encode
void Org::BouncyCastle::Asn1::DerVisibleString::Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Encode", derOut));
}
// Autogenerated method: Org.BouncyCastle.Asn1.DerVisibleString.Asn1Equals
bool Org::BouncyCastle::Asn1::DerVisibleString::Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Asn1Equals", asn1Object));
}
// Autogenerated method: Org.BouncyCastle.Asn1.DerVisibleString.Asn1GetHashCode
int Org::BouncyCastle::Asn1::DerVisibleString::Asn1GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Asn1GetHashCode"));
}