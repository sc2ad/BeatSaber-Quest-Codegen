#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_AssetEventType;
}
// Type: HoudiniEngineUnity::HEU_AssetEventType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9535))
// CS Name: HoudiniEngineUnity.HEU_AssetEventType
struct CORDL_TYPE HEU_AssetEventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HEU_AssetEventType(int32_t value__) noexcept;


                    constexpr HEU_AssetEventType(HEU_AssetEventType const&) = default;
                    constexpr HEU_AssetEventType(HEU_AssetEventType&&) = default;
                    constexpr HEU_AssetEventType& operator=(HEU_AssetEventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HEU_AssetEventType& operator=(HEU_AssetEventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HEU_AssetEventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HEU_AssetEventType_Unwrapped : int32_t {
__UNKNOWN = 0,
__RELOAD = 1,
__COOK = 2,
__BAKE_NEW = 3,
__BAKE_UPDATE = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HEU_AssetEventType_Unwrapped () const noexcept {
return std::bit_cast<__HEU_AssetEventType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UNKNOWN offset 0
static HoudiniEngineUnity::HEU_AssetEventType const UNKNOWN;

/// @brief Field RELOAD offset 0
static HoudiniEngineUnity::HEU_AssetEventType const RELOAD;

/// @brief Field COOK offset 0
static HoudiniEngineUnity::HEU_AssetEventType const COOK;

/// @brief Field BAKE_NEW offset 0
static HoudiniEngineUnity::HEU_AssetEventType const BAKE_NEW;

/// @brief Field BAKE_UPDATE offset 0
static HoudiniEngineUnity::HEU_AssetEventType const BAKE_UPDATE;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_AssetEventType, "HoudiniEngineUnity", "HEU_AssetEventType");
