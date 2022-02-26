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
// Type namespace: Mono.Net
namespace Mono::Net {
  // Forward declaring type: CFUrl
  class CFUrl;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Net::CFUrl);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::CFUrl*, "Mono.Net", "CFUrl");
// Type namespace: Mono.Net
namespace Mono::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.CFUrl
  // [TokenAttribute] Offset: FFFFFFFF
  class CFUrl : public ::Mono::Net::CFObject {
    public:
    // static private System.IntPtr CFURLCreateWithString(System.IntPtr allocator, System.IntPtr str, System.IntPtr baseURL)
    // Offset: 0x1A2EC94
    static ::System::IntPtr CFURLCreateWithString(::System::IntPtr allocator, ::System::IntPtr str, ::System::IntPtr baseURL);
    // static public Mono.Net.CFUrl Create(System.String absolute)
    // Offset: 0x1A2BE94
    static ::Mono::Net::CFUrl* Create(::StringW absolute);
    // public System.Void .ctor(System.IntPtr handle, System.Boolean own)
    // Offset: 0x1A2EC44
    // Implemented from: Mono.Net.CFObject
    // Base method: System.Void CFObject::.ctor(System.IntPtr handle, System.Boolean own)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CFUrl* New_ctor(::System::IntPtr handle, bool own) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Net::CFUrl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CFUrl*, creationType>(handle, own)));
    }
  }; // Mono.Net.CFUrl
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Net::CFUrl::CFURLCreateWithString
// Il2CppName: CFURLCreateWithString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&Mono::Net::CFUrl::CFURLCreateWithString)> {
  static const MethodInfo* get() {
    static auto* allocator = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* baseURL = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFUrl*), "CFURLCreateWithString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{allocator, str, baseURL});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFUrl::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Net::CFUrl* (*)(::StringW)>(&Mono::Net::CFUrl::Create)> {
  static const MethodInfo* get() {
    static auto* absolute = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Net::CFUrl*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{absolute});
  }
};
// Writing MetadataGetter for method: Mono::Net::CFUrl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
