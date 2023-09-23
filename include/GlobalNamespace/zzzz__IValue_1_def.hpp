#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class IValue_1;
}
// Type: ::IValue`1
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13902))
// CS Name: IValue`1
class CORDL_TYPE IValue_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IValue_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IValue_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 T __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_value() ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_value(T value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::IValue_1, "", "IValue`1");
