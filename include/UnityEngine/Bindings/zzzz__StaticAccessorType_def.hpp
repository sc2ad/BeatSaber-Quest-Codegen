#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Bindings {
struct StaticAccessorType;
}
// Type: UnityEngine.Bindings::StaticAccessorType
namespace UnityEngine::Bindings {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15883))
// CS Name: UnityEngine.Bindings.StaticAccessorType
struct CORDL_TYPE StaticAccessorType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StaticAccessorType(int32_t value__) noexcept;


                    constexpr StaticAccessorType(StaticAccessorType const&) = default;
                    constexpr StaticAccessorType(StaticAccessorType&&) = default;
                    constexpr StaticAccessorType& operator=(StaticAccessorType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StaticAccessorType& operator=(StaticAccessorType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StaticAccessorType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StaticAccessorType_Unwrapped : int32_t {
__Dot = 0,
__Arrow = 1,
__DoubleColon = 2,
__ArrowWithDefaultReturnIfNull = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StaticAccessorType_Unwrapped () const noexcept {
return std::bit_cast<__StaticAccessorType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Dot offset 0
static ::UnityEngine::Bindings::StaticAccessorType const Dot;

/// @brief Field Arrow offset 0
static ::UnityEngine::Bindings::StaticAccessorType const Arrow;

/// @brief Field DoubleColon offset 0
static ::UnityEngine::Bindings::StaticAccessorType const DoubleColon;

/// @brief Field ArrowWithDefaultReturnIfNull offset 0
static ::UnityEngine::Bindings::StaticAccessorType const ArrowWithDefaultReturnIfNull;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::StaticAccessorType, "UnityEngine.Bindings", "StaticAccessorType");
