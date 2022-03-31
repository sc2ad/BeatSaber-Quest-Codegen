// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.SHA1
#include "System/Security/Cryptography/SHA1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: SHA1Managed
  class SHA1Managed;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::SHA1Managed);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SHA1Managed*, "System.Security.Cryptography", "SHA1Managed");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.SHA1Managed
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 11ABBD8
  class SHA1Managed : public ::System::Security::Cryptography::SHA1 {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Byte[] _buffer
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int64 _count
    // Size: 0x8
    // Offset: 0x30
    int64_t count;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.UInt32[] _stateSHA1
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint> stateSHA1;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    // private System.UInt32[] _expandedBuffer
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint> expandedBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint>) == 0x8);
    public:
    // Get instance field reference: private System.Byte[] _buffer
    ::ArrayW<uint8_t>& dyn__buffer();
    // Get instance field reference: private System.Int64 _count
    int64_t& dyn__count();
    // Get instance field reference: private System.UInt32[] _stateSHA1
    ::ArrayW<uint>& dyn__stateSHA1();
    // Get instance field reference: private System.UInt32[] _expandedBuffer
    ::ArrayW<uint>& dyn__expandedBuffer();
    // private System.Void InitializeState()
    // Offset: 0x208119C
    void InitializeState();
    // private System.Void _HashData(System.Byte[] partIn, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x20812B0
    void _HashData(::ArrayW<uint8_t> partIn, int ibStart, int cbSize);
    // private System.Byte[] _EndHash()
    // Offset: 0x2081464
    ::ArrayW<uint8_t> _EndHash();
    // static private System.Void SHATransform(System.UInt32* expandedBuffer, System.UInt32* state, System.Byte* block)
    // Offset: 0x2081620
    static void SHATransform(uint* expandedBuffer, uint* state, uint8_t* block);
    // static private System.Void SHAExpand(System.UInt32* x)
    // Offset: 0x2081B74
    static void SHAExpand(uint* x);
    // public System.Void .ctor()
    // Offset: 0x20810A8
    // Implemented from: System.Security.Cryptography.SHA1
    // Base method: System.Void SHA1::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SHA1Managed* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::SHA1Managed::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SHA1Managed*, creationType>()));
    }
    // public override System.Void Initialize()
    // Offset: 0x208125C
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Void HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x20812AC
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] rgb, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::ArrayW<uint8_t> rgb, int ibStart, int cbSize);
    // protected override System.Byte[] HashFinal()
    // Offset: 0x2081460
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::ArrayW<uint8_t> HashFinal();
  }; // System.Security.Cryptography.SHA1Managed
  #pragma pack(pop)
  static check_size<sizeof(SHA1Managed), 64 + sizeof(::ArrayW<uint>)> __System_Security_Cryptography_SHA1ManagedSizeCheck;
  static_assert(sizeof(SHA1Managed) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Managed::InitializeState
// Il2CppName: InitializeState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1Managed::*)()>(&System::Security::Cryptography::SHA1Managed::InitializeState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1Managed*), "InitializeState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Managed::_HashData
// Il2CppName: _HashData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1Managed::*)(::ArrayW<uint8_t>, int, int)>(&System::Security::Cryptography::SHA1Managed::_HashData)> {
  static const MethodInfo* get() {
    static auto* partIn = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1Managed*), "_HashData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{partIn, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Managed::_EndHash
// Il2CppName: _EndHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::SHA1Managed::*)()>(&System::Security::Cryptography::SHA1Managed::_EndHash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1Managed*), "_EndHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Managed::SHATransform
// Il2CppName: SHATransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint*, uint*, uint8_t*)>(&System::Security::Cryptography::SHA1Managed::SHATransform)> {
  static const MethodInfo* get() {
    static auto* expandedBuffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt32"))->byval_arg;
    static auto* state = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt32"))->byval_arg;
    static auto* block = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1Managed*), "SHATransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expandedBuffer, state, block});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Managed::SHAExpand
// Il2CppName: SHAExpand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint*)>(&System::Security::Cryptography::SHA1Managed::SHAExpand)> {
  static const MethodInfo* get() {
    static auto* x = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt32"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1Managed*), "SHAExpand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Managed::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Managed::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1Managed::*)()>(&System::Security::Cryptography::SHA1Managed::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1Managed*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Managed::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SHA1Managed::*)(::ArrayW<uint8_t>, int, int)>(&System::Security::Cryptography::SHA1Managed::HashCore)> {
  static const MethodInfo* get() {
    static auto* rgb = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1Managed*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgb, ibStart, cbSize});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1Managed::HashFinal
// Il2CppName: HashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::SHA1Managed::*)()>(&System::Security::Cryptography::SHA1Managed::HashFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1Managed*), "HashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
