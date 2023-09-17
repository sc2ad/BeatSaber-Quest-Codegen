#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
struct StepGenerationType;
}
// Type: UnityEngine.ProBuilder.Shapes::StepGenerationType
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12179))
// CS Name: UnityEngine.ProBuilder.Shapes.StepGenerationType
struct CORDL_TYPE StepGenerationType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StepGenerationType(int32_t value__) noexcept;


                    constexpr StepGenerationType(StepGenerationType const&) = default;
                    constexpr StepGenerationType(StepGenerationType&&) = default;
                    constexpr StepGenerationType& operator=(StepGenerationType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StepGenerationType& operator=(StepGenerationType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StepGenerationType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StepGenerationType_Unwrapped : int32_t {
__Height = 0,
__Count = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StepGenerationType_Unwrapped () const noexcept {
return std::bit_cast<__StepGenerationType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Height offset 0
static ::UnityEngine::ProBuilder::Shapes::StepGenerationType const Height;

/// @brief Field Count offset 0
static ::UnityEngine::ProBuilder::Shapes::StepGenerationType const Count;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Shapes
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::StepGenerationType, "UnityEngine.ProBuilder.Shapes", "StepGenerationType");
