// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Forward declaring type: NoekeonEngine
  class NoekeonEngine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::NoekeonEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::NoekeonEngine*, "Org.BouncyCastle.Crypto.Engines", "NoekeonEngine");
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x1A
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.NoekeonEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class NoekeonEngine : public ::Il2CppObject/*, public ::Org::BouncyCastle::Crypto::IBlockCipher*/ {
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
    // private readonly System.UInt32[] k
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint> k;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.Boolean _initialised
    // Size: 0x1
    // Offset: 0x18
    bool initialised;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _forEncryption
    // Size: 0x1
    // Offset: 0x19
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Org::BouncyCastle::Crypto::IBlockCipher
    operator ::Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<::Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Byte[] RoundConstants
    static ::ArrayW<uint8_t> _get_RoundConstants();
    // Set static field: static private readonly System.Byte[] RoundConstants
    static void _set_RoundConstants(::ArrayW<uint8_t> value);
    // Get instance field reference: private readonly System.UInt32[] k
    ::ArrayW<uint>& dyn_k();
    // Get instance field reference: private System.Boolean _initialised
    bool& dyn__initialised();
    // Get instance field reference: private System.Boolean _forEncryption
    bool& dyn__forEncryption();
    // public System.String get_AlgorithmName()
    // Offset: 0x232E2D0
    ::StringW get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x232E318
    bool get_IsPartialBlockOkay();
    // static private System.Void .cctor()
    // Offset: 0x232ED38
    static void _cctor();
    // public System.Int32 GetBlockSize()
    // Offset: 0x232E320
    int GetBlockSize();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x232E328
    void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x232E5D0
    int ProcessBlock(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> output, int outOff);
    // public System.Void Reset()
    // Offset: 0x232ED34
    void Reset();
    // private System.Int32 EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x232EA3C
    int EncryptBlock(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> output, int outOff);
    // private System.Int32 DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x232E718
    int DecryptBlock(::ArrayW<uint8_t> input, int inOff, ::ArrayW<uint8_t> output, int outOff);
    // public System.Void .ctor()
    // Offset: 0x232E268
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoekeonEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Engines::NoekeonEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoekeonEngine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.NoekeonEngine
  #pragma pack(pop)
  static check_size<sizeof(NoekeonEngine), 25 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_NoekeonEngineSizeCheck;
  static_assert(sizeof(NoekeonEngine) == 0x1A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::NoekeonEngine::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Org::BouncyCastle::Crypto::Engines::NoekeonEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::NoekeonEngine::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::NoekeonEngine*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::NoekeonEngine::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Engines::NoekeonEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::NoekeonEngine::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::NoekeonEngine*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::NoekeonEngine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Org::BouncyCastle::Crypto::Engines::NoekeonEngine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::NoekeonEngine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::NoekeonEngine::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::NoekeonEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::NoekeonEngine::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::NoekeonEngine*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::NoekeonEngine::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::NoekeonEngine::*)(bool, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Engines::NoekeonEngine::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::NoekeonEngine*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::NoekeonEngine::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::NoekeonEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::NoekeonEngine::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::NoekeonEngine*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::NoekeonEngine::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Engines::NoekeonEngine::*)()>(&Org::BouncyCastle::Crypto::Engines::NoekeonEngine::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::NoekeonEngine*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::NoekeonEngine::EncryptBlock
// Il2CppName: EncryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::NoekeonEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::NoekeonEngine::EncryptBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::NoekeonEngine*), "EncryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::NoekeonEngine::DecryptBlock
// Il2CppName: DecryptBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Engines::NoekeonEngine::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Engines::NoekeonEngine::DecryptBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Engines::NoekeonEngine*), "DecryptBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, output, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Engines::NoekeonEngine::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
