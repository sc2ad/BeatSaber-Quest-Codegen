#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PrmScriptType;
}
// Type: HoudiniEngineUnity::HAPI_PrmScriptType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9638))
// CS Name: HoudiniEngineUnity.HAPI_PrmScriptType
struct CORDL_TYPE HAPI_PrmScriptType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_PrmScriptType(int32_t value__) noexcept;


                    constexpr HAPI_PrmScriptType(HAPI_PrmScriptType const&) = default;
                    constexpr HAPI_PrmScriptType(HAPI_PrmScriptType&&) = default;
                    constexpr HAPI_PrmScriptType& operator=(HAPI_PrmScriptType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_PrmScriptType& operator=(HAPI_PrmScriptType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_PrmScriptType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_PrmScriptType_Unwrapped : int32_t {
__HAPI_PRM_SCRIPT_TYPE_INT = 0,
__HAPI_PRM_SCRIPT_TYPE_FLOAT = 1,
__HAPI_PRM_SCRIPT_TYPE_ANGLE = 2,
__HAPI_PRM_SCRIPT_TYPE_STRING = 3,
__HAPI_PRM_SCRIPT_TYPE_FILE = 4,
__HAPI_PRM_SCRIPT_TYPE_DIRECTORY = 5,
__HAPI_PRM_SCRIPT_TYPE_IMAGE = 6,
__HAPI_PRM_SCRIPT_TYPE_GEOMETRY = 7,
__HAPI_PRM_SCRIPT_TYPE_TOGGLE = 8,
__HAPI_PRM_SCRIPT_TYPE_BUTTON = 9,
__HAPI_PRM_SCRIPT_TYPE_VECTOR2 = 10,
__HAPI_PRM_SCRIPT_TYPE_VECTOR3 = 11,
__HAPI_PRM_SCRIPT_TYPE_VECTOR4 = 12,
__HAPI_PRM_SCRIPT_TYPE_INTVECTOR2 = 13,
__HAPI_PRM_SCRIPT_TYPE_INTVECTOR3 = 14,
__HAPI_PRM_SCRIPT_TYPE_INTVECTOR4 = 15,
__HAPI_PRM_SCRIPT_TYPE_UV = 16,
__HAPI_PRM_SCRIPT_TYPE_UVW = 17,
__HAPI_PRM_SCRIPT_TYPE_DIR = 18,
__HAPI_PRM_SCRIPT_TYPE_COLOR = 19,
__HAPI_PRM_SCRIPT_TYPE_COLOR4 = 20,
__HAPI_PRM_SCRIPT_TYPE_OPPATH = 21,
__HAPI_PRM_SCRIPT_TYPE_OPLIST = 22,
__HAPI_PRM_SCRIPT_TYPE_OBJECT = 23,
__HAPI_PRM_SCRIPT_TYPE_OBJECTLIST = 24,
__HAPI_PRM_SCRIPT_TYPE_RENDER = 25,
__HAPI_PRM_SCRIPT_TYPE_SEPARATOR = 26,
__HAPI_PRM_SCRIPT_TYPE_GEOMETRY_DATA = 27,
__HAPI_PRM_SCRIPT_TYPE_KEY_VALUE_DICT = 28,
__HAPI_PRM_SCRIPT_TYPE_LABEL = 29,
__HAPI_PRM_SCRIPT_TYPE_RGBAMASK = 30,
__HAPI_PRM_SCRIPT_TYPE_ORDINAL = 31,
__HAPI_PRM_SCRIPT_TYPE_RAMP_FLT = 32,
__HAPI_PRM_SCRIPT_TYPE_RAMP_RGB = 33,
__HAPI_PRM_SCRIPT_TYPE_FLOAT_LOG = 34,
__HAPI_PRM_SCRIPT_TYPE_INT_LOG = 35,
__HAPI_PRM_SCRIPT_TYPE_DATA = 36,
__HAPI_PRM_SCRIPT_TYPE_FLOAT_MINMAX = 37,
__HAPI_PRM_SCRIPT_TYPE_INT_MINMAX = 38,
__HAPI_PRM_SCRIPT_TYPE_INT_STARTEND = 39,
__HAPI_PRM_SCRIPT_TYPE_BUTTONSTRIP = 40,
__HAPI_PRM_SCRIPT_TYPE_ICONSTRIP = 41,
__HAPI_PRM_SCRIPT_TYPE_GROUPRADIO = 1000,
__HAPI_PRM_SCRIPT_TYPE_GROUPCOLLAPSIBLE = 1001,
__HAPI_PRM_SCRIPT_TYPE_GROUPSIMPLE = 1002,
__HAPI_PRM_SCRIPT_TYPE_GROUP = 1003,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_PrmScriptType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_PrmScriptType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_INT offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INT;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_FLOAT offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_FLOAT;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_ANGLE offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_ANGLE;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_STRING offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_STRING;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_FILE offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_FILE;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_DIRECTORY offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_DIRECTORY;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_IMAGE offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_IMAGE;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_GEOMETRY offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GEOMETRY;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_TOGGLE offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_TOGGLE;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_BUTTON offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_BUTTON;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_VECTOR2 offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_VECTOR2;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_VECTOR3 offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_VECTOR3;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_VECTOR4 offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_VECTOR4;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_INTVECTOR2 offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INTVECTOR2;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_INTVECTOR3 offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INTVECTOR3;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_INTVECTOR4 offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INTVECTOR4;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_UV offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_UV;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_UVW offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_UVW;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_DIR offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_DIR;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_COLOR offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_COLOR;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_COLOR4 offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_COLOR4;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_OPPATH offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_OPPATH;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_OPLIST offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_OPLIST;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_OBJECT offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_OBJECT;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_OBJECTLIST offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_OBJECTLIST;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_RENDER offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_RENDER;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_SEPARATOR offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_SEPARATOR;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_GEOMETRY_DATA offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GEOMETRY_DATA;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_KEY_VALUE_DICT offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_KEY_VALUE_DICT;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_LABEL offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_LABEL;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_RGBAMASK offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_RGBAMASK;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_ORDINAL offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_ORDINAL;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_RAMP_FLT offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_RAMP_FLT;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_RAMP_RGB offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_RAMP_RGB;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_FLOAT_LOG offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_FLOAT_LOG;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_INT_LOG offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INT_LOG;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_DATA offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_DATA;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_FLOAT_MINMAX offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_FLOAT_MINMAX;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_INT_MINMAX offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INT_MINMAX;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_INT_STARTEND offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_INT_STARTEND;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_BUTTONSTRIP offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_BUTTONSTRIP;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_ICONSTRIP offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_ICONSTRIP;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_GROUPRADIO offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GROUPRADIO;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_GROUPCOLLAPSIBLE offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GROUPCOLLAPSIBLE;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_GROUPSIMPLE offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GROUPSIMPLE;

/// @brief Field HAPI_PRM_SCRIPT_TYPE_GROUP offset 0
static HoudiniEngineUnity::HAPI_PrmScriptType const HAPI_PRM_SCRIPT_TYPE_GROUP;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_PrmScriptType, "HoudiniEngineUnity", "HAPI_PrmScriptType");
