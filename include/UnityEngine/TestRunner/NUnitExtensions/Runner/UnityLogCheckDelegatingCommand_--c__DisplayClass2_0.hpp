// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/UnityLogCheckDelegatingCommand.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass2_0*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "UnityLogCheckDelegatingCommand/<>c__DisplayClass2_0");
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand/UnityEngine.TestRunner.NUnitExtensions.Runner.<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class UnityLogCheckDelegatingCommand::$$c__DisplayClass2_0 : public ::Il2CppObject {
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
    // public UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand* $$4__this;
    // Field size check
    static_assert(sizeof(::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand*) == 0x8);
    // public NUnit.Framework.Internal.ITestExecutionContext context
    // Size: 0x8
    // Offset: 0x18
    ::NUnit::Framework::Internal::ITestExecutionContext* context;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Internal::ITestExecutionContext*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand <>4__this
    ::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand*& dyn_$$4__this();
    // Get instance field reference: public NUnit.Framework.Internal.ITestExecutionContext context
    ::NUnit::Framework::Internal::ITestExecutionContext*& dyn_context();
    // System.Void <Execute>b__0()
    // Offset: 0x1941B78
    void $Execute$b__0();
    // public System.Void .ctor()
    // Offset: 0x194122C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityLogCheckDelegatingCommand::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityLogCheckDelegatingCommand::$$c__DisplayClass2_0*, creationType>()));
    }
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.UnityLogCheckDelegatingCommand/UnityEngine.TestRunner.NUnitExtensions.Runner.<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(UnityLogCheckDelegatingCommand::$$c__DisplayClass2_0), 24 + sizeof(::NUnit::Framework::Internal::ITestExecutionContext*)> __UnityEngine_TestRunner_NUnitExtensions_Runner_UnityLogCheckDelegatingCommand_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(UnityLogCheckDelegatingCommand::$$c__DisplayClass2_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass2_0::$Execute$b__0
// Il2CppName: <Execute>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass2_0::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass2_0::$Execute$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass2_0*), "<Execute>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::UnityLogCheckDelegatingCommand::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
