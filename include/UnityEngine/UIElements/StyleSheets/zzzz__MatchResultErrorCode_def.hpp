#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResultErrorCode;
}
// Type: UnityEngine.UIElements.StyleSheets::MatchResultErrorCode
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7580))
// CS Name: UnityEngine.UIElements.StyleSheets.MatchResultErrorCode
struct CORDL_TYPE MatchResultErrorCode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MatchResultErrorCode(int32_t value__) noexcept;


                    constexpr MatchResultErrorCode(MatchResultErrorCode const&) = default;
                    constexpr MatchResultErrorCode(MatchResultErrorCode&&) = default;
                    constexpr MatchResultErrorCode& operator=(MatchResultErrorCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MatchResultErrorCode& operator=(MatchResultErrorCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MatchResultErrorCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MatchResultErrorCode_Unwrapped : int32_t {
__None = 0,
__Syntax = 1,
__EmptyValue = 2,
__ExpectedEndOfValue = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MatchResultErrorCode_Unwrapped () const noexcept {
return std::bit_cast<__MatchResultErrorCode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const None;

/// @brief Field Syntax offset 0
static UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const Syntax;

/// @brief Field EmptyValue offset 0
static UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const EmptyValue;

/// @brief Field ExpectedEndOfValue offset 0
static UnityEngine::UIElements::StyleSheets::MatchResultErrorCode const ExpectedEndOfValue;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::MatchResultErrorCode, "UnityEngine.UIElements.StyleSheets", "MatchResultErrorCode");
