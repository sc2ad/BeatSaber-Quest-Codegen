#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
// Forward declare root types
namespace GlobalNamespace {
class ISaberMovementDataProcessor;
}
// Type: ::ISaberMovementDataProcessor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15104))
// CS Name: ISaberMovementDataProcessor
class CORDL_TYPE ISaberMovementDataProcessor : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISaberMovementDataProcessor() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISaberMovementDataProcessor(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ProcessNewData addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessNewData(GlobalNamespace::BladeMovementDataElement newData, GlobalNamespace::BladeMovementDataElement prevData, bool prevDataAreValid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ISaberMovementDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ISaberMovementDataProcessor, "", "ISaberMovementDataProcessor");
