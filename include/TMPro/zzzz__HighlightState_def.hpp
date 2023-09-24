#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Color32;
}
namespace TMPro {
struct TMP_Offset;
}
// Forward declare root types
namespace TMPro {
struct HighlightState;
}
// Type: TMPro::HighlightState
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12273))
// CS Name: TMPro.HighlightState
struct CORDL_TYPE HighlightState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "color", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "padding", ty: "TMPro::TMP_Offset", modifiers: "", def_value: None }]
constexpr HighlightState(UnityEngine::Color32 color, TMPro::TMP_Offset padding) noexcept;


                    constexpr HighlightState(HighlightState const&) = default;
                    constexpr HighlightState(HighlightState&&) = default;
                    constexpr HighlightState& operator=(HighlightState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HighlightState& operator=(HighlightState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HighlightState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Color32 __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_color() const;

 TMPro::TMP_Offset __declspec(property(get=__get_padding, put=__set_padding))  padding;

constexpr void __set_padding(TMPro::TMP_Offset value) ;

constexpr TMPro::TMP_Offset __get_padding() const;


// Methods

/// @brief Method .ctor addr 0x2a6a28c size 0x10 virtual false final false
 void _ctor(UnityEngine::Color32 color, TMPro::TMP_Offset padding) ;

/// @brief Method op_Equality addr 0x2a6a29c size 0xc8 virtual false final false
static bool op_Equality(TMPro::HighlightState lhs, TMPro::HighlightState rhs) ;

/// @brief Method op_Inequality addr 0x2a6a364 size 0x48 virtual false final false
static bool op_Inequality(TMPro::HighlightState lhs, TMPro::HighlightState rhs) ;

/// @brief Method GetHashCode addr 0x2a6a3ac size 0x6c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2a6a418 size 0x80 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2a6a498 size 0xa4 virtual false final false
 bool Equals(TMPro::HighlightState other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::HighlightState, "TMPro", "HighlightState");
