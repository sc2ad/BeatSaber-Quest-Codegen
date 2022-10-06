// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.Commands.TestCommand
#include "NUnit/Framework/Internal/Commands/TestCommand.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/IEnumerableTestMethodCommand.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
  // Forward declaring type: TestResult
  class TestResult;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: FailCommand
  class FailCommand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "FailCommand");
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.FailCommand
  // [TokenAttribute] Offset: FFFFFFFF
  class FailCommand : public ::NUnit::Framework::Internal::Commands::TestCommand/*, public ::UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand*/ {
    public:
    // Nested type: ::UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand::$ExecuteEnumerable$d__4
    class $ExecuteEnumerable$d__4;
    public:
    // private NUnit.Framework.Interfaces.ResultState m_ResultState
    // Size: 0x8
    // Offset: 0x18
    ::NUnit::Framework::Interfaces::ResultState* m_ResultState;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Interfaces::ResultState*) == 0x8);
    // private System.String m_Message
    // Size: 0x8
    // Offset: 0x20
    ::StringW m_Message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand
    operator ::UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand() noexcept {
      return *reinterpret_cast<::UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand*>(this);
    }
    // Creating interface conversion operator: i_IEnumerableTestMethodCommand
    inline ::UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand* i_IEnumerableTestMethodCommand() noexcept {
      return reinterpret_cast<::UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand*>(this);
    }
    // Deleting conversion operator: operator ::NUnit::Framework::Internal::Test*
    constexpr operator ::NUnit::Framework::Internal::Test*() const noexcept = delete;
    // Get instance field reference: private NUnit.Framework.Interfaces.ResultState m_ResultState
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Interfaces::ResultState*& dyn_m_ResultState();
    // Get instance field reference: private System.String m_Message
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Message();
    // public System.Void .ctor(NUnit.Framework.Internal.Test test, NUnit.Framework.Interfaces.ResultState resultState, System.String message)
    // Offset: 0x1951B9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FailCommand* New_ctor(::NUnit::Framework::Internal::Test* test, ::NUnit::Framework::Interfaces::ResultState* resultState, ::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FailCommand*, creationType>(test, resultState, message)));
    }
    // public System.Collections.IEnumerable ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x1951CFC
    ::System::Collections::IEnumerable* ExecuteEnumerable(::NUnit::Framework::Internal::ITestExecutionContext* context);
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x1951BD4
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    ::NUnit::Framework::Internal::TestResult* Execute(::NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.FailCommand
  #pragma pack(pop)
  static check_size<sizeof(FailCommand), 32 + sizeof(::StringW)> __UnityEngine_TestRunner_NUnitExtensions_Runner_FailCommandSizeCheck;
  static_assert(sizeof(FailCommand) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand::ExecuteEnumerable
// Il2CppName: ExecuteEnumerable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand::*)(::NUnit::Framework::Internal::ITestExecutionContext*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand::ExecuteEnumerable)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand*), "ExecuteEnumerable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Internal::TestResult* (UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand::*)(::NUnit::Framework::Internal::ITestExecutionContext*)>(&UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::FailCommand*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
