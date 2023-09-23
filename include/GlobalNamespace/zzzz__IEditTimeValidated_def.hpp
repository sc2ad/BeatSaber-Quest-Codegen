#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace GlobalNamespace {
class IEditTimeValidated;
}
// Type: ::IEditTimeValidated
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13743))
// CS Name: IEditTimeValidated
class CORDL_TYPE IEditTimeValidated : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEditTimeValidated() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEditTimeValidated(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IEditTimeValidated);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IEditTimeValidated, "", "IEditTimeValidated");
