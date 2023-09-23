#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_TransformComponent;
}
// Type: HoudiniEngineUnity::HAPI_TransformComponent
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9654))
// CS Name: HoudiniEngineUnity.HAPI_TransformComponent
struct CORDL_TYPE HAPI_TransformComponent : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_TransformComponent(int32_t value__) noexcept;


                    constexpr HAPI_TransformComponent(HAPI_TransformComponent const&) = default;
                    constexpr HAPI_TransformComponent(HAPI_TransformComponent&&) = default;
                    constexpr HAPI_TransformComponent& operator=(HAPI_TransformComponent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_TransformComponent& operator=(HAPI_TransformComponent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_TransformComponent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_TransformComponent_Unwrapped : int32_t {
__HAPI_TRANSFORM_TX = 0,
__HAPI_TRANSFORM_TY = 1,
__HAPI_TRANSFORM_TZ = 2,
__HAPI_TRANSFORM_RX = 3,
__HAPI_TRANSFORM_RY = 4,
__HAPI_TRANSFORM_RZ = 5,
__HAPI_TRANSFORM_QX = 6,
__HAPI_TRANSFORM_QY = 7,
__HAPI_TRANSFORM_QZ = 8,
__HAPI_TRANSFORM_QW = 9,
__HAPI_TRANSFORM_SX = 10,
__HAPI_TRANSFORM_SY = 11,
__HAPI_TRANSFORM_SZ = 12,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_TransformComponent_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_TransformComponent_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_TRANSFORM_TX offset 0
static HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_TX;

/// @brief Field HAPI_TRANSFORM_TY offset 0
static HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_TY;

/// @brief Field HAPI_TRANSFORM_TZ offset 0
static HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_TZ;

/// @brief Field HAPI_TRANSFORM_RX offset 0
static HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_RX;

/// @brief Field HAPI_TRANSFORM_RY offset 0
static HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_RY;

/// @brief Field HAPI_TRANSFORM_RZ offset 0
static HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_RZ;

/// @brief Field HAPI_TRANSFORM_QX offset 0
static HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_QX;

/// @brief Field HAPI_TRANSFORM_QY offset 0
static HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_QY;

/// @brief Field HAPI_TRANSFORM_QZ offset 0
static HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_QZ;

/// @brief Field HAPI_TRANSFORM_QW offset 0
static HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_QW;

/// @brief Field HAPI_TRANSFORM_SX offset 0
static HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_SX;

/// @brief Field HAPI_TRANSFORM_SY offset 0
static HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_SY;

/// @brief Field HAPI_TRANSFORM_SZ offset 0
static HoudiniEngineUnity::HAPI_TransformComponent const HAPI_TRANSFORM_SZ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_TransformComponent, "HoudiniEngineUnity", "HAPI_TransformComponent");
