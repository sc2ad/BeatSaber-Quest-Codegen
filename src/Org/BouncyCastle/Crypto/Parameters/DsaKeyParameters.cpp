// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/DsaKeyParameters.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.DsaParameters
#include "Org/BouncyCastle/Crypto/Parameters/DsaParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters..ctor
Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters* Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::New_ctor(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::DsaParameters* parameters) {
  return THROW_UNLESS(il2cpp_utils::New<DsaKeyParameters*>(isPrivate, parameters));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters.get_Parameters
Org::BouncyCastle::Crypto::Parameters::DsaParameters* Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::get_Parameters() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Crypto::Parameters::DsaParameters*>(this, "get_Parameters"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters.Equals
bool Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::Equals(Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters* other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", other));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters.Equals
bool Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::Equals(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters.GetHashCode
int Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}