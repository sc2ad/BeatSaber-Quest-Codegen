#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_StatusType;
}
// Type: HoudiniEngineUnity::HAPI_StatusType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9628))
// CS Name: HoudiniEngineUnity.HAPI_StatusType
struct CORDL_TYPE HAPI_StatusType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_StatusType(int32_t value__) noexcept;


                    constexpr HAPI_StatusType(HAPI_StatusType const&) = default;
                    constexpr HAPI_StatusType(HAPI_StatusType&&) = default;
                    constexpr HAPI_StatusType& operator=(HAPI_StatusType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_StatusType& operator=(HAPI_StatusType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_StatusType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_StatusType_Unwrapped : int32_t {
__HAPI_STATUS_CALL_RESULT = 0,
__HAPI_STATUS_COOK_RESULT = 1,
__HAPI_STATUS_COOK_STATE = 2,
__HAPI_STATUS_MAX = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_StatusType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_StatusType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_STATUS_CALL_RESULT offset 0
static HoudiniEngineUnity::HAPI_StatusType const HAPI_STATUS_CALL_RESULT;

/// @brief Field HAPI_STATUS_COOK_RESULT offset 0
static HoudiniEngineUnity::HAPI_StatusType const HAPI_STATUS_COOK_RESULT;

/// @brief Field HAPI_STATUS_COOK_STATE offset 0
static HoudiniEngineUnity::HAPI_StatusType const HAPI_STATUS_COOK_STATE;

/// @brief Field HAPI_STATUS_MAX offset 0
static HoudiniEngineUnity::HAPI_StatusType const HAPI_STATUS_MAX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_StatusType, "HoudiniEngineUnity", "HAPI_StatusType");
