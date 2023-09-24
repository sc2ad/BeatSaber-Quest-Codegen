#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct ServiceEnvironment;
}
// Type: ::ServiceEnvironment
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12682))
// CS Name: ServiceEnvironment
struct CORDL_TYPE ServiceEnvironment : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ServiceEnvironment(int32_t value__) noexcept;


                    constexpr ServiceEnvironment(ServiceEnvironment const&) = default;
                    constexpr ServiceEnvironment(ServiceEnvironment&&) = default;
                    constexpr ServiceEnvironment& operator=(ServiceEnvironment const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ServiceEnvironment& operator=(ServiceEnvironment&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ServiceEnvironment(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ServiceEnvironment_Unwrapped : int32_t {
__Production = 0,
__ReleaseCandidate = 1,
__InternalPlayTest = 2,
__QATesting = 3,
__Development = 4,
__ProductionA = 5,
__ProductionB = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ServiceEnvironment_Unwrapped () const noexcept {
return std::bit_cast<__ServiceEnvironment_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Production offset 0
static GlobalNamespace::ServiceEnvironment const Production;

/// @brief Field ReleaseCandidate offset 0
static GlobalNamespace::ServiceEnvironment const ReleaseCandidate;

/// @brief Field InternalPlayTest offset 0
static GlobalNamespace::ServiceEnvironment const InternalPlayTest;

/// @brief Field QATesting offset 0
static GlobalNamespace::ServiceEnvironment const QATesting;

/// @brief Field Development offset 0
static GlobalNamespace::ServiceEnvironment const Development;

/// @brief Field ProductionA offset 0
static GlobalNamespace::ServiceEnvironment const ProductionA;

/// @brief Field ProductionB offset 0
static GlobalNamespace::ServiceEnvironment const ProductionB;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ServiceEnvironment, "", "ServiceEnvironment");
