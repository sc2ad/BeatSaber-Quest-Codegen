#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class IAvatarPart;
}
// Type: ::IAvatarPart
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4776))
// CS Name: IAvatarPart
class CORDL_TYPE IAvatarPart : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAvatarPart() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAvatarPart(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_id))  id;

 ::StringW __declspec(property(get=get_localizedName))  localizedName;


// Methods

/// @brief Method get_id addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_id() ;

/// @brief Method get_localizedName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_localizedName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IAvatarPart);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IAvatarPart, "", "IAvatarPart");
