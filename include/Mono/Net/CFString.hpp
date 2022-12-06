// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Net.CFObject
#include "Mono/Net/CFObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net
namespace Mono::Net {
  // Forward declaring type: CFRange
  struct CFRange;
}
// Completed forward declares
// Type namespace: Mono.Net
namespace Mono::Net {
  // Forward declaring type: CFString
  class CFString;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::CFString);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::CFString*, "Mono.Net", "CFString");
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFString
  // [TokenAttribute] Offset: FFFFFFFF
  class CFString : public ::Mono::Net::CFObject {
    public:
    public:
    // private System.String str
    // Size: 0x8
    // Offset: 0x18
    ::StringW str;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String str
    [[deprecated("Use field access instead!")]] ::StringW& dyn_str();
    // static private System.IntPtr CFStringCreateWithCharacters(System.IntPtr alloc, System.IntPtr chars, System.IntPtr length)
    // Offset: 0x1AF81FC
    static ::System::IntPtr CFStringCreateWithCharacters(::System::IntPtr alloc, ::System::IntPtr chars, ::System::IntPtr length);
    // static public Mono.Net.CFString Create(System.String value)
    // Offset: 0x1AF5998
    static ::Mono::Net::CFString* Create(::StringW value);
    // static private System.IntPtr CFStringGetLength(System.IntPtr handle)
    // Offset: 0x1AF8294
    static ::System::IntPtr CFStringGetLength(::System::IntPtr handle);
    // static private System.IntPtr CFStringGetCharactersPtr(System.IntPtr handle)
    // Offset: 0x1AF8314
    static ::System::IntPtr CFStringGetCharactersPtr(::System::IntPtr handle);
    // static private System.IntPtr CFStringGetCharacters(System.IntPtr handle, Mono.Net.CFRange range, System.IntPtr buffer)
    // Offset: 0x1AF8394
    static ::System::IntPtr CFStringGetCharacters(::System::IntPtr handle, ::Mono::Net::CFRange range, ::System::IntPtr buffer);
    // static public System.String AsString(System.IntPtr handle)
    // Offset: 0x1AF7BA0
    static ::StringW AsString(::System::IntPtr handle);
    // public System.Void .ctor(System.IntPtr handle, System.Boolean own)
    // Offset: 0x1AF81AC
    // Implemented from: Mono.Net.CFObject
    // Base method: System.Void CFObject::.ctor(System.IntPtr handle, System.Boolean own)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFString* New_ctor(::System::IntPtr handle, bool own) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Net::CFString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFString*, creationType>(handle, own)));
    }
    // public override System.String ToString()
    // Offset: 0x1AF843C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Mono.Net.CFString
  #pragma pack(pop)
  static check_size<sizeof(CFString), 24 + sizeof(::StringW)> __Mono_Net_CFStringSizeCheck;
  static_assert(sizeof(CFString) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::CFString::CFStringCreateWithCharacters
// Il2CppName: CFStringCreateWithCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&Mono::Net::CFString::CFStringCreateWithCharacters)> {
  static const MethodInfo* get() {
    static auto* alloc = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* chars = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFString*), "CFStringCreateWithCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{alloc, chars, length});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFString::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::CFString* (*)(::StringW)>(&Mono::Net::CFString::Create)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFString*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFString::CFStringGetLength
// Il2CppName: CFStringGetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&Mono::Net::CFString::CFStringGetLength)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFString*), "CFStringGetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFString::CFStringGetCharactersPtr
// Il2CppName: CFStringGetCharactersPtr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&Mono::Net::CFString::CFStringGetCharactersPtr)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFString*), "CFStringGetCharactersPtr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFString::CFStringGetCharacters
// Il2CppName: CFStringGetCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::Mono::Net::CFRange, ::System::IntPtr)>(&Mono::Net::CFString::CFStringGetCharacters)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* range = &::il2cpp_utils::GetClassFromName("Mono.Net", "CFRange")->byval_arg;
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFString*), "CFStringGetCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, range, buffer});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFString::AsString
// Il2CppName: AsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::IntPtr)>(&Mono::Net::CFString::AsString)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFString*), "AsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Net::CFString::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Net::CFString::*)()>(&Mono::Net::CFString::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFString*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
