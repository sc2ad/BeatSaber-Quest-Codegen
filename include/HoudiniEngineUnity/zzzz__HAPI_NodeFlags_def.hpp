#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_NodeFlags;
}
// Type: HoudiniEngineUnity::HAPI_NodeFlags
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9642))
// CS Name: HoudiniEngineUnity.HAPI_NodeFlags
struct CORDL_TYPE HAPI_NodeFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_NodeFlags(int32_t value__) noexcept;


                    constexpr HAPI_NodeFlags(HAPI_NodeFlags const&) = default;
                    constexpr HAPI_NodeFlags(HAPI_NodeFlags&&) = default;
                    constexpr HAPI_NodeFlags& operator=(HAPI_NodeFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_NodeFlags& operator=(HAPI_NodeFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_NodeFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_NodeFlags_Unwrapped : int32_t {
__HAPI_NODEFLAGS_ANY = -1,
__HAPI_NODEFLAGS_NONE = 0,
__HAPI_NODEFLAGS_DISPLAY = 1,
__HAPI_NODEFLAGS_RENDER = 2,
__HAPI_NODEFLAGS_TEMPLATED = 4,
__HAPI_NODEFLAGS_LOCKED = 8,
__HAPI_NODEFLAGS_EDITABLE = 16,
__HAPI_NODEFLAGS_BYPASS = 32,
__HAPI_NODEFLAGS_NETWORK = 64,
__HAPI_NODEFLAGS_OBJ_GEOMETRY = 128,
__HAPI_NODEFLAGS_OBJ_CAMERA = 256,
__HAPI_NODEFLAGS_OBJ_LIGHT = 512,
__HAPI_NODEFLAGS_OBJ_SUBNET = 1024,
__HAPI_NODEFLAGS_SOP_CURVE = 2048,
__HAPI_NODEFLAGS_SOP_GUIDE = 4096,
__HAPI_NODEFLAGS_TOP_NONSCHEDULER = 8192,
__HAPI_NODEFLAGS_NON_BYPASS = 16384,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_NodeFlags_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_NodeFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_NODEFLAGS_ANY offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_ANY;

/// @brief Field HAPI_NODEFLAGS_NONE offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_NONE;

/// @brief Field HAPI_NODEFLAGS_DISPLAY offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_DISPLAY;

/// @brief Field HAPI_NODEFLAGS_RENDER offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_RENDER;

/// @brief Field HAPI_NODEFLAGS_TEMPLATED offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_TEMPLATED;

/// @brief Field HAPI_NODEFLAGS_LOCKED offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_LOCKED;

/// @brief Field HAPI_NODEFLAGS_EDITABLE offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_EDITABLE;

/// @brief Field HAPI_NODEFLAGS_BYPASS offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_BYPASS;

/// @brief Field HAPI_NODEFLAGS_NETWORK offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_NETWORK;

/// @brief Field HAPI_NODEFLAGS_OBJ_GEOMETRY offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_OBJ_GEOMETRY;

/// @brief Field HAPI_NODEFLAGS_OBJ_CAMERA offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_OBJ_CAMERA;

/// @brief Field HAPI_NODEFLAGS_OBJ_LIGHT offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_OBJ_LIGHT;

/// @brief Field HAPI_NODEFLAGS_OBJ_SUBNET offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_OBJ_SUBNET;

/// @brief Field HAPI_NODEFLAGS_SOP_CURVE offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_SOP_CURVE;

/// @brief Field HAPI_NODEFLAGS_SOP_GUIDE offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_SOP_GUIDE;

/// @brief Field HAPI_NODEFLAGS_TOP_NONSCHEDULER offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_TOP_NONSCHEDULER;

/// @brief Field HAPI_NODEFLAGS_NON_BYPASS offset 0
static HoudiniEngineUnity::HAPI_NodeFlags const HAPI_NODEFLAGS_NON_BYPASS;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_NodeFlags, "HoudiniEngineUnity", "HAPI_NodeFlags");
