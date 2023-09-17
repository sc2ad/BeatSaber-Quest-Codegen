#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ILightWithId;
}
// Type: ::ILightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14689))
// CS Name: ILightWithId
class CORDL_TYPE ILightWithId : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILightWithId() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILightWithId(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_isRegistered))  isRegistered;

 int32_t __declspec(property(get=get_lightId))  lightId;


// Methods

/// @brief Method get_isRegistered addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isRegistered() ;

/// @brief Method __SetIsRegistered addr 0x0 size 0xffffffffffffffff virtual true final false
 void __SetIsRegistered() ;

/// @brief Method __SetIsUnRegistered addr 0x0 size 0xffffffffffffffff virtual true final false
 void __SetIsUnRegistered() ;

/// @brief Method get_lightId addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_lightId() ;

/// @brief Method ColorWasSet addr 0x0 size 0xffffffffffffffff virtual true final false
 void ColorWasSet(::UnityEngine::Color color) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ILightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILightWithId, "", "ILightWithId");
