#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ParmType;
}
// Type: HoudiniEngineUnity::HAPI_ParmType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9637))
// CS Name: HoudiniEngineUnity.HAPI_ParmType
struct CORDL_TYPE HAPI_ParmType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_ParmType(int32_t value__) noexcept;


                    constexpr HAPI_ParmType(HAPI_ParmType const&) = default;
                    constexpr HAPI_ParmType(HAPI_ParmType&&) = default;
                    constexpr HAPI_ParmType& operator=(HAPI_ParmType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_ParmType& operator=(HAPI_ParmType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_ParmType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_ParmType_Unwrapped : int32_t {
__HAPI_PARMTYPE_INT = 0,
__HAPI_PARMTYPE_MULTIPARMLIST = 1,
__HAPI_PARMTYPE_TOGGLE = 2,
__HAPI_PARMTYPE_BUTTON = 3,
__HAPI_PARMTYPE_FLOAT = 4,
__HAPI_PARMTYPE_COLOR = 5,
__HAPI_PARMTYPE_STRING = 6,
__HAPI_PARMTYPE_PATH_FILE = 7,
__HAPI_PARMTYPE_PATH_FILE_GEO = 8,
__HAPI_PARMTYPE_PATH_FILE_IMAGE = 9,
__HAPI_PARMTYPE_NODE = 10,
__HAPI_PARMTYPE_FOLDERLIST = 11,
__HAPI_PARMTYPE_FOLDERLIST_RADIO = 12,
__HAPI_PARMTYPE_FOLDER = 13,
__HAPI_PARMTYPE_LABEL = 14,
__HAPI_PARMTYPE_SEPARATOR = 15,
__HAPI_PARMTYPE_PATH_FILE_DIR = 16,
__HAPI_PARMTYPE_MAX = 17,
__HAPI_PARMTYPE_INT_START = 0,
__HAPI_PARMTYPE_INT_END = 3,
__HAPI_PARMTYPE_FLOAT_START = 4,
__HAPI_PARMTYPE_FLOAT_END = 5,
__HAPI_PARMTYPE_STRING_START = 6,
__HAPI_PARMTYPE_STRING_END = 10,
__HAPI_PARMTYPE_PATH_START = 7,
__HAPI_PARMTYPE_PATH_END = 9,
__HAPI_PARMTYPE_NODE_START = 10,
__HAPI_PARMTYPE_NODE_END = 10,
__HAPI_PARMTYPE_CONTAINER_START = 11,
__HAPI_PARMTYPE_CONTAINER_END = 12,
__HAPI_PARMTYPE_NONVALUE_START = 13,
__HAPI_PARMTYPE_NONVALUE_END = 15,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_ParmType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_ParmType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_PARMTYPE_INT offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_INT;

/// @brief Field HAPI_PARMTYPE_MULTIPARMLIST offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_MULTIPARMLIST;

/// @brief Field HAPI_PARMTYPE_TOGGLE offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_TOGGLE;

/// @brief Field HAPI_PARMTYPE_BUTTON offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_BUTTON;

/// @brief Field HAPI_PARMTYPE_FLOAT offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FLOAT;

/// @brief Field HAPI_PARMTYPE_COLOR offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_COLOR;

/// @brief Field HAPI_PARMTYPE_STRING offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_STRING;

/// @brief Field HAPI_PARMTYPE_PATH_FILE offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_FILE;

/// @brief Field HAPI_PARMTYPE_PATH_FILE_GEO offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_FILE_GEO;

/// @brief Field HAPI_PARMTYPE_PATH_FILE_IMAGE offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_FILE_IMAGE;

/// @brief Field HAPI_PARMTYPE_NODE offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_NODE;

/// @brief Field HAPI_PARMTYPE_FOLDERLIST offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FOLDERLIST;

/// @brief Field HAPI_PARMTYPE_FOLDERLIST_RADIO offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FOLDERLIST_RADIO;

/// @brief Field HAPI_PARMTYPE_FOLDER offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FOLDER;

/// @brief Field HAPI_PARMTYPE_LABEL offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_LABEL;

/// @brief Field HAPI_PARMTYPE_SEPARATOR offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_SEPARATOR;

/// @brief Field HAPI_PARMTYPE_PATH_FILE_DIR offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_FILE_DIR;

/// @brief Field HAPI_PARMTYPE_MAX offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_MAX;

/// @brief Field HAPI_PARMTYPE_INT_START offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_INT_START;

/// @brief Field HAPI_PARMTYPE_INT_END offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_INT_END;

/// @brief Field HAPI_PARMTYPE_FLOAT_START offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FLOAT_START;

/// @brief Field HAPI_PARMTYPE_FLOAT_END offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_FLOAT_END;

/// @brief Field HAPI_PARMTYPE_STRING_START offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_STRING_START;

/// @brief Field HAPI_PARMTYPE_STRING_END offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_STRING_END;

/// @brief Field HAPI_PARMTYPE_PATH_START offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_START;

/// @brief Field HAPI_PARMTYPE_PATH_END offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_PATH_END;

/// @brief Field HAPI_PARMTYPE_NODE_START offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_NODE_START;

/// @brief Field HAPI_PARMTYPE_NODE_END offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_NODE_END;

/// @brief Field HAPI_PARMTYPE_CONTAINER_START offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_CONTAINER_START;

/// @brief Field HAPI_PARMTYPE_CONTAINER_END offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_CONTAINER_END;

/// @brief Field HAPI_PARMTYPE_NONVALUE_START offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_NONVALUE_START;

/// @brief Field HAPI_PARMTYPE_NONVALUE_END offset 0
static HoudiniEngineUnity::HAPI_ParmType const HAPI_PARMTYPE_NONVALUE_END;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_ParmType, "HoudiniEngineUnity", "HAPI_ParmType");
