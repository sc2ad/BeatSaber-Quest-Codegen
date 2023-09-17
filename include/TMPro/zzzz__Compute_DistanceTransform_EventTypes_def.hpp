#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace TMPro {
struct Compute_DistanceTransform_EventTypes;
}
// Type: TMPro::Compute_DistanceTransform_EventTypes
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12253))
// CS Name: TMPro.Compute_DistanceTransform_EventTypes
struct CORDL_TYPE Compute_DistanceTransform_EventTypes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Compute_DistanceTransform_EventTypes(int32_t value__) noexcept;


                    constexpr Compute_DistanceTransform_EventTypes(Compute_DistanceTransform_EventTypes const&) = default;
                    constexpr Compute_DistanceTransform_EventTypes(Compute_DistanceTransform_EventTypes&&) = default;
                    constexpr Compute_DistanceTransform_EventTypes& operator=(Compute_DistanceTransform_EventTypes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Compute_DistanceTransform_EventTypes& operator=(Compute_DistanceTransform_EventTypes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Compute_DistanceTransform_EventTypes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Compute_DistanceTransform_EventTypes_Unwrapped : int32_t {
__Processing = 0,
__Completed = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Compute_DistanceTransform_EventTypes_Unwrapped () const noexcept {
return std::bit_cast<__Compute_DistanceTransform_EventTypes_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Processing offset 0
static ::TMPro::Compute_DistanceTransform_EventTypes const Processing;

/// @brief Field Completed offset 0
static ::TMPro::Compute_DistanceTransform_EventTypes const Completed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::Compute_DistanceTransform_EventTypes, "TMPro", "Compute_DistanceTransform_EventTypes");
