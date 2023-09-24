#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct DispatchMode;
}
// Type: UnityEngine.UIElements::DispatchMode
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6998))
// CS Name: UnityEngine.UIElements.DispatchMode
struct CORDL_TYPE DispatchMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DispatchMode(int32_t value__) noexcept;


                    constexpr DispatchMode(DispatchMode const&) = default;
                    constexpr DispatchMode(DispatchMode&&) = default;
                    constexpr DispatchMode& operator=(DispatchMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DispatchMode& operator=(DispatchMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DispatchMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DispatchMode_Unwrapped : int32_t {
__Default = 1,
__Queued = 1,
__Immediate = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DispatchMode_Unwrapped () const noexcept {
return std::bit_cast<__DispatchMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static UnityEngine::UIElements::DispatchMode const Default;

/// @brief Field Queued offset 0
static UnityEngine::UIElements::DispatchMode const Queued;

/// @brief Field Immediate offset 0
static UnityEngine::UIElements::DispatchMode const Immediate;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DispatchMode, "UnityEngine.UIElements", "DispatchMode");
