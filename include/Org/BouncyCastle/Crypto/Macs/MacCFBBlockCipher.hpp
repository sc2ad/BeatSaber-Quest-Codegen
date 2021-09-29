// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher
  // [TokenAttribute] Offset: FFFFFFFF
  class MacCFBBlockCipher : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Byte[] IV
    // Size: 0x8
    // Offset: 0x10
    ::ArrayWrapper<uint8_t> IV;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<uint8_t>) == 0x8);
    // private System.Byte[] cfbV
    // Size: 0x8
    // Offset: 0x18
    ::ArrayWrapper<uint8_t> cfbV;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<uint8_t>) == 0x8);
    // private System.Byte[] cfbOutV
    // Size: 0x8
    // Offset: 0x20
    ::ArrayWrapper<uint8_t> cfbOutV;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<uint8_t>) == 0x8);
    // private readonly System.Int32 blockSize
    // Size: 0x4
    // Offset: 0x28
    int blockSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: blockSize and: cipher
    char __padding3[0x4] = {};
    // private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // Creating value type constructor for type: MacCFBBlockCipher
    MacCFBBlockCipher(::ArrayWrapper<uint8_t> IV_ = {}, ::ArrayWrapper<uint8_t> cfbV_ = {}, ::ArrayWrapper<uint8_t> cfbOutV_ = {}, int blockSize_ = {}, Org::BouncyCastle::Crypto::IBlockCipher* cipher_ = {}) noexcept : IV{IV_}, cfbV{cfbV_}, cfbOutV{cfbOutV_}, blockSize{blockSize_}, cipher{cipher_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get instance field reference: private System.Byte[] IV
    ::ArrayWrapper<uint8_t>& dyn_IV();
    // Get instance field reference: private System.Byte[] cfbV
    ::ArrayWrapper<uint8_t>& dyn_cfbV();
    // Get instance field reference: private System.Byte[] cfbOutV
    ::ArrayWrapper<uint8_t>& dyn_cfbOutV();
    // Get instance field reference: private readonly System.Int32 blockSize
    int& dyn_blockSize();
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    Org::BouncyCastle::Crypto::IBlockCipher*& dyn_cipher();
    // public System.String get_AlgorithmName()
    // Offset: 0x1A88BC8
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1A88CC4
    bool get_IsPartialBlockOkay();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher, System.Int32 bitBlockSize)
    // Offset: 0x1A85658
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MacCFBBlockCipher* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher, int bitBlockSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MacCFBBlockCipher*, creationType>(cipher, bitBlockSize)));
    }
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1A858C8
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetBlockSize()
    // Offset: 0x1A88CCC
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1A85AB0
    int ProcessBlock(::ArrayWrapper<uint8_t> input, int inOff, ::ArrayWrapper<uint8_t> outBytes, int outOff);
    // public System.Void Reset()
    // Offset: 0x1A860B8
    void Reset();
    // public System.Void GetMacBlock(System.Byte[] mac)
    // Offset: 0x1A85FE4
    void GetMacBlock(::ArrayWrapper<uint8_t> mac);
  }; // Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher
  #pragma pack(pop)
  static check_size<sizeof(MacCFBBlockCipher), 48 + sizeof(Org::BouncyCastle::Crypto::IBlockCipher*)> __Org_BouncyCastle_Crypto_Macs_MacCFBBlockCipherSizeCheck;
  static_assert(sizeof(MacCFBBlockCipher) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*, "Org.BouncyCastle.Crypto.Macs", "MacCFBBlockCipher");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::get_AlgorithmName
// Il2CppName: get_AlgorithmName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::get_AlgorithmName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*), "get_AlgorithmName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::get_IsPartialBlockOkay
// Il2CppName: get_IsPartialBlockOkay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::get_IsPartialBlockOkay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*), "get_IsPartialBlockOkay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::*)(bool, Org::BouncyCastle::Crypto::ICipherParameters*)>(&Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::Init)> {
  static const MethodInfo* get() {
    static auto* forEncryption = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* parameters = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto", "ICipherParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{forEncryption, parameters});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::GetBlockSize
// Il2CppName: GetBlockSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::GetBlockSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*), "GetBlockSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::ProcessBlock
// Il2CppName: ProcessBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::*)(::ArrayWrapper<uint8_t>, int, ::ArrayWrapper<uint8_t>, int)>(&Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::ProcessBlock)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* inOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOff = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*), "ProcessBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, inOff, outBytes, outOff});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::*)()>(&Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::GetMacBlock
// Il2CppName: GetMacBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::*)(::ArrayWrapper<uint8_t>)>(&Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher::GetMacBlock)> {
  static const MethodInfo* get() {
    static auto* mac = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Macs::MacCFBBlockCipher*), "GetMacBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mac});
  }
};
