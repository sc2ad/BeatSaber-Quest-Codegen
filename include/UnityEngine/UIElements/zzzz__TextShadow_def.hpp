#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextShadow;
}
// Type: UnityEngine.UIElements::TextShadow
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6875))
// CS Name: UnityEngine.UIElements.TextShadow
struct CORDL_TYPE TextShadow : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::TextShadow>() const;

// Ctor Parameters [CppParam { name: "offset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "blurRadius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
constexpr TextShadow(::UnityEngine::Vector2 offset, float_t blurRadius, ::UnityEngine::Color color) noexcept;


                    constexpr TextShadow(TextShadow const&) = default;
                    constexpr TextShadow(TextShadow&&) = default;
                    constexpr TextShadow& operator=(TextShadow const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextShadow& operator=(TextShadow&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextShadow(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector2 __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_offset() const;

 float_t __declspec(property(get=__get_blurRadius, put=__set_blurRadius))  blurRadius;

constexpr void __set_blurRadius(float_t value) ;

constexpr float_t __get_blurRadius() const;

 ::UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_color() const;


// Methods

/// @brief Method Equals addr 0x2c41c1c size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2c41cac size 0x80 virtual true final true
 bool Equals(::UnityEngine::UIElements::TextShadow other) ;

/// @brief Method GetHashCode addr 0x2c41d2c size 0xd8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2c41e04 size 0x30 virtual false final false
static bool op_Equality(::UnityEngine::UIElements::TextShadow style1, ::UnityEngine::UIElements::TextShadow style2) ;

/// @brief Method op_Inequality addr 0x2c41e34 size 0x48 virtual false final false
static bool op_Inequality(::UnityEngine::UIElements::TextShadow style1, ::UnityEngine::UIElements::TextShadow style2) ;

/// @brief Method ToString addr 0x2c41e7c size 0xf4 virtual true final false
 ::StringW ToString() ;

/// @brief Method LerpUnclamped addr 0x2c41f70 size 0x58 virtual false final false
static ::UnityEngine::UIElements::TextShadow LerpUnclamped(::UnityEngine::UIElements::TextShadow a, ::UnityEngine::UIElements::TextShadow b, float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextShadow, "UnityEngine.UIElements", "TextShadow");
