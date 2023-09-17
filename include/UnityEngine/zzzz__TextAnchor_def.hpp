#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct TextAnchor;
}
// Type: UnityEngine::TextAnchor
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15785))
// CS Name: UnityEngine.TextAnchor
struct CORDL_TYPE TextAnchor : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TextAnchor(int32_t value__) noexcept;


                    constexpr TextAnchor(TextAnchor const&) = default;
                    constexpr TextAnchor(TextAnchor&&) = default;
                    constexpr TextAnchor& operator=(TextAnchor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextAnchor& operator=(TextAnchor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextAnchor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TextAnchor_Unwrapped : int32_t {
__UpperLeft = 0,
__UpperCenter = 1,
__UpperRight = 2,
__MiddleLeft = 3,
__MiddleCenter = 4,
__MiddleRight = 5,
__LowerLeft = 6,
__LowerCenter = 7,
__LowerRight = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TextAnchor_Unwrapped () const noexcept {
return std::bit_cast<__TextAnchor_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UpperLeft offset 0
static ::UnityEngine::TextAnchor const UpperLeft;

/// @brief Field UpperCenter offset 0
static ::UnityEngine::TextAnchor const UpperCenter;

/// @brief Field UpperRight offset 0
static ::UnityEngine::TextAnchor const UpperRight;

/// @brief Field MiddleLeft offset 0
static ::UnityEngine::TextAnchor const MiddleLeft;

/// @brief Field MiddleCenter offset 0
static ::UnityEngine::TextAnchor const MiddleCenter;

/// @brief Field MiddleRight offset 0
static ::UnityEngine::TextAnchor const MiddleRight;

/// @brief Field LowerLeft offset 0
static ::UnityEngine::TextAnchor const LowerLeft;

/// @brief Field LowerCenter offset 0
static ::UnityEngine::TextAnchor const LowerCenter;

/// @brief Field LowerRight offset 0
static ::UnityEngine::TextAnchor const LowerRight;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextAnchor, "UnityEngine", "TextAnchor");
