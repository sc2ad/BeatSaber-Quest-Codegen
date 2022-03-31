// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.RepeatAttribute
#include "NUnit/Framework/RepeatAttribute.hpp"
// Including type: NUnit.Framework.Internal.Commands.DelegatingTestCommand
#include "NUnit/Framework/Internal/Commands/DelegatingTestCommand.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::RepeatAttribute::RepeatedTestCommand);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::RepeatAttribute::RepeatedTestCommand*, "NUnit.Framework", "RepeatAttribute/RepeatedTestCommand");
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.RepeatAttribute/NUnit.Framework.RepeatedTestCommand
  // [TokenAttribute] Offset: FFFFFFFF
  class RepeatAttribute::RepeatedTestCommand : public ::NUnit::Framework::Internal::Commands::DelegatingTestCommand {
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
    // private System.Int32 repeatCount
    // Size: 0x4
    // Offset: 0x20
    int repeatCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 repeatCount
    int& dyn_repeatCount();
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x29B9DA4
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    ::NUnit::Framework::Internal::TestResult* Execute(::NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // NUnit.Framework.RepeatAttribute/NUnit.Framework.RepeatedTestCommand
  #pragma pack(pop)
  static check_size<sizeof(RepeatAttribute::RepeatedTestCommand), 32 + sizeof(int)> __NUnit_Framework_RepeatAttribute_RepeatedTestCommandSizeCheck;
  static_assert(sizeof(RepeatAttribute::RepeatedTestCommand) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::RepeatAttribute::RepeatedTestCommand::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Internal::TestResult* (NUnit::Framework::RepeatAttribute::RepeatedTestCommand::*)(::NUnit::Framework::Internal::ITestExecutionContext*)>(&NUnit::Framework::RepeatAttribute::RepeatedTestCommand::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::RepeatAttribute::RepeatedTestCommand*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
