// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IDsaExt
#include "Org/BouncyCastle/Crypto/IDsaExt.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Gost3410KeyParameters
  class Gost3410KeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: Gost3410Signer
  class Gost3410Signer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::Gost3410Signer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::Gost3410Signer*, "Org.BouncyCastle.Crypto.Signers", "Gost3410Signer");
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.Gost3410Signer
  // [TokenAttribute] Offset: FFFFFFFF
  class Gost3410Signer : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IDsaExt*/ {
    public:
    public:
    // private Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters key
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters* key;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters*) == 0x8);
    // private Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IDsaExt
    operator ::Org::BouncyCastle::Crypto::IDsaExt() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IDsaExt*>(this);
    }
    // Creating interface conversion operator: i_IDsaExt
    inline ::Org::BouncyCastle::Crypto::IDsaExt* i_IDsaExt() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IDsaExt*>(this);
    }
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters key
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters*& dyn_key();
    // Get instance field reference: private Org.BouncyCastle.Security.SecureRandom random
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Security::SecureRandom*& dyn_random();
    // public Org.BouncyCastle.Math.BigInteger get_Order()
    // Offset: 0x16495AC
    ::Org::BouncyCastle::Math::BigInteger* get_Order();
    // public System.Void .ctor()
    // Offset: 0x164980C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3410Signer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Signers::Gost3410Signer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3410Signer*, creationType>()));
    }
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1649420
    void Init(bool forSigning, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public Org.BouncyCastle.Math.BigInteger[] GenerateSignature(System.Byte[] message)
    // Offset: 0x16495D4
    ::ArrayW<::Org::BouncyCastle::Math::BigInteger*> GenerateSignature(::ArrayW<uint8_t> message);
  }; // Org.BouncyCastle.Crypto.Signers.Gost3410Signer
  #pragma pack(pop)
  static check_size<sizeof(Gost3410Signer), 24 + sizeof(::Org::BouncyCastle::Security::SecureRandom*)> __Org_BouncyCastle_Crypto_Signers_Gost3410SignerSizeCheck;
  static_assert(sizeof(Gost3410Signer) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Gost3410Signer::get_Order
// Il2CppName: get_Order
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Signers::Gost3410Signer::*)()>(&Org::BouncyCastle::Crypto::Signers::Gost3410Signer::get_Order)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Gost3410Signer*), "get_Order", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Gost3410Signer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Gost3410Signer::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::Gost3410Signer::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Signers::Gost3410Signer::Init)> {
  static const MethodInfo* get() {
    static auto* forSigning = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Gost3410Signer*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forSigning, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::Gost3410Signer::GenerateSignature
// Il2CppName: GenerateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger*> (Org::BouncyCastle::Crypto::Signers::Gost3410Signer::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Signers::Gost3410Signer::GenerateSignature)> {
  static const MethodInfo* get() {
    static auto* message = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::Gost3410Signer*), "GenerateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
