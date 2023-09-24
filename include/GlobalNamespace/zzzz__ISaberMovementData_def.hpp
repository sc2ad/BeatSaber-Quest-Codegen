#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
namespace GlobalNamespace {
class ISaberMovementDataProcessor;
}
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
// Forward declare root types
namespace GlobalNamespace {
class ISaberMovementData;
}
// Type: ::ISaberMovementData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15103))
// CS Name: ISaberMovementData
class CORDL_TYPE ISaberMovementData : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISaberMovementData() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISaberMovementData(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 GlobalNamespace::BladeMovementDataElement __declspec(property(get=get_lastAddedData))  lastAddedData;


// Methods

/// @brief Method get_lastAddedData addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::BladeMovementDataElement get_lastAddedData() ;

/// @brief Method AddDataProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddDataProcessor(GlobalNamespace::ISaberMovementDataProcessor dataProcessor) ;

/// @brief Method RemoveDataProcessor addr 0x0 size 0xffffffffffffffff virtual true final false
 void RemoveDataProcessor(GlobalNamespace::ISaberMovementDataProcessor dataProcessor) ;

/// @brief Method RequestLastDataProcessing addr 0x0 size 0xffffffffffffffff virtual true final false
 void RequestLastDataProcessing(GlobalNamespace::ISaberMovementDataProcessor dataProcessor) ;

/// @brief Method ComputeSwingRating addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t ComputeSwingRating(float_t overrideSegmentAngle) ;

/// @brief Method ComputeSwingRating addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t ComputeSwingRating() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ISaberMovementData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ISaberMovementData, "", "ISaberMovementData");
