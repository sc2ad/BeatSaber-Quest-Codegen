#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct ContextType;
}
// Type: UnityEngine.UIElements::ContextType
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6948))
// CS Name: UnityEngine.UIElements.ContextType
struct CORDL_TYPE ContextType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ContextType(int32_t value__) noexcept;


                    constexpr ContextType(ContextType const&) = default;
                    constexpr ContextType(ContextType&&) = default;
                    constexpr ContextType& operator=(ContextType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ContextType& operator=(ContextType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ContextType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ContextType_Unwrapped : int32_t {
__Player = 0,
__Editor = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ContextType_Unwrapped () const noexcept {
return std::bit_cast<__ContextType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Player offset 0
static UnityEngine::UIElements::ContextType const Player;

/// @brief Field Editor offset 0
static UnityEngine::UIElements::ContextType const Editor;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ContextType, "UnityEngine.UIElements", "ContextType");
