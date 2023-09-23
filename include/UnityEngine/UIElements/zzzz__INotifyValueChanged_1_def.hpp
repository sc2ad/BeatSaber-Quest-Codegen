#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class INotifyValueChanged_1;
}
// Type: UnityEngine.UIElements::INotifyValueChanged`1
namespace UnityEngine::UIElements {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7225))
// CS Name: UnityEngine.UIElements.INotifyValueChanged`1
class CORDL_TYPE INotifyValueChanged_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INotifyValueChanged_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INotifyValueChanged_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 T __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_value() ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_value(T value) ;

/// @brief Method SetValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetValueWithoutNotify(T newValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::INotifyValueChanged_1, "UnityEngine.UIElements", "INotifyValueChanged`1");
