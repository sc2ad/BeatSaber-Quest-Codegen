#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Bindings {
struct TargetType;
}
// Type: UnityEngine.Bindings::TargetType
namespace UnityEngine::Bindings {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15874))
// CS Name: UnityEngine.Bindings.TargetType
struct CORDL_TYPE TargetType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TargetType(int32_t value__) noexcept;


                    constexpr TargetType(TargetType const&) = default;
                    constexpr TargetType(TargetType&&) = default;
                    constexpr TargetType& operator=(TargetType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TargetType& operator=(TargetType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TargetType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TargetType_Unwrapped : int32_t {
__Function = 0,
__Field = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TargetType_Unwrapped () const noexcept {
return std::bit_cast<__TargetType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Function offset 0
static UnityEngine::Bindings::TargetType const Function;

/// @brief Field Field offset 0
static UnityEngine::Bindings::TargetType const Field;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::TargetType, "UnityEngine.Bindings", "TargetType");
