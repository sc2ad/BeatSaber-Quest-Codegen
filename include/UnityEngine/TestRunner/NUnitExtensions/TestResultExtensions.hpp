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
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions
namespace UnityEngine::TestRunner::NUnitExtensions {
  // Forward declaring type: TestResultExtensions
  class TestResultExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestRunner::NUnitExtensions::TestResultExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestRunner::NUnitExtensions::TestResultExtensions*, "UnityEngine.TestRunner.NUnitExtensions", "TestResultExtensions");
// Type namespace: UnityEngine.TestRunner.NUnitExtensions
namespace UnityEngine::TestRunner::NUnitExtensions {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.TestResultExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TestResultExtensions : public ::Il2CppObject {
    public:
    // static public System.Void RecordPrefixedException(NUnit.Framework.Internal.TestResult testResult, System.String prefix, System.Exception ex, NUnit.Framework.Interfaces.ResultState resultState)
    // Offset: 0x1957830
    static void RecordPrefixedException(::NUnit::Framework::Internal::TestResult* testResult, ::StringW prefix, ::System::Exception* ex, ::NUnit::Framework::Interfaces::ResultState* resultState);
    // static public System.Void RecordPrefixedError(NUnit.Framework.Internal.TestResult testResult, System.String prefix, System.String error, NUnit.Framework.Interfaces.ResultState resultState)
    // Offset: 0x1957CA0
    static void RecordPrefixedError(::NUnit::Framework::Internal::TestResult* testResult, ::StringW prefix, ::StringW error, ::NUnit::Framework::Interfaces::ResultState* resultState);
  }; // UnityEngine.TestRunner.NUnitExtensions.TestResultExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestResultExtensions::RecordPrefixedException
// Il2CppName: RecordPrefixedException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::NUnit::Framework::Internal::TestResult*, ::StringW, ::System::Exception*, ::NUnit::Framework::Interfaces::ResultState*)>(&UnityEngine::TestRunner::NUnitExtensions::TestResultExtensions::RecordPrefixedException)> {
  static const MethodInfo* get() {
    static auto* testResult = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestResult")->byval_arg;
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    static auto* resultState = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ResultState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::TestResultExtensions*), "RecordPrefixedException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testResult, prefix, ex, resultState});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::TestResultExtensions::RecordPrefixedError
// Il2CppName: RecordPrefixedError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::NUnit::Framework::Internal::TestResult*, ::StringW, ::StringW, ::NUnit::Framework::Interfaces::ResultState*)>(&UnityEngine::TestRunner::NUnitExtensions::TestResultExtensions::RecordPrefixedError)> {
  static const MethodInfo* get() {
    static auto* testResult = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestResult")->byval_arg;
    static auto* prefix = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* resultState = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ResultState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::TestResultExtensions*), "RecordPrefixedError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testResult, prefix, error, resultState});
  }
};
