// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Forward declaring type: Guard
  class Guard;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Guard);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Guard*, "NUnit.Framework", "Guard");
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Guard
  // [TokenAttribute] Offset: FFFFFFFF
  class Guard : public ::Il2CppObject {
    public:
    // static public System.Void ArgumentNotNull(System.Object value, System.String name)
    // Offset: 0x1C46154
    static void ArgumentNotNull(::Il2CppObject* value, ::StringW name);
    // static public System.Void ArgumentNotNullOrEmpty(System.String value, System.String name)
    // Offset: 0x1C46208
    static void ArgumentNotNullOrEmpty(::StringW value, ::StringW name);
    // static public System.Void ArgumentValid(System.Boolean condition, System.String message, System.String paramName)
    // Offset: 0x1C462E8
    static void ArgumentValid(bool condition, ::StringW message, ::StringW paramName);
  }; // NUnit.Framework.Guard
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Guard::ArgumentNotNull
// Il2CppName: ArgumentNotNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::StringW)>(&NUnit::Framework::Guard::ArgumentNotNull)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Guard*), "ArgumentNotNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, name});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Guard::ArgumentNotNullOrEmpty
// Il2CppName: ArgumentNotNullOrEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&NUnit::Framework::Guard::ArgumentNotNullOrEmpty)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Guard*), "ArgumentNotNullOrEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, name});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Guard::ArgumentValid
// Il2CppName: ArgumentValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::StringW, ::StringW)>(&NUnit::Framework::Guard::ArgumentValid)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Guard*), "ArgumentValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, message, paramName});
  }
};
