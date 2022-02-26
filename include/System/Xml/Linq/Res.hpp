// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: Res
  class Res;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::Res);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::Res*, "System.Xml.Linq", "Res");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.Res
  // [TokenAttribute] Offset: FFFFFFFF
  class Res : public ::Il2CppObject {
    public:
    // static public System.String GetString(System.String name)
    // Offset: 0x29DF358
    static ::StringW GetString(::StringW name);
    // static public System.String GetString(System.String name, params System.Object[] args)
    // Offset: 0x29DFB20
    static ::StringW GetString(::StringW name, ::ArrayW<::Il2CppObject*> args);
  }; // System.Xml.Linq.Res
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::Res::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Xml::Linq::Res::GetString)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::Res*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Xml::Linq::Res::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&System::Xml::Linq::Res::GetString)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Linq::Res*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, args});
  }
};
