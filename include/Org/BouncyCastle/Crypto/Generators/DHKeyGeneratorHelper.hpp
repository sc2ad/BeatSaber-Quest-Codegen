// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DHParameters
  class DHParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Generators
namespace Org::BouncyCastle::Crypto::Generators {
  // Forward declaring type: DHKeyGeneratorHelper
  class DHKeyGeneratorHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*, "Org.BouncyCastle.Crypto.Generators", "DHKeyGeneratorHelper");
// Type namespace: Org.BouncyCastle.Crypto.Generators
namespace Org::BouncyCastle::Crypto::Generators {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class DHKeyGeneratorHelper : public ::Il2CppObject {
    public:
    // Get static field: static readonly Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper Instance
    static ::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper* _get_Instance();
    // Set static field: static readonly Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper Instance
    static void _set_Instance(::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper* value);
    // static private System.Void .cctor()
    // Offset: 0x1D41648
    static void _cctor();
    // Org.BouncyCastle.Math.BigInteger CalculatePrivate(Org.BouncyCastle.Crypto.Parameters.DHParameters dhParams, Org.BouncyCastle.Security.SecureRandom random)
    // Offset: 0x1D41408
    ::Org::BouncyCastle::Math::BigInteger* CalculatePrivate(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams, ::Org::BouncyCastle::Security::SecureRandom* random);
    // Org.BouncyCastle.Math.BigInteger CalculatePublic(Org.BouncyCastle.Crypto.Parameters.DHParameters dhParams, Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1D41608
    ::Org::BouncyCastle::Math::BigInteger* CalculatePublic(::Org::BouncyCastle::Crypto::Parameters::DHParameters* dhParams, ::Org::BouncyCastle::Math::BigInteger* x);
    // private System.Void .ctor()
    // Offset: 0x1D41640
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHKeyGeneratorHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHKeyGeneratorHelper*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::CalculatePrivate
// Il2CppName: CalculatePrivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::*)(::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::Org::BouncyCastle::Security::SecureRandom*)>(&Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::CalculatePrivate)> {
  static const MethodInfo* get() {
    static auto* dhParams = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "DHParameters")->byval_arg;
    static auto* random = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*), "CalculatePrivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dhParams, random});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::CalculatePublic
// Il2CppName: CalculatePublic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::*)(::Org::BouncyCastle::Crypto::Parameters::DHParameters*, ::Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::CalculatePublic)> {
  static const MethodInfo* get() {
    static auto* dhParams = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "DHParameters")->byval_arg;
    static auto* x = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper*), "CalculatePublic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dhParams, x});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Generators::DHKeyGeneratorHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
