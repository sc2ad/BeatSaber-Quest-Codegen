// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/UnityWorkItem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Forward declaring type: TestCommand
  class TestCommand;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestFilter
  class ITestFilter;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: DefaultTestWorkItem
  class DefaultTestWorkItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "DefaultTestWorkItem");
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.DefaultTestWorkItem
  // [TokenAttribute] Offset: FFFFFFFF
  class DefaultTestWorkItem : public ::UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem {
    public:
    // Nested type: ::UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::$PerformWork$d__2
    class $PerformWork$d__2;
    public:
    // private NUnit.Framework.Internal.Commands.TestCommand _command
    // Size: 0x8
    // Offset: 0x58
    ::NUnit::Framework::Internal::Commands::TestCommand* command;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Internal::Commands::TestCommand*) == 0x8);
    public:
    // Creating conversion operator: operator ::NUnit::Framework::Internal::Commands::TestCommand*
    constexpr operator ::NUnit::Framework::Internal::Commands::TestCommand*() const noexcept {
      return command;
    }
    // Get instance field reference: private NUnit.Framework.Internal.Commands.TestCommand _command
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Internal::Commands::TestCommand*& dyn__command();
    // public System.Void .ctor(NUnit.Framework.Internal.TestMethod test, NUnit.Framework.Interfaces.ITestFilter filter)
    // Offset: 0x198C894
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultTestWorkItem* New_ctor(::NUnit::Framework::Internal::TestMethod* test, ::NUnit::Framework::Interfaces::ITestFilter* filter) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultTestWorkItem*, creationType>(test, filter)));
    }
    // protected override System.Collections.IEnumerable PerformWork()
    // Offset: 0x198C8D8
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem
    // Base method: System.Collections.IEnumerable UnityWorkItem::PerformWork()
    ::System::Collections::IEnumerable* PerformWork();
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.DefaultTestWorkItem
  #pragma pack(pop)
  static check_size<sizeof(DefaultTestWorkItem), 88 + sizeof(::NUnit::Framework::Internal::Commands::TestCommand*)> __UnityEngine_TestRunner_NUnitExtensions_Runner_DefaultTestWorkItemSizeCheck;
  static_assert(sizeof(DefaultTestWorkItem) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::PerformWork
// Il2CppName: PerformWork
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::*)()>(&UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem::PerformWork)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestRunner::NUnitExtensions::Runner::DefaultTestWorkItem*), "PerformWork", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
