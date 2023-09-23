#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
// Forward declare root types
namespace GlobalNamespace {
class IBladeMovementData;
}
// Type: ::IBladeMovementData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15101))
// CS Name: IBladeMovementData
class CORDL_TYPE IBladeMovementData : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBladeMovementData() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBladeMovementData(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 float_t __declspec(property(get=get_bladeSpeed))  bladeSpeed;

 GlobalNamespace::BladeMovementDataElement __declspec(property(get=get_lastAddedData))  lastAddedData;

 GlobalNamespace::BladeMovementDataElement __declspec(property(get=get_prevAddedData))  prevAddedData;


// Methods

/// @brief Method get_bladeSpeed addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_bladeSpeed() ;

/// @brief Method get_lastAddedData addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::BladeMovementDataElement get_lastAddedData() ;

/// @brief Method get_prevAddedData addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::BladeMovementDataElement get_prevAddedData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IBladeMovementData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBladeMovementData, "", "IBladeMovementData");
