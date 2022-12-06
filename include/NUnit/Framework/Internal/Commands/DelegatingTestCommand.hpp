// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Internal.Commands.TestCommand
#include "NUnit/Framework/Internal/Commands/TestCommand.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Forward declaring type: DelegatingTestCommand
  class DelegatingTestCommand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::Commands::DelegatingTestCommand);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::Commands::DelegatingTestCommand*, "NUnit.Framework.Internal.Commands", "DelegatingTestCommand");
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Commands.DelegatingTestCommand
  // [TokenAttribute] Offset: FFFFFFFF
  class DelegatingTestCommand : public ::NUnit::Framework::Internal::Commands::TestCommand {
    public:
    public:
    // protected NUnit.Framework.Internal.Commands.TestCommand innerCommand
    // Size: 0x8
    // Offset: 0x18
    ::NUnit::Framework::Internal::Commands::TestCommand* innerCommand;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Internal::Commands::TestCommand*) == 0x8);
    public:
    // Deleting conversion operator: operator ::NUnit::Framework::Internal::Test*
    constexpr operator ::NUnit::Framework::Internal::Test*() const noexcept = delete;
    // Get instance field reference: protected NUnit.Framework.Internal.Commands.TestCommand innerCommand
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Internal::Commands::TestCommand*& dyn_innerCommand();
    // protected System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    // Offset: 0x1D59120
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DelegatingTestCommand* New_ctor(::NUnit::Framework::Internal::Commands::TestCommand* innerCommand) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Internal::Commands::DelegatingTestCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DelegatingTestCommand*, creationType>(innerCommand)));
    }
    // public NUnit.Framework.Internal.Commands.TestCommand GetInnerCommand()
    // Offset: 0x1D596A8
    ::NUnit::Framework::Internal::Commands::TestCommand* GetInnerCommand();
  }; // NUnit.Framework.Internal.Commands.DelegatingTestCommand
  #pragma pack(pop)
  static check_size<sizeof(DelegatingTestCommand), 24 + sizeof(::NUnit::Framework::Internal::Commands::TestCommand*)> __NUnit_Framework_Internal_Commands_DelegatingTestCommandSizeCheck;
  static_assert(sizeof(DelegatingTestCommand) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::DelegatingTestCommand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Internal::Commands::DelegatingTestCommand::GetInnerCommand
// Il2CppName: GetInnerCommand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Internal::Commands::TestCommand* (NUnit::Framework::Internal::Commands::DelegatingTestCommand::*)()>(&NUnit::Framework::Internal::Commands::DelegatingTestCommand::GetInnerCommand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Commands::DelegatingTestCommand*), "GetInnerCommand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
