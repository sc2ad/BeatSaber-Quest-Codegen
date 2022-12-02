// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.Commands.TestMethodCommand
#include "NUnit/Framework/Internal/Commands/TestMethodCommand.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
  // Forward declaring type: TestResult
  class TestResult;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Forward declaring type: UnityTestMethodCommand
  class UnityTestMethodCommand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestTools::UnityTestMethodCommand);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestTools::UnityTestMethodCommand*, "UnityEngine.TestTools", "UnityTestMethodCommand");
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.UnityTestMethodCommand
  // [TokenAttribute] Offset: FFFFFFFF
  class UnityTestMethodCommand : public ::NUnit::Framework::Internal::Commands::TestMethodCommand {
    public:
    // public System.Void .ctor(NUnit.Framework.Internal.TestMethod testMethod)
    // Offset: 0x2B57088
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTestMethodCommand* New_ctor(::NUnit::Framework::Internal::TestMethod* testMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestTools::UnityTestMethodCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTestMethodCommand*, creationType>(testMethod)));
    }
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x2B57090
    // Implemented from: NUnit.Framework.Internal.Commands.TestMethodCommand
    // Base method: NUnit.Framework.Internal.TestResult TestMethodCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    ::NUnit::Framework::Internal::TestResult* Execute(::NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // UnityEngine.TestTools.UnityTestMethodCommand
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::UnityTestMethodCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestTools::UnityTestMethodCommand::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Internal::TestResult* (UnityEngine::TestTools::UnityTestMethodCommand::*)(::NUnit::Framework::Internal::ITestExecutionContext*)>(&UnityEngine::TestTools::UnityTestMethodCommand::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::UnityTestMethodCommand*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
