#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_StorageType;
}
// Type: HoudiniEngineUnity::HAPI_StorageType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9648))
// CS Name: HoudiniEngineUnity.HAPI_StorageType
struct CORDL_TYPE HAPI_StorageType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_StorageType(int32_t value__) noexcept;


                    constexpr HAPI_StorageType(HAPI_StorageType const&) = default;
                    constexpr HAPI_StorageType(HAPI_StorageType&&) = default;
                    constexpr HAPI_StorageType& operator=(HAPI_StorageType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_StorageType& operator=(HAPI_StorageType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_StorageType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_StorageType_Unwrapped : int32_t {
__HAPI_STORAGETYPE_INVALID = -1,
__HAPI_STORAGETYPE_INT = 0,
__HAPI_STORAGETYPE_INT64 = 1,
__HAPI_STORAGETYPE_FLOAT = 2,
__HAPI_STORAGETYPE_FLOAT64 = 3,
__HAPI_STORAGETYPE_STRING = 4,
__HAPI_STORAGETYPE_UINT8 = 5,
__HAPI_STORAGETYPE_INT8 = 6,
__HAPI_STORAGETYPE_INT16 = 7,
__HAPI_STORAGETYPE_MAX = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_StorageType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_StorageType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_STORAGETYPE_INVALID offset 0
static HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_INVALID;

/// @brief Field HAPI_STORAGETYPE_INT offset 0
static HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_INT;

/// @brief Field HAPI_STORAGETYPE_INT64 offset 0
static HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_INT64;

/// @brief Field HAPI_STORAGETYPE_FLOAT offset 0
static HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_FLOAT;

/// @brief Field HAPI_STORAGETYPE_FLOAT64 offset 0
static HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_FLOAT64;

/// @brief Field HAPI_STORAGETYPE_STRING offset 0
static HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_STRING;

/// @brief Field HAPI_STORAGETYPE_UINT8 offset 0
static HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_UINT8;

/// @brief Field HAPI_STORAGETYPE_INT8 offset 0
static HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_INT8;

/// @brief Field HAPI_STORAGETYPE_INT16 offset 0
static HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_INT16;

/// @brief Field HAPI_STORAGETYPE_MAX offset 0
static HoudiniEngineUnity::HAPI_StorageType const HAPI_STORAGETYPE_MAX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_StorageType, "HoudiniEngineUnity", "HAPI_StorageType");
