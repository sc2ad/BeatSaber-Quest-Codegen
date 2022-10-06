// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SecureRandomProvider
#include "GlobalNamespace/SecureRandomProvider.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RNGCryptoServiceProvider
  class RNGCryptoServiceProvider;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SecureRandomProvider::SecureRandomState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SecureRandomProvider::SecureRandomState*, "", "SecureRandomProvider/SecureRandomState");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: SecureRandomProvider/SecureRandomState
  // [TokenAttribute] Offset: FFFFFFFF
  class SecureRandomProvider::SecureRandomState : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Security.Cryptography.RNGCryptoServiceProvider _random
    // Size: 0x8
    // Offset: 0x10
    ::System::Security::Cryptography::RNGCryptoServiceProvider* random;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::RNGCryptoServiceProvider*) == 0x8);
    // private readonly System.Byte[] _randomBuffer0
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> randomBuffer0;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private readonly System.Byte[] _randomBuffer1
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> randomBuffer1;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x28
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // static field const value: static private System.Int32 kBufferSize
    static constexpr const int kBufferSize = 16384;
    // Get static field: static private System.Int32 kBufferSize
    static int _get_kBufferSize();
    // Set static field: static private System.Int32 kBufferSize
    static void _set_kBufferSize(int value);
    // Get instance field reference: private readonly System.Security.Cryptography.RNGCryptoServiceProvider _random
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::RNGCryptoServiceProvider*& dyn__random();
    // Get instance field reference: private readonly System.Byte[] _randomBuffer0
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__randomBuffer0();
    // Get instance field reference: private readonly System.Byte[] _randomBuffer1
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__randomBuffer1();
    // Get instance field reference: private System.Int32 _index
    [[deprecated("Use field access instead!")]] int& dyn__index();
    // public System.Void .ctor()
    // Offset: 0x26A22B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecureRandomProvider::SecureRandomState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SecureRandomProvider::SecureRandomState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecureRandomProvider::SecureRandomState*, creationType>()));
    }
    // public System.Void GetBytes(System.Byte[] buffer, System.Int32 offset, System.Int32 length)
    // Offset: 0x26A1F4C
    void GetBytes(::ArrayW<uint8_t> buffer, int offset, int length);
    // public System.Byte GetByte()
    // Offset: 0x26A2080
    uint8_t GetByte();
    // private System.Void FillBuffer()
    // Offset: 0x26A2350
    void FillBuffer();
  }; // SecureRandomProvider/SecureRandomState
  #pragma pack(pop)
  static check_size<sizeof(SecureRandomProvider::SecureRandomState), 40 + sizeof(int)> __GlobalNamespace_SecureRandomProvider_SecureRandomStateSizeCheck;
  static_assert(sizeof(SecureRandomProvider::SecureRandomState) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::SecureRandomState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::SecureRandomState::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SecureRandomProvider::SecureRandomState::*)(::ArrayW<uint8_t>, int, int)>(&GlobalNamespace::SecureRandomProvider::SecureRandomState::GetBytes)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SecureRandomProvider::SecureRandomState*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, length});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::SecureRandomState::GetByte
// Il2CppName: GetByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::SecureRandomProvider::SecureRandomState::*)()>(&GlobalNamespace::SecureRandomProvider::SecureRandomState::GetByte)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SecureRandomProvider::SecureRandomState*), "GetByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SecureRandomProvider::SecureRandomState::FillBuffer
// Il2CppName: FillBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SecureRandomProvider::SecureRandomState::*)()>(&GlobalNamespace::SecureRandomProvider::SecureRandomState::FillBuffer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SecureRandomProvider::SecureRandomState*), "FillBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
