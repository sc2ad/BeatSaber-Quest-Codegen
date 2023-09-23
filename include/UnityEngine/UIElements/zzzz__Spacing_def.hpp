#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Spacing;
}
// Type: UnityEngine.UIElements::Spacing
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6883))
// CS Name: UnityEngine.UIElements.Spacing
struct CORDL_TYPE Spacing : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "left", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "top", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "right", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bottom", ty: "float_t", modifiers: "", def_value: None }]
constexpr Spacing(float_t left, float_t top, float_t right, float_t bottom) noexcept;


                    constexpr Spacing(Spacing const&) = default;
                    constexpr Spacing(Spacing&&) = default;
                    constexpr Spacing& operator=(Spacing const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Spacing& operator=(Spacing&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Spacing(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_left, put=__set_left))  left;

constexpr void __set_left(float_t value) ;

constexpr float_t __get_left() const;

 float_t __declspec(property(get=__get_top, put=__set_top))  top;

constexpr void __set_top(float_t value) ;

constexpr float_t __get_top() const;

 float_t __declspec(property(get=__get_right, put=__set_right))  right;

constexpr void __set_right(float_t value) ;

constexpr float_t __get_right() const;

 float_t __declspec(property(get=__get_bottom, put=__set_bottom))  bottom;

constexpr void __set_bottom(float_t value) ;

constexpr float_t __get_bottom() const;


// Properties

 float_t __declspec(property(get=get_horizontal))  horizontal;

 float_t __declspec(property(get=get_vertical))  vertical;


// Methods

/// @brief Method get_horizontal addr 0x2c440fc size 0x10 virtual false final false
 float_t get_horizontal() ;

/// @brief Method get_vertical addr 0x2c4410c size 0x10 virtual false final false
 float_t get_vertical() ;

/// @brief Method .ctor addr 0x2c4411c size 0xc virtual false final false
 void _ctor(float_t left, float_t top, float_t right, float_t bottom) ;

/// @brief Method op_Subtraction addr 0x2c44128 size 0xc8 virtual false final false
static UnityEngine::Rect op_Subtraction(UnityEngine::Rect r, UnityEngine::UIElements::Spacing a) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Spacing, "UnityEngine.UIElements", "Spacing");
