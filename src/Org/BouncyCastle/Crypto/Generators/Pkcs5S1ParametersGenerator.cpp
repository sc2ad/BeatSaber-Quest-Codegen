// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Generators.Pkcs5S1ParametersGenerator
#include "Org/BouncyCastle/Crypto/Generators/Pkcs5S1ParametersGenerator.hpp"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Generators.Pkcs5S1ParametersGenerator..ctor
Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator* Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::New_ctor(Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(il2cpp_utils::New<Pkcs5S1ParametersGenerator*>(digest));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Generators.Pkcs5S1ParametersGenerator.GenerateDerivedKey
::Array<uint8_t>* Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedKey() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GenerateDerivedKey"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Generators.Pkcs5S1ParametersGenerator.GenerateDerivedParameters
Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedParameters(::Il2CppString* algorithm, int keySize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Crypto::ICipherParameters*>(this, "GenerateDerivedParameters", algorithm, keySize));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Generators.Pkcs5S1ParametersGenerator.GenerateDerivedParameters
Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedParameters(::Il2CppString* algorithm, int keySize, int ivSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Crypto::ICipherParameters*>(this, "GenerateDerivedParameters", algorithm, keySize, ivSize));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Generators.Pkcs5S1ParametersGenerator.GenerateDerivedMacParameters
Org::BouncyCastle::Crypto::ICipherParameters* Org::BouncyCastle::Crypto::Generators::Pkcs5S1ParametersGenerator::GenerateDerivedMacParameters(int keySize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Crypto::ICipherParameters*>(this, "GenerateDerivedMacParameters", keySize));
}