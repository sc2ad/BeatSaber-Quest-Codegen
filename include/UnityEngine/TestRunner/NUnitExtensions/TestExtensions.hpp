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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions
namespace UnityEngine::TestRunner::NUnitExtensions {
  // Forward declaring type: TestExtensions
  class TestExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestRunner::NUnitExtensions::TestExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestRunner::NUnitExtensions::TestExtensions*, "UnityEngine.TestRunner.NUnitExtensions", "TestExtensions");
// Type namespace: UnityEngine.TestRunner.NUnitExtensions
namespace UnityEngine::TestRunner::NUnitExtensions {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.TestExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TestExtensions : public ::Il2CppObject {
    public:
    // static private System.Collections.Generic.IEnumerable`1<System.String> GetTestCategories(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18D0A54
    static ::System::Collections::Generic::IEnumerable_1<::StringW>* GetTestCategories(::NUnit::Framework::Interfaces::ITest* test);
    // static public System.Collections.Generic.List`1<System.String> GetAllCategoriesFromTest(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18D0DA8
    static ::System::Collections::Generic::List_1<::StringW>* GetAllCategoriesFromTest(::NUnit::Framework::Interfaces::ITest* test);
    // static public System.Void ParseForNameDuplicates(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18D0F14
    static void ParseForNameDuplicates(::NUnit::Framework::Interfaces::ITest* test);
    // static public System.Int32 GetChildIndex(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18D142C
    static int GetChildIndex(::NUnit::Framework::Interfaces::ITest* test);
    // static public System.Boolean HasChildIndex(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18D1608
    static bool HasChildIndex(::NUnit::Framework::Interfaces::ITest* test);
    // static private System.String GetAncestorPath(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18D17BC
    static ::StringW GetAncestorPath(::NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetUniqueName(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18D05CC
    static ::StringW GetUniqueName(::NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetFullName(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18D1A54
    static ::StringW GetFullName(::NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetSkipReason(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18D1F20
    static ::StringW GetSkipReason(::NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetParentId(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18D216C
    static ::StringW GetParentId(::NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetParentFullName(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18D22F8
    static ::StringW GetParentFullName(::NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetParentUniqueName(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x18D2488
    static ::StringW GetParentUniqueName(::NUnit::Framework::Interfaces::ITest* test);
  }; // UnityEngine.TestRunner.NUnitExtensions.TestExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetTestCategories
// Il2CppName: GetTestCategories
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetTestCategories)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::TestExtensions*), "GetTestCategories", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetAllCategoriesFromTest
// Il2CppName: GetAllCategoriesFromTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetAllCategoriesFromTest)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::TestExtensions*), "GetAllCategoriesFromTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::ParseForNameDuplicates
// Il2CppName: ParseForNameDuplicates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::TestExtensions::ParseForNameDuplicates)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::TestExtensions*), "ParseForNameDuplicates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetChildIndex
// Il2CppName: GetChildIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetChildIndex)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::TestExtensions*), "GetChildIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::HasChildIndex
// Il2CppName: HasChildIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::TestExtensions::HasChildIndex)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::TestExtensions*), "HasChildIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetAncestorPath
// Il2CppName: GetAncestorPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetAncestorPath)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::TestExtensions*), "GetAncestorPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetUniqueName
// Il2CppName: GetUniqueName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetUniqueName)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::TestExtensions*), "GetUniqueName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetFullName
// Il2CppName: GetFullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetFullName)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::TestExtensions*), "GetFullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetSkipReason
// Il2CppName: GetSkipReason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetSkipReason)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::TestExtensions*), "GetSkipReason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetParentId
// Il2CppName: GetParentId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetParentId)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::TestExtensions*), "GetParentId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetParentFullName
// Il2CppName: GetParentFullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetParentFullName)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::TestExtensions*), "GetParentFullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetParentUniqueName
// Il2CppName: GetParentUniqueName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::NUnitExtensions::TestExtensions::GetParentUniqueName)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::TestExtensions*), "GetParentUniqueName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
