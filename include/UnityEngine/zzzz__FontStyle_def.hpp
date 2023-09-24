#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct FontStyle;
}
// Type: UnityEngine::FontStyle
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15780))
// CS Name: UnityEngine.FontStyle
struct CORDL_TYPE FontStyle : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FontStyle(int32_t value__) noexcept;


                    constexpr FontStyle(FontStyle const&) = default;
                    constexpr FontStyle(FontStyle&&) = default;
                    constexpr FontStyle& operator=(FontStyle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FontStyle& operator=(FontStyle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FontStyle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FontStyle_Unwrapped : int32_t {
__Normal = 0,
__Bold = 1,
__Italic = 2,
__BoldAndItalic = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FontStyle_Unwrapped () const noexcept {
return std::bit_cast<__FontStyle_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static UnityEngine::FontStyle const Normal;

/// @brief Field Bold offset 0
static UnityEngine::FontStyle const Bold;

/// @brief Field Italic offset 0
static UnityEngine::FontStyle const Italic;

/// @brief Field BoldAndItalic offset 0
static UnityEngine::FontStyle const BoldAndItalic;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::FontStyle, "UnityEngine", "FontStyle");
