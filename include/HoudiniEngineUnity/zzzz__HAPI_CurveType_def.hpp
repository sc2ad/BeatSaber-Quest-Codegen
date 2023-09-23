#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_CurveType;
}
// Type: HoudiniEngineUnity::HAPI_CurveType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9645))
// CS Name: HoudiniEngineUnity.HAPI_CurveType
struct CORDL_TYPE HAPI_CurveType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_CurveType(int32_t value__) noexcept;


                    constexpr HAPI_CurveType(HAPI_CurveType const&) = default;
                    constexpr HAPI_CurveType(HAPI_CurveType&&) = default;
                    constexpr HAPI_CurveType& operator=(HAPI_CurveType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_CurveType& operator=(HAPI_CurveType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_CurveType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_CurveType_Unwrapped : int32_t {
__HAPI_CURVETYPE_INVALID = -1,
__HAPI_CURVETYPE_LINEAR = 0,
__HAPI_CURVETYPE_NURBS = 1,
__HAPI_CURVETYPE_BEZIER = 2,
__HAPI_CURVETYPE_MAX = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_CurveType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_CurveType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_CURVETYPE_INVALID offset 0
static HoudiniEngineUnity::HAPI_CurveType const HAPI_CURVETYPE_INVALID;

/// @brief Field HAPI_CURVETYPE_LINEAR offset 0
static HoudiniEngineUnity::HAPI_CurveType const HAPI_CURVETYPE_LINEAR;

/// @brief Field HAPI_CURVETYPE_NURBS offset 0
static HoudiniEngineUnity::HAPI_CurveType const HAPI_CURVETYPE_NURBS;

/// @brief Field HAPI_CURVETYPE_BEZIER offset 0
static HoudiniEngineUnity::HAPI_CurveType const HAPI_CURVETYPE_BEZIER;

/// @brief Field HAPI_CURVETYPE_MAX offset 0
static HoudiniEngineUnity::HAPI_CurveType const HAPI_CURVETYPE_MAX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_CurveType, "HoudiniEngineUnity", "HAPI_CurveType");
