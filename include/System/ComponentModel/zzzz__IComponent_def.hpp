#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace System {
class IDisposable;
}
namespace System::ComponentModel {
class ISite;
}
// Forward declare root types
namespace System::ComponentModel {
class IComponent;
}
// Type: System.ComponentModel::IComponent
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8324))
// CS Name: System.ComponentModel.IComponent
class CORDL_TYPE IComponent : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

~IComponent() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IComponent(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::System::ComponentModel::ISite __declspec(property(get=get_Site))  Site;


// Methods

/// @brief Method get_Site addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::ComponentModel::ISite get_Site() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::IComponent);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IComponent, "System.ComponentModel", "IComponent");
