// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Assertions
namespace UnityEngine::Assertions {
  // Forward declaring type: AssertionMessageUtil
  class AssertionMessageUtil;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Assertions::AssertionMessageUtil);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Assertions::AssertionMessageUtil*, "UnityEngine.Assertions", "AssertionMessageUtil");
// Type namespace: UnityEngine.Assertions
namespace UnityEngine::Assertions {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Assertions.AssertionMessageUtil
  // [TokenAttribute] Offset: FFFFFFFF
  class AssertionMessageUtil : public ::Il2CppObject {
    public:
    // static public System.String GetMessage(System.String failureMessage)
    // Offset: 0x202412C
    static ::StringW GetMessage(::StringW failureMessage);
    // static public System.String GetMessage(System.String failureMessage, System.String expected)
    // Offset: 0x2024218
    static ::StringW GetMessage(::StringW failureMessage, ::StringW expected);
    // static public System.String GetEqualityMessage(System.Object actual, System.Object expected, System.Boolean expectEqual)
    // Offset: 0x2023E08
    static ::StringW GetEqualityMessage(::Il2CppObject* actual, ::Il2CppObject* expected, bool expectEqual);
  }; // UnityEngine.Assertions.AssertionMessageUtil
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Assertions::AssertionMessageUtil::GetMessage
// Il2CppName: GetMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngine::Assertions::AssertionMessageUtil::GetMessage)> {
  static const MethodInfo* get() {
    static auto* failureMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Assertions::AssertionMessageUtil*), "GetMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failureMessage});
  }
};
// Writing MetadataGetter for method: UnityEngine::Assertions::AssertionMessageUtil::GetMessage
// Il2CppName: GetMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::StringW)>(&UnityEngine::Assertions::AssertionMessageUtil::GetMessage)> {
  static const MethodInfo* get() {
    static auto* failureMessage = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Assertions::AssertionMessageUtil*), "GetMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{failureMessage, expected});
  }
};
// Writing MetadataGetter for method: UnityEngine::Assertions::AssertionMessageUtil::GetEqualityMessage
// Il2CppName: GetEqualityMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppObject*, ::Il2CppObject*, bool)>(&UnityEngine::Assertions::AssertionMessageUtil::GetEqualityMessage)> {
  static const MethodInfo* get() {
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* expectEqual = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Assertions::AssertionMessageUtil*), "GetEqualityMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actual, expected, expectEqual});
  }
};
