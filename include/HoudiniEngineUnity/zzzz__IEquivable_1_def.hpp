#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Type: HoudiniEngineUnity::IEquivable`1
namespace HoudiniEngineUnity {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9824))
// CS Name: HoudiniEngineUnity.IEquivable`1
class CORDL_TYPE IEquivable_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEquivable_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEquivable_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method IsEquivalentTo addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsEquivalentTo(T other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HoudiniEngineUnity::IEquivable_1, "HoudiniEngineUnity", "IEquivable`1");
