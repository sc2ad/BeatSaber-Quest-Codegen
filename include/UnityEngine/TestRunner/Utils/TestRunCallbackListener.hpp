// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::Utils
namespace UnityEngine::TestRunner::Utils {
}
// Forward declaring namespace: UnityEngine::TestRunner
namespace UnityEngine::TestRunner {
  // Forward declaring type: ITestRunCallback
  class ITestRunCallback;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.Utils
namespace UnityEngine::TestRunner::Utils {
  // Forward declaring type: TestRunCallbackListener
  class TestRunCallbackListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestRunner::Utils::TestRunCallbackListener);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestRunner::Utils::TestRunCallbackListener*, "UnityEngine.TestRunner.Utils", "TestRunCallbackListener");
// Type namespace: UnityEngine.TestRunner.Utils
namespace UnityEngine::TestRunner::Utils {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.Utils.TestRunCallbackListener
  // [TokenAttribute] Offset: FFFFFFFF
  class TestRunCallbackListener : public ::UnityEngine::ScriptableObject {
    public:
    // Nested type: ::UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass1_0
    class $$c__DisplayClass1_0;
    // Nested type: ::UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c
    class $$c;
    // Nested type: ::UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: ::UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: ::UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.TestRunner.ITestRunCallback[] m_Callbacks
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::TestRunner::ITestRunCallback*> m_Callbacks;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::TestRunner::ITestRunCallback*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.TestRunner.ITestRunCallback[] m_Callbacks
    ::ArrayW<::UnityEngine::TestRunner::ITestRunCallback*>& dyn_m_Callbacks();
    // public System.Void RunStarted(NUnit.Framework.Interfaces.ITest testsToRun)
    // Offset: 0x19475D0
    void RunStarted(::NUnit::Framework::Interfaces::ITest* testsToRun);
    // static private UnityEngine.TestRunner.ITestRunCallback[] GetAllCallbacks()
    // Offset: 0x1947804
    static ::ArrayW<::UnityEngine::TestRunner::ITestRunCallback*> GetAllCallbacks();
    // private System.Void InvokeAllCallbacks(System.Action`1<UnityEngine.TestRunner.ITestRunCallback> invoker)
    // Offset: 0x1947688
    void InvokeAllCallbacks(::System::Action_1<::UnityEngine::TestRunner::ITestRunCallback*>* invoker);
    // public System.Void RunFinished(NUnit.Framework.Interfaces.ITestResult testResults)
    // Offset: 0x1947A98
    void RunFinished(::NUnit::Framework::Interfaces::ITestResult* testResults);
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1947B50
    void TestStarted(::NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x1947C08
    void TestFinished(::NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Void .ctor()
    // Offset: 0x1947CC0
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestRunCallbackListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestRunner::Utils::TestRunCallbackListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestRunCallbackListener*, creationType>()));
    }
  }; // UnityEngine.TestRunner.Utils.TestRunCallbackListener
  #pragma pack(pop)
  static check_size<sizeof(TestRunCallbackListener), 24 + sizeof(::ArrayW<::UnityEngine::TestRunner::ITestRunCallback*>)> __UnityEngine_TestRunner_Utils_TestRunCallbackListenerSizeCheck;
  static_assert(sizeof(TestRunCallbackListener) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::RunStarted
// Il2CppName: RunStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::Utils::TestRunCallbackListener::*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::RunStarted)> {
  static const MethodInfo* get() {
    static auto* testsToRun = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener*), "RunStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testsToRun});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::GetAllCallbacks
// Il2CppName: GetAllCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::TestRunner::ITestRunCallback*> (*)()>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::GetAllCallbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener*), "GetAllCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::InvokeAllCallbacks
// Il2CppName: InvokeAllCallbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::Utils::TestRunCallbackListener::*)(::System::Action_1<::UnityEngine::TestRunner::ITestRunCallback*>*)>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::InvokeAllCallbacks)> {
  static const MethodInfo* get() {
    static auto* invoker = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.TestRunner", "ITestRunCallback")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener*), "InvokeAllCallbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{invoker});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::RunFinished
// Il2CppName: RunFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::Utils::TestRunCallbackListener::*)(::NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::RunFinished)> {
  static const MethodInfo* get() {
    static auto* testResults = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener*), "RunFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testResults});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::TestStarted
// Il2CppName: TestStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::Utils::TestRunCallbackListener::*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::TestStarted)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener*), "TestStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::TestFinished
// Il2CppName: TestFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::Utils::TestRunCallbackListener::*)(::NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestRunner::Utils::TestRunCallbackListener::TestFinished)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::Utils::TestRunCallbackListener*), "TestFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::Utils::TestRunCallbackListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
