// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Locale
  class Locale_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Locale_);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Locale_*, "", "Locale");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Locale
  // [TokenAttribute] Offset: FFFFFFFF
  class Locale_ : public ::Il2CppObject {
    public:
    // static public System.String GetText(System.String msg)
    // Offset: 0x1FC0D20
    static ::StringW GetText(::StringW msg);
    // static public System.String GetText(System.String fmt, System.Object[] args)
    // Offset: 0x1FC0D24
    static ::StringW GetText(::StringW fmt, ::ArrayW<::Il2CppObject*> args);
  }; // Locale
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Locale_::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&GlobalNamespace::Locale_::GetText)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Locale_*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Locale_::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&GlobalNamespace::Locale_::GetText)> {
  static const MethodInfo* get() {
    static auto* fmt = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Locale_*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fmt, args});
  }
};
