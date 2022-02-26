// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Signers.IDsaKCalculator
#include "Org/BouncyCastle/Crypto/Signers/IDsaKCalculator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: RandomDsaKCalculator
  class RandomDsaKCalculator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*, "Org.BouncyCastle.Crypto.Signers", "RandomDsaKCalculator");
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.RandomDsaKCalculator
  // [TokenAttribute] Offset: FFFFFFFF
  class RandomDsaKCalculator : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private Org.BouncyCastle.Math.BigInteger q
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Math::BigInteger* q;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator
    operator ::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*>(this);
    }
    // Get instance field reference: private Org.BouncyCastle.Math.BigInteger q
    ::Org::BouncyCastle::Math::BigInteger*& dyn_q();
    // Get instance field reference: private Org.BouncyCastle.Security.SecureRandom random
    ::Org::BouncyCastle::Security::SecureRandom*& dyn_random();
    // public System.Boolean get_IsDeterministic()
    // Offset: 0x156EE0C
    bool get_IsDeterministic();
    // public System.Void Init(Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Security.SecureRandom random)
    // Offset: 0x156EE14
    void Init(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Security::SecureRandom* random);
    // public System.Void Init(Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger d, System.Byte[] message)
    // Offset: 0x156EE1C
    void Init(::Org::BouncyCastle::Math::BigInteger* n, ::Org::BouncyCastle::Math::BigInteger* d, ::ArrayW<uint8_t> message);
    // public Org.BouncyCastle.Math.BigInteger NextK()
    // Offset: 0x156EE88
    ::Org::BouncyCastle::Math::BigInteger* NextK();
    // public System.Void .ctor()
    // Offset: 0x1567F70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RandomDsaKCalculator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RandomDsaKCalculator*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Signers.RandomDsaKCalculator
  #pragma pack(pop)
  static check_size<sizeof(RandomDsaKCalculator), 24 + sizeof(::Org::BouncyCastle::Security::SecureRandom*)> __Org_BouncyCastle_Crypto_Signers_RandomDsaKCalculatorSizeCheck;
  static_assert(sizeof(RandomDsaKCalculator) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::get_IsDeterministic
// Il2CppName: get_IsDeterministic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::*)()>(&Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::get_IsDeterministic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*), "get_IsDeterministic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Security::SecureRandom*)>(&Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::Init)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* random = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, random});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::Init)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    static auto* message = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n, d, message});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::NextK
// Il2CppName: NextK
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::*)()>(&Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::NextK)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator*), "NextK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Signers::RandomDsaKCalculator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
