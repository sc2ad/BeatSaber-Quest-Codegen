#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class IDesigner;
}
// Type: System.ComponentModel.Design::IDesigner
namespace System::ComponentModel::Design {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8349))
// CS Name: System.ComponentModel.Design.IDesigner
class CORDL_TYPE IDesigner : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

~IDesigner() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDesigner(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel::Design
NEED_NO_BOX(System::ComponentModel::Design::IDesigner);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Design::IDesigner, "System.ComponentModel.Design", "IDesigner");
