#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::ComponentModel {
class MemberDescriptor;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class IComponentChangeService;
}
// Type: System.ComponentModel.Design::IComponentChangeService
namespace System::ComponentModel::Design {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8348))
// CS Name: System.ComponentModel.Design.IComponentChangeService
class CORDL_TYPE IComponentChangeService : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IComponentChangeService() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IComponentChangeService(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnComponentChanged addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnComponentChanged(::bs_hook::Il2CppWrapperType component, ::System::ComponentModel::MemberDescriptor member, ::bs_hook::Il2CppWrapperType oldValue, ::bs_hook::Il2CppWrapperType newValue) ;

/// @brief Method OnComponentChanging addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnComponentChanging(::bs_hook::Il2CppWrapperType component, ::System::ComponentModel::MemberDescriptor member) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel::Design
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::Design::IComponentChangeService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::IComponentChangeService, "System.ComponentModel.Design", "IComponentChangeService");
