#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct TextAlignment;
}
// Type: UnityEngine::TextAlignment
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15784))
// CS Name: UnityEngine.TextAlignment
struct CORDL_TYPE TextAlignment : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextAlignment(int32_t value__) noexcept;


                    constexpr TextAlignment(TextAlignment const&) = default;
                    constexpr TextAlignment(TextAlignment&&) = default;
                    constexpr TextAlignment& operator=(TextAlignment const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextAlignment& operator=(TextAlignment&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextAlignment(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TextAlignment_Unwrapped : int32_t {
__Left = 0,
__Center = 1,
__Right = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextAlignment_Unwrapped () const noexcept {
return std::bit_cast<__TextAlignment_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Left offset 0
static UnityEngine::TextAlignment const Left;

/// @brief Field Center offset 0
static UnityEngine::TextAlignment const Center;

/// @brief Field Right offset 0
static UnityEngine::TextAlignment const Right;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextAlignment, "UnityEngine", "TextAlignment");
