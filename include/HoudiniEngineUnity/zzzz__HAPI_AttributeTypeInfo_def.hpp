#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_AttributeTypeInfo;
}
// Type: HoudiniEngineUnity::HAPI_AttributeTypeInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9649))
// CS Name: HoudiniEngineUnity.HAPI_AttributeTypeInfo
struct CORDL_TYPE HAPI_AttributeTypeInfo : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_AttributeTypeInfo(int32_t value__) noexcept;


                    constexpr HAPI_AttributeTypeInfo(HAPI_AttributeTypeInfo const&) = default;
                    constexpr HAPI_AttributeTypeInfo(HAPI_AttributeTypeInfo&&) = default;
                    constexpr HAPI_AttributeTypeInfo& operator=(HAPI_AttributeTypeInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_AttributeTypeInfo& operator=(HAPI_AttributeTypeInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_AttributeTypeInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_AttributeTypeInfo_Unwrapped : int32_t {
__HAPI_ATTRIBUTE_TYPE_INVALID = -1,
__HAPI_ATTRIBUTE_TYPE_NONE = 0,
__HAPI_ATTRIBUTE_TYPE_POINT = 1,
__HAPI_ATTRIBUTE_TYPE_HPOINT = 2,
__HAPI_ATTRIBUTE_TYPE_VECTOR = 3,
__HAPI_ATTRIBUTE_TYPE_NORMAL = 4,
__HAPI_ATTRIBUTE_TYPE_COLOR = 5,
__HAPI_ATTRIBUTE_TYPE_QUATERNION = 6,
__HAPI_ATTRIBUTE_TYPE_MATRIX3 = 7,
__HAPI_ATTRIBUTE_TYPE_MATRIX = 8,
__HAPI_ATTRIBUTE_TYPE_ST = 9,
__HAPI_ATTRIBUTE_TYPE_HIDDEN = 10,
__HAPI_ATTRIBUTE_TYPE_BOX2 = 11,
__HAPI_ATTRIBUTE_TYPE_BOX = 12,
__HAPI_ATTRIBUTE_TYPE_TEXTURE = 13,
__HAPI_ATTRIBUTE_TYPE_MAX = 14,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_AttributeTypeInfo_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_AttributeTypeInfo_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_ATTRIBUTE_TYPE_INVALID offset 0
static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_INVALID;

/// @brief Field HAPI_ATTRIBUTE_TYPE_NONE offset 0
static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_NONE;

/// @brief Field HAPI_ATTRIBUTE_TYPE_POINT offset 0
static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_POINT;

/// @brief Field HAPI_ATTRIBUTE_TYPE_HPOINT offset 0
static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_HPOINT;

/// @brief Field HAPI_ATTRIBUTE_TYPE_VECTOR offset 0
static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_VECTOR;

/// @brief Field HAPI_ATTRIBUTE_TYPE_NORMAL offset 0
static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_NORMAL;

/// @brief Field HAPI_ATTRIBUTE_TYPE_COLOR offset 0
static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_COLOR;

/// @brief Field HAPI_ATTRIBUTE_TYPE_QUATERNION offset 0
static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_QUATERNION;

/// @brief Field HAPI_ATTRIBUTE_TYPE_MATRIX3 offset 0
static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_MATRIX3;

/// @brief Field HAPI_ATTRIBUTE_TYPE_MATRIX offset 0
static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_MATRIX;

/// @brief Field HAPI_ATTRIBUTE_TYPE_ST offset 0
static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_ST;

/// @brief Field HAPI_ATTRIBUTE_TYPE_HIDDEN offset 0
static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_HIDDEN;

/// @brief Field HAPI_ATTRIBUTE_TYPE_BOX2 offset 0
static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_BOX2;

/// @brief Field HAPI_ATTRIBUTE_TYPE_BOX offset 0
static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_BOX;

/// @brief Field HAPI_ATTRIBUTE_TYPE_TEXTURE offset 0
static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_TEXTURE;

/// @brief Field HAPI_ATTRIBUTE_TYPE_MAX offset 0
static ::HoudiniEngineUnity::HAPI_AttributeTypeInfo const HAPI_ATTRIBUTE_TYPE_MAX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_AttributeTypeInfo, "HoudiniEngineUnity", "HAPI_AttributeTypeInfo");
