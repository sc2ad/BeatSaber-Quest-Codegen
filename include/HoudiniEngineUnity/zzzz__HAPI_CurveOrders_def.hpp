#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_CurveOrders;
}
// Type: HoudiniEngineUnity::HAPI_CurveOrders
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9653))
// CS Name: HoudiniEngineUnity.HAPI_CurveOrders
struct CORDL_TYPE HAPI_CurveOrders : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_CurveOrders(int32_t value__) noexcept;


                    constexpr HAPI_CurveOrders(HAPI_CurveOrders const&) = default;
                    constexpr HAPI_CurveOrders(HAPI_CurveOrders&&) = default;
                    constexpr HAPI_CurveOrders& operator=(HAPI_CurveOrders const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_CurveOrders& operator=(HAPI_CurveOrders&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_CurveOrders(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_CurveOrders_Unwrapped : int32_t {
__HAPI_CURVE_ORDER_VARYING = 0,
__HAPI_CURVE_ORDER_INVALID = 1,
__HAPI_CURVE_ORDER_LINEAR = 2,
__HAPI_CURVE_ORDER_QUADRATIC = 3,
__HAPI_CURVE_ORDER_CUBIC = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_CurveOrders_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_CurveOrders_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_CURVE_ORDER_VARYING offset 0
static ::HoudiniEngineUnity::HAPI_CurveOrders const HAPI_CURVE_ORDER_VARYING;

/// @brief Field HAPI_CURVE_ORDER_INVALID offset 0
static ::HoudiniEngineUnity::HAPI_CurveOrders const HAPI_CURVE_ORDER_INVALID;

/// @brief Field HAPI_CURVE_ORDER_LINEAR offset 0
static ::HoudiniEngineUnity::HAPI_CurveOrders const HAPI_CURVE_ORDER_LINEAR;

/// @brief Field HAPI_CURVE_ORDER_QUADRATIC offset 0
static ::HoudiniEngineUnity::HAPI_CurveOrders const HAPI_CURVE_ORDER_QUADRATIC;

/// @brief Field HAPI_CURVE_ORDER_CUBIC offset 0
static ::HoudiniEngineUnity::HAPI_CurveOrders const HAPI_CURVE_ORDER_CUBIC;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_CurveOrders, "HoudiniEngineUnity", "HAPI_CurveOrders");
