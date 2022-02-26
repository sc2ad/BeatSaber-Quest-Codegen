// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Microsoft::Win32
namespace Microsoft::Win32 {
}
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Forward declaring type: Win32Native
  class Win32Native;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Microsoft::Win32::Win32Native);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::Win32Native*, "Microsoft.Win32", "Win32Native");
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.Win32Native
  // [TokenAttribute] Offset: FFFFFFFF
  class Win32Native : public ::Il2CppObject {
    public:
    // Nested type: ::Microsoft::Win32::Win32Native::WIN32_FIND_DATA
    class WIN32_FIND_DATA;
    // static public System.String GetMessage(System.Int32 hr)
    // Offset: 0x1E657F0
    static ::StringW GetMessage(int hr);
    // static public System.Int32 MakeHRFromErrorCode(System.Int32 errorCode)
    // Offset: 0x1E6586C
    static int MakeHRFromErrorCode(int errorCode);
  }; // Microsoft.Win32.Win32Native
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::Win32Native::GetMessage
// Il2CppName: GetMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&Microsoft::Win32::Win32Native::GetMessage)> {
  static const MethodInfo* get() {
    static auto* hr = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32Native*), "GetMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hr});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::Win32Native::MakeHRFromErrorCode
// Il2CppName: MakeHRFromErrorCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Microsoft::Win32::Win32Native::MakeHRFromErrorCode)> {
  static const MethodInfo* get() {
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::Win32Native*), "MakeHRFromErrorCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorCode});
  }
};
