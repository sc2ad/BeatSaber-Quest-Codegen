// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
  // Forward declaring type: TestResult
  class TestResult;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Forward declaring type: TestCommand
  class TestCommand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::Commands::TestCommand);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::Commands::TestCommand*, "NUnit.Framework.Internal.Commands", "TestCommand");
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Commands.TestCommand
  // [TokenAttribute] Offset: FFFFFFFF
  class TestCommand : public ::Il2CppObject {
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
    // [DebuggerBrowsableAttribute] Offset: 0x12369A8
    // private NUnit.Framework.Internal.Test <Test>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::NUnit::Framework::Internal::Test* Test;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Internal::Test*) == 0x8);
    public:
    // Creating conversion operator: operator ::NUnit::Framework::Internal::Test*
    constexpr operator ::NUnit::Framework::Internal::Test*() const noexcept {
      return Test;
    }
    // Get instance field reference: private NUnit.Framework.Internal.Test <Test>k__BackingField
    ::NUnit::Framework::Internal::Test*& dyn_$Test$k__BackingField();
    // public NUnit.Framework.Internal.Test get_Test()
    // Offset: 0x1B61F74
    ::NUnit::Framework::Internal::Test* get_Test();
    // private System.Void set_Test(NUnit.Framework.Internal.Test value)
    // Offset: 0x1B61F7C
    void set_Test(::NUnit::Framework::Internal::Test* value);
    // public System.Void .ctor(NUnit.Framework.Internal.Test test)
    // Offset: 0x1B60820
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestCommand* New_ctor(::NUnit::Framework::Internal::Test* test) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::Commands::TestCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestCommand*, creationType>(test)));
    }
    // public NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0xFFFFFFFF
    ::NUnit::Framework::Internal::TestResult* Execute(::NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // NUnit.Framework.Internal.Commands.TestCommand
  #pragma pack(pop)
  static check_size<sizeof(TestCommand), 16 + sizeof(::NUnit::Framework::Internal::Test*)> __NUnit_Framework_Internal_Commands_TestCommandSizeCheck;
  static_assert(sizeof(TestCommand) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::TestCommand::get_Test
// Il2CppName: get_Test
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Internal::Test* (NUnit::Framework::Internal::Commands::TestCommand::*)()>(&NUnit::Framework::Internal::Commands::TestCommand::get_Test)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::TestCommand*), "get_Test", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::TestCommand::set_Test
// Il2CppName: set_Test
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Internal::Commands::TestCommand::*)(::NUnit::Framework::Internal::Test*)>(&NUnit::Framework::Internal::Commands::TestCommand::set_Test)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "Test")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::TestCommand*), "set_Test", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::TestCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::TestCommand::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Internal::TestResult* (NUnit::Framework::Internal::Commands::TestCommand::*)(::NUnit::Framework::Internal::ITestExecutionContext*)>(&NUnit::Framework::Internal::Commands::TestCommand::Execute)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Internal", "ITestExecutionContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::TestCommand*), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
