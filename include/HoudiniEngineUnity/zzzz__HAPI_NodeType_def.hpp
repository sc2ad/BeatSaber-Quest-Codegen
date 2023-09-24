#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_NodeType;
}
// Type: HoudiniEngineUnity::HAPI_NodeType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9641))
// CS Name: HoudiniEngineUnity.HAPI_NodeType
struct CORDL_TYPE HAPI_NodeType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_NodeType(int32_t value__) noexcept;


                    constexpr HAPI_NodeType(HAPI_NodeType const&) = default;
                    constexpr HAPI_NodeType(HAPI_NodeType&&) = default;
                    constexpr HAPI_NodeType& operator=(HAPI_NodeType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_NodeType& operator=(HAPI_NodeType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_NodeType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_NodeType_Unwrapped : int32_t {
__HAPI_NODETYPE_ANY = -1,
__HAPI_NODETYPE_NONE = 0,
__HAPI_NODETYPE_OBJ = 1,
__HAPI_NODETYPE_SOP = 2,
__HAPI_NODETYPE_CHOP = 4,
__HAPI_NODETYPE_ROP = 8,
__HAPI_NODETYPE_SHOP = 16,
__HAPI_NODETYPE_COP = 32,
__HAPI_NODETYPE_VOP = 64,
__HAPI_NODETYPE_DOP = 128,
__HAPI_NODETYPE_TOP = 256,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_NodeType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_NodeType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_NODETYPE_ANY offset 0
static HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_ANY;

/// @brief Field HAPI_NODETYPE_NONE offset 0
static HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_NONE;

/// @brief Field HAPI_NODETYPE_OBJ offset 0
static HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_OBJ;

/// @brief Field HAPI_NODETYPE_SOP offset 0
static HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_SOP;

/// @brief Field HAPI_NODETYPE_CHOP offset 0
static HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_CHOP;

/// @brief Field HAPI_NODETYPE_ROP offset 0
static HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_ROP;

/// @brief Field HAPI_NODETYPE_SHOP offset 0
static HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_SHOP;

/// @brief Field HAPI_NODETYPE_COP offset 0
static HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_COP;

/// @brief Field HAPI_NODETYPE_VOP offset 0
static HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_VOP;

/// @brief Field HAPI_NODETYPE_DOP offset 0
static HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_DOP;

/// @brief Field HAPI_NODETYPE_TOP offset 0
static HoudiniEngineUnity::HAPI_NodeType const HAPI_NODETYPE_TOP;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HAPI_NodeType, "HoudiniEngineUnity", "HAPI_NodeType");
