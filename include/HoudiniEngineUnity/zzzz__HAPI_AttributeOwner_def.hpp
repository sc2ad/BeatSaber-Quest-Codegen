#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
// Type: HoudiniEngineUnity::HAPI_AttributeOwner
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9644))
// CS Name: HoudiniEngineUnity.HAPI_AttributeOwner
struct CORDL_TYPE HAPI_AttributeOwner : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_AttributeOwner(int32_t value__) noexcept;


                    constexpr HAPI_AttributeOwner(HAPI_AttributeOwner const&) = default;
                    constexpr HAPI_AttributeOwner(HAPI_AttributeOwner&&) = default;
                    constexpr HAPI_AttributeOwner& operator=(HAPI_AttributeOwner const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_AttributeOwner& operator=(HAPI_AttributeOwner&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_AttributeOwner(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_AttributeOwner_Unwrapped : int32_t {
__HAPI_ATTROWNER_INVALID = -1,
__HAPI_ATTROWNER_VERTEX = 0,
__HAPI_ATTROWNER_POINT = 1,
__HAPI_ATTROWNER_PRIM = 2,
__HAPI_ATTROWNER_DETAIL = 3,
__HAPI_ATTROWNER_MAX = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_AttributeOwner_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_AttributeOwner_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_ATTROWNER_INVALID offset 0
static HoudiniEngineUnity::HAPI_AttributeOwner const HAPI_ATTROWNER_INVALID;

/// @brief Field HAPI_ATTROWNER_VERTEX offset 0
static HoudiniEngineUnity::HAPI_AttributeOwner const HAPI_ATTROWNER_VERTEX;

/// @brief Field HAPI_ATTROWNER_POINT offset 0
static HoudiniEngineUnity::HAPI_AttributeOwner const HAPI_ATTROWNER_POINT;

/// @brief Field HAPI_ATTROWNER_PRIM offset 0
static HoudiniEngineUnity::HAPI_AttributeOwner const HAPI_ATTROWNER_PRIM;

/// @brief Field HAPI_ATTROWNER_DETAIL offset 0
static HoudiniEngineUnity::HAPI_AttributeOwner const HAPI_ATTROWNER_DETAIL;

/// @brief Field HAPI_ATTROWNER_MAX offset 0
static HoudiniEngineUnity::HAPI_AttributeOwner const HAPI_ATTROWNER_MAX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_AttributeOwner, "HoudiniEngineUnity", "HAPI_AttributeOwner");
