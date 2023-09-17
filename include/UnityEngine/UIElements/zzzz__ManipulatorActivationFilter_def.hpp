#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct MouseButton;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine::UIElements {
class IMouseEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ManipulatorActivationFilter;
}
// Type: UnityEngine.UIElements::ManipulatorActivationFilter
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6868))
// CS Name: UnityEngine.UIElements.ManipulatorActivationFilter
struct CORDL_TYPE ManipulatorActivationFilter : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::ManipulatorActivationFilter>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::ManipulatorActivationFilter>() const;

// Ctor Parameters [CppParam { name: "_button_k__BackingField", ty: "::UnityEngine::UIElements::MouseButton", modifiers: "", def_value: None }, CppParam { name: "_modifiers_k__BackingField", ty: "::UnityEngine::EventModifiers", modifiers: "", def_value: None }, CppParam { name: "_clickCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ManipulatorActivationFilter(::UnityEngine::UIElements::MouseButton _button_k__BackingField, ::UnityEngine::EventModifiers _modifiers_k__BackingField, int32_t _clickCount_k__BackingField) noexcept;


                    constexpr ManipulatorActivationFilter(ManipulatorActivationFilter const&) = default;
                    constexpr ManipulatorActivationFilter(ManipulatorActivationFilter&&) = default;
                    constexpr ManipulatorActivationFilter& operator=(ManipulatorActivationFilter const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ManipulatorActivationFilter& operator=(ManipulatorActivationFilter&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ManipulatorActivationFilter(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::MouseButton __declspec(property(get=__get__button_k__BackingField, put=__set__button_k__BackingField))  _button_k__BackingField;

constexpr void __set__button_k__BackingField(::UnityEngine::UIElements::MouseButton value) ;

constexpr ::UnityEngine::UIElements::MouseButton __get__button_k__BackingField() const;

 ::UnityEngine::EventModifiers __declspec(property(get=__get__modifiers_k__BackingField, put=__set__modifiers_k__BackingField))  _modifiers_k__BackingField;

constexpr void __set__modifiers_k__BackingField(::UnityEngine::EventModifiers value) ;

constexpr ::UnityEngine::EventModifiers __get__modifiers_k__BackingField() const;

 int32_t __declspec(property(get=__get__clickCount_k__BackingField, put=__set__clickCount_k__BackingField))  _clickCount_k__BackingField;

constexpr void __set__clickCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__clickCount_k__BackingField() const;


// Properties

 ::UnityEngine::UIElements::MouseButton __declspec(property(get=get_button, put=set_button))  button;

 ::UnityEngine::EventModifiers __declspec(property(get=get_modifiers))  modifiers;

 int32_t __declspec(property(get=get_clickCount))  clickCount;


// Methods

/// @brief Method get_button addr 0x2c40b10 size 0x8 virtual false final false
 ::UnityEngine::UIElements::MouseButton get_button() ;

/// @brief Method set_button addr 0x2c40b18 size 0x8 virtual false final false
 void set_button(::UnityEngine::UIElements::MouseButton value) ;

/// @brief Method get_modifiers addr 0x2c40b20 size 0x8 virtual false final false
 ::UnityEngine::EventModifiers get_modifiers() ;

/// @brief Method get_clickCount addr 0x2c40b28 size 0x8 virtual false final false
 int32_t get_clickCount() ;

/// @brief Method Equals addr 0x2c40b30 size 0x98 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2c40bc8 size 0x34 virtual true final true
 bool Equals(::UnityEngine::UIElements::ManipulatorActivationFilter other) ;

/// @brief Method GetHashCode addr 0x2c40bfc size 0x80 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Matches addr 0x2c40c7c size 0x158 virtual false final false
 bool Matches(::UnityEngine::UIElements::IMouseEvent e) ;

/// @brief Method HasModifiers addr 0x2c40dd4 size 0x1f4 virtual false final false
 bool HasModifiers(::UnityEngine::UIElements::IMouseEvent e) ;

/// @brief Method Matches addr 0x2c4101c size 0x158 virtual false final false
 bool Matches(::UnityEngine::UIElements::IPointerEvent e) ;

/// @brief Method HasModifiers addr 0x2c41174 size 0x1f4 virtual false final false
 bool HasModifiers(::UnityEngine::UIElements::IPointerEvent e) ;

/// @brief Method MatchModifiers addr 0x2c40fc8 size 0x54 virtual false final false
 bool MatchModifiers(bool alt, bool ctrl, bool shift, bool command) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ManipulatorActivationFilter, "UnityEngine.UIElements", "ManipulatorActivationFilter");
