#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HFLayerType;
}
// Type: HoudiniEngineUnity::HFLayerType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9892))
// CS Name: HoudiniEngineUnity.HFLayerType
struct CORDL_TYPE HFLayerType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HFLayerType(int32_t value__) noexcept;


                    constexpr HFLayerType(HFLayerType const&) = default;
                    constexpr HFLayerType(HFLayerType&&) = default;
                    constexpr HFLayerType& operator=(HFLayerType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HFLayerType& operator=(HFLayerType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HFLayerType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HFLayerType_Unwrapped : int32_t {
__DEFAULT = 0,
__HEIGHT = 1,
__MASK = 2,
__DETAIL = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HFLayerType_Unwrapped () const noexcept {
return std::bit_cast<__HFLayerType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DEFAULT offset 0
static HoudiniEngineUnity::HFLayerType const DEFAULT;

/// @brief Field HEIGHT offset 0
static HoudiniEngineUnity::HFLayerType const HEIGHT;

/// @brief Field MASK offset 0
static HoudiniEngineUnity::HFLayerType const MASK;

/// @brief Field DETAIL offset 0
static HoudiniEngineUnity::HFLayerType const DETAIL;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HFLayerType, "HoudiniEngineUnity", "HFLayerType");
