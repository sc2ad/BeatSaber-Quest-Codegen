#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_Result;
}
// Type: HoudiniEngineUnity::HAPI_Result
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9630))
// CS Name: HoudiniEngineUnity.HAPI_Result
struct CORDL_TYPE HAPI_Result : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_Result(int32_t value__) noexcept;


                    constexpr HAPI_Result(HAPI_Result const&) = default;
                    constexpr HAPI_Result(HAPI_Result&&) = default;
                    constexpr HAPI_Result& operator=(HAPI_Result const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_Result& operator=(HAPI_Result&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_Result(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_Result_Unwrapped : int32_t {
__HAPI_RESULT_SUCCESS = 0,
__HAPI_RESULT_FAILURE = 1,
__HAPI_RESULT_ALREADY_INITIALIZED = 2,
__HAPI_RESULT_NOT_INITIALIZED = 3,
__HAPI_RESULT_CANT_LOADFILE = 4,
__HAPI_RESULT_PARM_SET_FAILED = 5,
__HAPI_RESULT_INVALID_ARGUMENT = 6,
__HAPI_RESULT_CANT_LOAD_GEO = 7,
__HAPI_RESULT_CANT_GENERATE_PRESET = 8,
__HAPI_RESULT_CANT_LOAD_PRESET = 9,
__HAPI_RESULT_ASSET_DEF_ALREADY_LOADED = 10,
__HAPI_RESULT_NO_LICENSE_FOUND = 110,
__HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND = 120,
__HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE = 130,
__HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE = 140,
__HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE = 150,
__HAPI_RESULT_DISALLOWED_HENGINEINDIE_W_3PARTY_PLUGIN = 160,
__HAPI_RESULT_ASSET_INVALID = 200,
__HAPI_RESULT_NODE_INVALID = 210,
__HAPI_RESULT_USER_INTERRUPTED = 300,
__HAPI_RESULT_INVALID_SESSION = 400,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_Result_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_Result_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_RESULT_SUCCESS offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_SUCCESS;

/// @brief Field HAPI_RESULT_FAILURE offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_FAILURE;

/// @brief Field HAPI_RESULT_ALREADY_INITIALIZED offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_ALREADY_INITIALIZED;

/// @brief Field HAPI_RESULT_NOT_INITIALIZED offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_NOT_INITIALIZED;

/// @brief Field HAPI_RESULT_CANT_LOADFILE offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_CANT_LOADFILE;

/// @brief Field HAPI_RESULT_PARM_SET_FAILED offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_PARM_SET_FAILED;

/// @brief Field HAPI_RESULT_INVALID_ARGUMENT offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_INVALID_ARGUMENT;

/// @brief Field HAPI_RESULT_CANT_LOAD_GEO offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_CANT_LOAD_GEO;

/// @brief Field HAPI_RESULT_CANT_GENERATE_PRESET offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_CANT_GENERATE_PRESET;

/// @brief Field HAPI_RESULT_CANT_LOAD_PRESET offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_CANT_LOAD_PRESET;

/// @brief Field HAPI_RESULT_ASSET_DEF_ALREADY_LOADED offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_ASSET_DEF_ALREADY_LOADED;

/// @brief Field HAPI_RESULT_NO_LICENSE_FOUND offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_NO_LICENSE_FOUND;

/// @brief Field HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND;

/// @brief Field HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE;

/// @brief Field HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE;

/// @brief Field HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE;

/// @brief Field HAPI_RESULT_DISALLOWED_HENGINEINDIE_W_3PARTY_PLUGIN offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_DISALLOWED_HENGINEINDIE_W_3PARTY_PLUGIN;

/// @brief Field HAPI_RESULT_ASSET_INVALID offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_ASSET_INVALID;

/// @brief Field HAPI_RESULT_NODE_INVALID offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_NODE_INVALID;

/// @brief Field HAPI_RESULT_USER_INTERRUPTED offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_USER_INTERRUPTED;

/// @brief Field HAPI_RESULT_INVALID_SESSION offset 0
static HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_INVALID_SESSION;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_Result, "HoudiniEngineUnity", "HAPI_Result");
