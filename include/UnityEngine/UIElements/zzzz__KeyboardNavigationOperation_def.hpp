#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct KeyboardNavigationOperation;
}
// Type: UnityEngine.UIElements::KeyboardNavigationOperation
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6913))
// CS Name: UnityEngine.UIElements.KeyboardNavigationOperation
struct CORDL_TYPE KeyboardNavigationOperation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr KeyboardNavigationOperation(int32_t value__) noexcept;


                    constexpr KeyboardNavigationOperation(KeyboardNavigationOperation const&) = default;
                    constexpr KeyboardNavigationOperation(KeyboardNavigationOperation&&) = default;
                    constexpr KeyboardNavigationOperation& operator=(KeyboardNavigationOperation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr KeyboardNavigationOperation& operator=(KeyboardNavigationOperation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit KeyboardNavigationOperation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __KeyboardNavigationOperation_Unwrapped : int32_t {
__None = 0,
__SelectAll = 1,
__Cancel = 2,
__Submit = 3,
__Previous = 4,
__Next = 5,
__PageUp = 6,
__PageDown = 7,
__Begin = 8,
__End = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __KeyboardNavigationOperation_Unwrapped () const noexcept {
return std::bit_cast<__KeyboardNavigationOperation_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::KeyboardNavigationOperation const None;

/// @brief Field SelectAll offset 0
static UnityEngine::UIElements::KeyboardNavigationOperation const SelectAll;

/// @brief Field Cancel offset 0
static UnityEngine::UIElements::KeyboardNavigationOperation const Cancel;

/// @brief Field Submit offset 0
static UnityEngine::UIElements::KeyboardNavigationOperation const Submit;

/// @brief Field Previous offset 0
static UnityEngine::UIElements::KeyboardNavigationOperation const Previous;

/// @brief Field Next offset 0
static UnityEngine::UIElements::KeyboardNavigationOperation const Next;

/// @brief Field PageUp offset 0
static UnityEngine::UIElements::KeyboardNavigationOperation const PageUp;

/// @brief Field PageDown offset 0
static UnityEngine::UIElements::KeyboardNavigationOperation const PageDown;

/// @brief Field Begin offset 0
static UnityEngine::UIElements::KeyboardNavigationOperation const Begin;

/// @brief Field End offset 0
static UnityEngine::UIElements::KeyboardNavigationOperation const End;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::KeyboardNavigationOperation, "UnityEngine.UIElements", "KeyboardNavigationOperation");
