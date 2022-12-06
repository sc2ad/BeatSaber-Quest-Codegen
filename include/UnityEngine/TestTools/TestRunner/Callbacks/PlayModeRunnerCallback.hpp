// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::TestRunner::Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Forward declaring type: TestResultRenderer
  class TestResultRenderer;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestResult
  class ITestResult;
  // Forward declaring type: ITest
  class ITest;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogType
  struct LogType;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Forward declaring type: PlayModeRunnerCallback
  class PlayModeRunnerCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback*, "UnityEngine.TestTools.TestRunner.Callbacks", "PlayModeRunnerCallback");
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.PlayModeRunnerCallback
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 114B278
  class PlayModeRunnerCallback : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer m_ResultRenderer
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer* m_ResultRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer m_ResultRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer*& dyn_m_ResultRenderer();
    // public System.Void .ctor()
    // Offset: 0x1999E1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayModeRunnerCallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayModeRunnerCallback*, creationType>()));
    }
    // public System.Void RunFinished(NUnit.Framework.Interfaces.ITestResult testResults)
    // Offset: 0x19995CC
    void RunFinished(::NUnit::Framework::Interfaces::ITestResult* testResults);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x199978C
    void TestFinished(::NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Void OnGUI()
    // Offset: 0x1999790
    void OnGUI();
    // public System.Void RunStarted(NUnit.Framework.Interfaces.ITest testsToRun)
    // Offset: 0x1999CF4
    void RunStarted(::NUnit::Framework::Interfaces::ITest* testsToRun);
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x1999D68
    void TestStarted(::NUnit::Framework::Interfaces::ITest* test);
    // private System.Void LogRecieved(System.String message, System.String stacktrace, UnityEngine.LogType type)
    // Offset: 0x1999D6C
    void LogRecieved(::StringW message, ::StringW stacktrace, ::UnityEngine::LogType type);
  }; // UnityEngine.TestTools.TestRunner.Callbacks.PlayModeRunnerCallback
  #pragma pack(pop)
  static check_size<sizeof(PlayModeRunnerCallback), 24 + sizeof(::UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer*)> __UnityEngine_TestTools_TestRunner_Callbacks_PlayModeRunnerCallbackSizeCheck;
  static_assert(sizeof(PlayModeRunnerCallback) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::RunFinished
// Il2CppName: RunFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::*)(::NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::RunFinished)> {
  static const MethodInfo* get() {
    static auto* testResults = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback*), "RunFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testResults});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::TestFinished
// Il2CppName: TestFinished
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::*)(::NUnit::Framework::Interfaces::ITestResult*)>(&UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::TestFinished)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback*), "TestFinished", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::OnGUI
// Il2CppName: OnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::*)()>(&UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::OnGUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback*), "OnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::RunStarted
// Il2CppName: RunStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::RunStarted)> {
  static const MethodInfo* get() {
    static auto* testsToRun = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback*), "RunStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{testsToRun});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::TestStarted
// Il2CppName: TestStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::*)(::NUnit::Framework::Interfaces::ITest*)>(&UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::TestStarted)> {
  static const MethodInfo* get() {
    static auto* test = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "ITest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback*), "TestStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{test});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::LogRecieved
// Il2CppName: LogRecieved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback::LogRecieved)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* stacktrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::TestRunner::Callbacks::PlayModeRunnerCallback*), "LogRecieved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, stacktrace, type});
  }
};
