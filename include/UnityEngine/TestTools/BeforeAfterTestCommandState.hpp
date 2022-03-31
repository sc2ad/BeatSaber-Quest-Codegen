// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: NUnit.Framework.Interfaces.TestStatus
#include "NUnit/Framework/Interfaces/TestStatus.hpp"
// Including type: NUnit.Framework.Interfaces.FailureSite
#include "NUnit/Framework/Interfaces/FailureSite.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: BeforeAfterTestCommandState
  class BeforeAfterTestCommandState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::BeforeAfterTestCommandState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::BeforeAfterTestCommandState*, "UnityEngine.TestTools", "BeforeAfterTestCommandState");
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.BeforeAfterTestCommandState
  // [TokenAttribute] Offset: FFFFFFFF
  class BeforeAfterTestCommandState : public ::UnityEngine::ScriptableObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 NextBeforeStepIndex
    // Size: 0x4
    // Offset: 0x18
    int NextBeforeStepIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 NextBeforeStepPc
    // Size: 0x4
    // Offset: 0x1C
    int NextBeforeStepPc;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 NextAfterStepIndex
    // Size: 0x4
    // Offset: 0x20
    int NextAfterStepIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 NextAfterStepPc
    // Size: 0x4
    // Offset: 0x24
    int NextAfterStepPc;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean TestHasRun
    // Size: 0x1
    // Offset: 0x28
    bool TestHasRun;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: TestHasRun and: CurrentTestResultStatus
    char __padding4[0x3] = {};
    // public NUnit.Framework.Interfaces.TestStatus CurrentTestResultStatus
    // Size: 0x4
    // Offset: 0x2C
    ::NUnit::Framework::Interfaces::TestStatus CurrentTestResultStatus;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Interfaces::TestStatus) == 0x4);
    // public System.String CurrentTestResultLabel
    // Size: 0x8
    // Offset: 0x30
    ::StringW CurrentTestResultLabel;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public NUnit.Framework.Interfaces.FailureSite CurrentTestResultSite
    // Size: 0x4
    // Offset: 0x38
    ::NUnit::Framework::Interfaces::FailureSite CurrentTestResultSite;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Interfaces::FailureSite) == 0x4);
    // Padding between fields: CurrentTestResultSite and: CurrentTestMessage
    char __padding7[0x4] = {};
    // public System.String CurrentTestMessage
    // Size: 0x8
    // Offset: 0x40
    ::StringW CurrentTestMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String CurrentTestStrackTrace
    // Size: 0x8
    // Offset: 0x48
    ::StringW CurrentTestStrackTrace;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean TestAfterStarted
    // Size: 0x1
    // Offset: 0x50
    bool TestAfterStarted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: TestAfterStarted and: Timestamp
    char __padding10[0x7] = {};
    // public System.Int64 Timestamp
    // Size: 0x8
    // Offset: 0x58
    int64_t Timestamp;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Int32 NextBeforeStepIndex
    int& dyn_NextBeforeStepIndex();
    // Get instance field reference: public System.Int32 NextBeforeStepPc
    int& dyn_NextBeforeStepPc();
    // Get instance field reference: public System.Int32 NextAfterStepIndex
    int& dyn_NextAfterStepIndex();
    // Get instance field reference: public System.Int32 NextAfterStepPc
    int& dyn_NextAfterStepPc();
    // Get instance field reference: public System.Boolean TestHasRun
    bool& dyn_TestHasRun();
    // Get instance field reference: public NUnit.Framework.Interfaces.TestStatus CurrentTestResultStatus
    ::NUnit::Framework::Interfaces::TestStatus& dyn_CurrentTestResultStatus();
    // Get instance field reference: public System.String CurrentTestResultLabel
    ::StringW& dyn_CurrentTestResultLabel();
    // Get instance field reference: public NUnit.Framework.Interfaces.FailureSite CurrentTestResultSite
    ::NUnit::Framework::Interfaces::FailureSite& dyn_CurrentTestResultSite();
    // Get instance field reference: public System.String CurrentTestMessage
    ::StringW& dyn_CurrentTestMessage();
    // Get instance field reference: public System.String CurrentTestStrackTrace
    ::StringW& dyn_CurrentTestStrackTrace();
    // Get instance field reference: public System.Boolean TestAfterStarted
    bool& dyn_TestAfterStarted();
    // Get instance field reference: public System.Int64 Timestamp
    int64_t& dyn_Timestamp();
    // public System.Void Reset()
    // Offset: 0x1948270
    void Reset();
    // public System.Void StoreTestResult(NUnit.Framework.Internal.TestResult result)
    // Offset: 0x194828C
    void StoreTestResult(::NUnit::Framework::Internal::TestResult* result);
    // public System.Void ApplyTestResult(NUnit.Framework.Internal.TestResult result)
    // Offset: 0x1948324
    void ApplyTestResult(::NUnit::Framework::Internal::TestResult* result);
    // public System.Void .ctor()
    // Offset: 0x19483C4
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeforeAfterTestCommandState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::BeforeAfterTestCommandState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeforeAfterTestCommandState*, creationType>()));
    }
  }; // UnityEngine.TestTools.BeforeAfterTestCommandState
  #pragma pack(pop)
  static check_size<sizeof(BeforeAfterTestCommandState), 88 + sizeof(int64_t)> __UnityEngine_TestTools_BeforeAfterTestCommandStateSizeCheck;
  static_assert(sizeof(BeforeAfterTestCommandState) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::BeforeAfterTestCommandState::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::BeforeAfterTestCommandState::*)()>(&UnityEngine::TestTools::BeforeAfterTestCommandState::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::BeforeAfterTestCommandState*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::BeforeAfterTestCommandState::StoreTestResult
// Il2CppName: StoreTestResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::BeforeAfterTestCommandState::*)(::NUnit::Framework::Internal::TestResult*)>(&UnityEngine::TestTools::BeforeAfterTestCommandState::StoreTestResult)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::BeforeAfterTestCommandState*), "StoreTestResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::BeforeAfterTestCommandState::ApplyTestResult
// Il2CppName: ApplyTestResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestTools::BeforeAfterTestCommandState::*)(::NUnit::Framework::Internal::TestResult*)>(&UnityEngine::TestTools::BeforeAfterTestCommandState::ApplyTestResult)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "TestResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::BeforeAfterTestCommandState*), "ApplyTestResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::BeforeAfterTestCommandState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
