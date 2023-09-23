#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct PivotPoint;
}
// Type: UnityEngine.ProBuilder::PivotPoint
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12090))
// CS Name: UnityEngine.ProBuilder.PivotPoint
struct CORDL_TYPE PivotPoint : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PivotPoint(int32_t value__) noexcept;


                    constexpr PivotPoint(PivotPoint const&) = default;
                    constexpr PivotPoint(PivotPoint&&) = default;
                    constexpr PivotPoint& operator=(PivotPoint const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PivotPoint& operator=(PivotPoint&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PivotPoint(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PivotPoint_Unwrapped : int32_t {
__Center = 0,
__IndividualOrigins = 1,
__ActiveElement = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PivotPoint_Unwrapped () const noexcept {
return std::bit_cast<__PivotPoint_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Center offset 0
static UnityEngine::ProBuilder::PivotPoint const Center;

/// @brief Field IndividualOrigins offset 0
static UnityEngine::ProBuilder::PivotPoint const IndividualOrigins;

/// @brief Field ActiveElement offset 0
static UnityEngine::ProBuilder::PivotPoint const ActiveElement;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::PivotPoint, "UnityEngine.ProBuilder", "PivotPoint");
