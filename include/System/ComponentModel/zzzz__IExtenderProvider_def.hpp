#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::ComponentModel {
class IExtenderProvider;
}
// Type: System.ComponentModel::IExtenderProvider
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8283))
// CS Name: System.ComponentModel.IExtenderProvider
class CORDL_TYPE IExtenderProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IExtenderProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IExtenderProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CanExtend addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CanExtend(::bs_hook::Il2CppWrapperType extendee) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::IExtenderProvider);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::IExtenderProvider, "System.ComponentModel", "IExtenderProvider");
