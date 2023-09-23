#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace JetBrains::Annotations {
struct AssertionConditionType;
}
// Type: JetBrains.Annotations::AssertionConditionType
namespace JetBrains::Annotations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15729))
// CS Name: JetBrains.Annotations.AssertionConditionType
struct CORDL_TYPE AssertionConditionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AssertionConditionType(int32_t value__) noexcept;


                    constexpr AssertionConditionType(AssertionConditionType const&) = default;
                    constexpr AssertionConditionType(AssertionConditionType&&) = default;
                    constexpr AssertionConditionType& operator=(AssertionConditionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AssertionConditionType& operator=(AssertionConditionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AssertionConditionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AssertionConditionType_Unwrapped : int32_t {
__IS_TRUE = 0,
__IS_FALSE = 1,
__IS_NULL = 2,
__IS_NOT_NULL = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AssertionConditionType_Unwrapped () const noexcept {
return std::bit_cast<__AssertionConditionType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field IS_TRUE offset 0
static JetBrains::Annotations::AssertionConditionType const IS_TRUE;

/// @brief Field IS_FALSE offset 0
static JetBrains::Annotations::AssertionConditionType const IS_FALSE;

/// @brief Field IS_NULL offset 0
static JetBrains::Annotations::AssertionConditionType const IS_NULL;

/// @brief Field IS_NOT_NULL offset 0
static JetBrains::Annotations::AssertionConditionType const IS_NOT_NULL;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AssertionConditionType, "JetBrains.Annotations", "AssertionConditionType");
