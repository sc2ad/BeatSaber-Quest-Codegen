#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PartType;
}
// Type: HoudiniEngineUnity::HAPI_PartType
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9651))
// CS Name: HoudiniEngineUnity.HAPI_PartType
struct CORDL_TYPE HAPI_PartType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_PartType(int32_t value__) noexcept;


                    constexpr HAPI_PartType(HAPI_PartType const&) = default;
                    constexpr HAPI_PartType(HAPI_PartType&&) = default;
                    constexpr HAPI_PartType& operator=(HAPI_PartType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HAPI_PartType& operator=(HAPI_PartType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HAPI_PartType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HAPI_PartType_Unwrapped : int32_t {
__HAPI_PARTTYPE_INVALID = -1,
__HAPI_PARTTYPE_MESH = 0,
__HAPI_PARTTYPE_CURVE = 1,
__HAPI_PARTTYPE_VOLUME = 2,
__HAPI_PARTTYPE_INSTANCER = 3,
__HAPI_PARTTYPE_BOX = 4,
__HAPI_PARTTYPE_SPHERE = 5,
__HAPI_PARTTYPE_MAX = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_PartType_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_PartType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HAPI_PARTTYPE_INVALID offset 0
static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_INVALID;

/// @brief Field HAPI_PARTTYPE_MESH offset 0
static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_MESH;

/// @brief Field HAPI_PARTTYPE_CURVE offset 0
static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_CURVE;

/// @brief Field HAPI_PARTTYPE_VOLUME offset 0
static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_VOLUME;

/// @brief Field HAPI_PARTTYPE_INSTANCER offset 0
static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_INSTANCER;

/// @brief Field HAPI_PARTTYPE_BOX offset 0
static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_BOX;

/// @brief Field HAPI_PARTTYPE_SPHERE offset 0
static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_SPHERE;

/// @brief Field HAPI_PARTTYPE_MAX offset 0
static ::HoudiniEngineUnity::HAPI_PartType const HAPI_PARTTYPE_MAX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PartType, "HoudiniEngineUnity", "HAPI_PartType");
