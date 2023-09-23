#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
class IBeatToTimeConvertor;
}
// Type: ::IBeatToTimeConvertor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4287))
// CS Name: IBeatToTimeConvertor
class CORDL_TYPE IBeatToTimeConvertor : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBeatToTimeConvertor() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBeatToTimeConvertor(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ConvertBeatToTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t ConvertBeatToTime(float_t beat) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IBeatToTimeConvertor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBeatToTimeConvertor, "", "IBeatToTimeConvertor");
