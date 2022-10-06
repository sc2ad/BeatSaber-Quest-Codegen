// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
#include "Org/BouncyCastle/Crypto/IAsymmetricBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IRsa
  class IRsa;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: RsaKeyParameters
  class RsaKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Forward declaring type: RsaBlindedEngine
  class RsaBlindedEngine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine*, "Org.BouncyCastle.Crypto.Engines", "RsaBlindedEngine");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class RsaBlindedEngine : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*/ {
    public:
    public:
    // private readonly Org.BouncyCastle.Crypto.IRsa core
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Crypto::IRsa* core;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::IRsa*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters key
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* key;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*) == 0x8);
    // private Org.BouncyCastle.Security.SecureRandom random
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Security::SecureRandom* random;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Security::SecureRandom*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher
    operator ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(this);
    }
    // Creating interface conversion operator: i_IAsymmetricBlockCipher
    inline ::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* i_IAsymmetricBlockCipher() noexcept {
      return reinterpret_cast<::Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*>(this);
    }
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IRsa core
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::IRsa*& dyn_core();
    // Get instance field reference: private Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters key
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*& dyn_key();
    // Get instance field reference: private Org.BouncyCastle.Security.SecureRandom random
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Security::SecureRandom*& dyn_random();
    // public System.Void .ctor()
    // Offset: 0x249F218
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsaBlindedEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsaBlindedEngine*, creationType>()));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IRsa rsa)
    // Offset: 0x249F28C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RsaBlindedEngine* New_ctor(::Org::BouncyCastle::Crypto::IRsa* rsa) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RsaBlindedEngine*, creationType>(rsa)));
    }
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters param)
    // Offset: 0x249F2B8
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* param);
    // public System.Int32 GetInputBlockSize()
    // Offset: 0x249F4E0
    int GetInputBlockSize();
    // public System.Int32 GetOutputBlockSize()
    // Offset: 0x249F594
    int GetOutputBlockSize();
    // public System.Byte[] ProcessBlock(System.Byte[] inBuf, System.Int32 inOff, System.Int32 inLen)
    // Offset: 0x249F648
    ::ArrayW<uint8_t> ProcessBlock(::ArrayW<uint8_t> inBuf, int inOff, int inLen);
  }; // Org.BouncyCastle.Crypto.Engines.RsaBlindedEngine
  #pragma pack(pop)
  static check_size<sizeof(RsaBlindedEngine), 32 + sizeof(::Org::BouncyCastle::Security::SecureRandom*)> __Org_BouncyCastle_Crypto_Engines_RsaBlindedEngineSizeCheck;
  static_assert(sizeof(RsaBlindedEngine) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* param = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, param});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::GetInputBlockSize
// Il2CppName: GetInputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::GetInputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine*), "GetInputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::GetOutputBlockSize
// Il2CppName: GetOutputBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::GetOutputBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine*), "GetOutputBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::*)(::ArrayW<uint8_t>, int, int)>(&Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* inBuf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* inLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::RsaBlindedEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inBuf, inOff, inLen});
  }
};
