// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.Commands.DelegatingTestCommand
#include "NUnit/Framework/Internal/Commands/DelegatingTestCommand.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.IEnumerableTestMethodCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/IEnumerableTestMethodCommand.hpp"
// Including type: NUnit.Framework.RepeatAttribute
#include "NUnit/Framework/RepeatAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools
namespace UnityEngine::TestTools {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
  // Forward declaring type: TestResult
  class TestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.EnumerableRepeatedTestCommand
  // [TokenAttribute] Offset: FFFFFFFF
  class EnumerableRepeatedTestCommand : public NUnit::Framework::Internal::Commands::DelegatingTestCommand/*, public UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand*/ {
    public:
    // Nested type: UnityEngine::TestTools::EnumerableRepeatedTestCommand::$ExecuteEnumerable$d__3
    class $ExecuteEnumerable$d__3;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Int32 repeatCount
    // Size: 0x4
    // Offset: 0x20
    int repeatCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand
    operator UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand() noexcept {
      return *reinterpret_cast<UnityEngine::TestRunner::NUnitExtensions::Runner::IEnumerableTestMethodCommand*>(this);
    }
    // Get instance field reference: private System.Int32 repeatCount
    int& dyn_repeatCount();
    // public System.Void .ctor(NUnit.Framework.RepeatAttribute/NUnit.Framework.RepeatedTestCommand commandToReplace)
    // Offset: 0x1664D68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumerableRepeatedTestCommand* New_ctor(NUnit::Framework::RepeatAttribute::RepeatedTestCommand* commandToReplace) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::EnumerableRepeatedTestCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumerableRepeatedTestCommand*, creationType>(commandToReplace)));
    }
    // public System.Collections.IEnumerable ExecuteEnumerable(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x166CC80
    System::Collections::IEnumerable* ExecuteEnumerable(NUnit::Framework::Internal::ITestExecutionContext* context);
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x166CC14
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // UnityEngine.TestTools.EnumerableRepeatedTestCommand
  #pragma pack(pop)
  static check_size<sizeof(EnumerableRepeatedTestCommand), 32 + sizeof(int)> __UnityEngine_TestTools_EnumerableRepeatedTestCommandSizeCheck;
  static_assert(sizeof(EnumerableRepeatedTestCommand) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableRepeatedTestCommand*, "UnityEngine.TestTools", "EnumerableRepeatedTestCommand");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRepeatedTestCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRepeatedTestCommand::ExecuteEnumerable
// Il2CppName: ExecuteEnumerable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerable* (UnityEngine::TestTools::EnumerableRepeatedTestCommand::*)(NUnit::Framework::Internal::ITestExecutionContext*)>(&UnityEngine::TestTools::EnumerableRepeatedTestCommand::ExecuteEnumerable)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableRepeatedTestCommand*), "ExecuteEnumerable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::EnumerableRepeatedTestCommand::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<NUnit::Framework::Internal::TestResult* (UnityEngine::TestTools::EnumerableRepeatedTestCommand::*)(NUnit::Framework::Internal::ITestExecutionContext*)>(&UnityEngine::TestTools::EnumerableRepeatedTestCommand::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::EnumerableRepeatedTestCommand*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
