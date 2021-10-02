// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.SHA512
#include "System/Security/Cryptography/SHA512.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.SHA512Managed
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E5F4E8
  class SHA512Managed : public System::Security::Cryptography::SHA512 {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Byte[] _buffer
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.UInt64 _count
    // Size: 0x8
    // Offset: 0x30
    uint64_t count;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64[] _stateSHA512
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint64_t> stateSHA512;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    // private System.UInt64[] _W
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint64_t> W;
    // Field size check
    static_assert(sizeof(::ArrayW<uint64_t>) == 0x8);
    public:
    // Get static field: static private readonly System.UInt64[] _K
    static ::ArrayW<uint64_t> _get__K();
    // Set static field: static private readonly System.UInt64[] _K
    static void _set__K(::ArrayW<uint64_t> value);
    // Get instance field reference: private System.Byte[] _buffer
    ::ArrayW<uint8_t>& dyn__buffer();
    // Get instance field reference: private System.UInt64 _count
    uint64_t& dyn__count();
    // Get instance field reference: private System.UInt64[] _stateSHA512
    ::ArrayW<uint64_t>& dyn__stateSHA512();
    // Get instance field reference: private System.UInt64[] _W
    ::ArrayW<uint64_t>& dyn__W();
    // static private System.Void .cctor()
    // Offset: 0x1CCC9D0
    static void _cctor();
    // private System.Void InitializeState()
    // Offset: 0x1CCBBD8
    void InitializeState();
    // private System.Void _HashData(System.Byte[] partIn, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x1CCBD8C
    void _HashData(::ArrayW<uint8_t> partIn, int ibStart, int cbSize);
    // private System.Byte[] _EndHash()
    // Offset: 0x1CCBFA8
    ::ArrayW<uint8_t> _EndHash();
    // static private System.Void SHATransform(System.UInt64* expandedBuffer, System.UInt64* state, System.Byte* block)
    // Offset: 0x1CCC164
    static void SHATransform(uint64_t* expandedBuffer, uint64_t* state, uint8_t* block);
    // static private System.UInt64 RotateRight(System.UInt64 x, System.Int32 n)
    // Offset: 0x1CCC8F0
    static uint64_t RotateRight(uint64_t x, int n);
    // static private System.UInt64 Ch(System.UInt64 x, System.UInt64 y, System.UInt64 z)
    // Offset: 0x1CCC860
    static uint64_t Ch(uint64_t x, uint64_t y, uint64_t z);
    // static private System.UInt64 Maj(System.UInt64 x, System.UInt64 y, System.UInt64 z)
    // Offset: 0x1CCC8DC
    static uint64_t Maj(uint64_t x, uint64_t y, uint64_t z);
    // static private System.UInt64 Sigma_0(System.UInt64 x)
    // Offset: 0x1CCC870
    static uint64_t Sigma_0(uint64_t x);
    // static private System.UInt64 Sigma_1(System.UInt64 x)
    // Offset: 0x1CCC7F4
    static uint64_t Sigma_1(uint64_t x);
    // static private System.UInt64 sigma_0(System.UInt64 x)
    // Offset: 0x1CCC8F8
    static uint64_t sigma_0(uint64_t x);
    // static private System.UInt64 sigma_1(System.UInt64 x)
    // Offset: 0x1CCC964
    static uint64_t sigma_1(uint64_t x);
    // static private System.Void SHA512Expand(System.UInt64* x)
    // Offset: 0x1CCC73C
    static void SHA512Expand(uint64_t* x);
    // public System.Void .ctor()
    // Offset: 0x1CCBAE4
    // Implemented from: System.Security.Cryptography.SHA512
    // Base method: System.Void SHA512::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SHA512Managed* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::SHA512Managed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SHA512Managed*, creationType>()));
    }
    // public override System.Void Initialize()
    // Offset: 0x1CCBD38
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x1CCBD88
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::ArrayW<uint8_t> rgb, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x1CCBFA4
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::ArrayW<uint8_t> HashFinal();
  }; // System.Security.Cryptography.SHA512Managed
  #pragma pack(pop)
  static check_size<sizeof(SHA512Managed), 64 + sizeof(::ArrayW<uint64_t>)> __System_Security_Cryptography_SHA512ManagedSizeCheck;
  static_assert(sizeof(SHA512Managed) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA512Managed*, "System.Security.Cryptography", "SHA512Managed");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::SHA512Managed::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA512Managed*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::InitializeState
// Il2CppName: InitializeState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA512Managed::*)()>(&System::Security::Cryptography::SHA512Managed::InitializeState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA512Managed*), "InitializeState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::_HashData
// Il2CppName: _HashData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA512Managed::*)(::ArrayW<uint8_t>, int, int)>(&System::Security::Cryptography::SHA512Managed::_HashData)> {
  static const MethodInfo* get() {
    static auto* partIn = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA512Managed*), "_HashData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{partIn, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::_EndHash
// Il2CppName: _EndHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::SHA512Managed::*)()>(&System::Security::Cryptography::SHA512Managed::_EndHash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA512Managed*), "_EndHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::SHATransform
// Il2CppName: SHATransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t*, uint64_t*, uint8_t*)>(&System::Security::Cryptography::SHA512Managed::SHATransform)> {
  static const MethodInfo* get() {
    static auto* expandedBuffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt64"))->byval_arg;
    static auto* state = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt64"))->byval_arg;
    static auto* block = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA512Managed*), "SHATransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expandedBuffer, state, block});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::RotateRight
// Il2CppName: RotateRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, int)>(&System::Security::Cryptography::SHA512Managed::RotateRight)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA512Managed*), "RotateRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, n});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::Ch
// Il2CppName: Ch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t, uint64_t)>(&System::Security::Cryptography::SHA512Managed::Ch)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA512Managed*), "Ch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::Maj
// Il2CppName: Maj
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, uint64_t, uint64_t)>(&System::Security::Cryptography::SHA512Managed::Maj)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* z = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA512Managed*), "Maj", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y, z});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::Sigma_0
// Il2CppName: Sigma_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&System::Security::Cryptography::SHA512Managed::Sigma_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA512Managed*), "Sigma_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::Sigma_1
// Il2CppName: Sigma_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&System::Security::Cryptography::SHA512Managed::Sigma_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA512Managed*), "Sigma_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::sigma_0
// Il2CppName: sigma_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&System::Security::Cryptography::SHA512Managed::sigma_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA512Managed*), "sigma_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::sigma_1
// Il2CppName: sigma_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&System::Security::Cryptography::SHA512Managed::sigma_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA512Managed*), "sigma_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::SHA512Expand
// Il2CppName: SHA512Expand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t*)>(&System::Security::Cryptography::SHA512Managed::SHA512Expand)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt64"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA512Managed*), "SHA512Expand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA512Managed::*)()>(&System::Security::Cryptography::SHA512Managed::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA512Managed*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA512Managed::*)(::ArrayW<uint8_t>, int, int)>(&System::Security::Cryptography::SHA512Managed::HashCore)> {
  static const MethodInfo* get() {
    static auto* rgb = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA512Managed*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgb, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA512Managed::HashFinal
// Il2CppName: HashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::SHA512Managed::*)()>(&System::Security::Cryptography::SHA512Managed::HashFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA512Managed*), "HashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
