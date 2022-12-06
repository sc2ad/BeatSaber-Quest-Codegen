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
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityWorkItemDataHolder
  class UnityWorkItemDataHolder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItemDataHolder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItemDataHolder*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityWorkItemDataHolder");
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItemDataHolder
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityWorkItemDataHolder : public ::Il2CppObject {
    public:
    // Get static field: static public System.Collections.Generic.List`1<System.String> alreadyStartedTests
    static ::System::Collections::Generic::List_1<::StringW>* _get_alreadyStartedTests();
    // Set static field: static public System.Collections.Generic.List`1<System.String> alreadyStartedTests
    static void _set_alreadyStartedTests(::System::Collections::Generic::List_1<::StringW>* value);
    // Get static field: static public System.Collections.Generic.List`1<System.String> alreadyExecutedTests
    static ::System::Collections::Generic::List_1<::StringW>* _get_alreadyExecutedTests();
    // Set static field: static public System.Collections.Generic.List`1<System.String> alreadyExecutedTests
    static void _set_alreadyExecutedTests(::System::Collections::Generic::List_1<::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x198EEDC
    static void _cctor();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItemDataHolder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItemDataHolder::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItemDataHolder::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItemDataHolder*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
