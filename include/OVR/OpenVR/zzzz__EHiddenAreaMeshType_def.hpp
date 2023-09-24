#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace OVR::OpenVR {
struct EHiddenAreaMeshType;
}
// Type: OVR.OpenVR::EHiddenAreaMeshType
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9381))
// CS Name: OVR.OpenVR.EHiddenAreaMeshType
struct CORDL_TYPE EHiddenAreaMeshType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EHiddenAreaMeshType(int32_t value__) noexcept;


                    constexpr EHiddenAreaMeshType(EHiddenAreaMeshType const&) = default;
                    constexpr EHiddenAreaMeshType(EHiddenAreaMeshType&&) = default;
                    constexpr EHiddenAreaMeshType& operator=(EHiddenAreaMeshType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EHiddenAreaMeshType& operator=(EHiddenAreaMeshType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EHiddenAreaMeshType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EHiddenAreaMeshType_Unwrapped : int32_t {
__k_eHiddenAreaMesh_Standard = 0,
__k_eHiddenAreaMesh_Inverse = 1,
__k_eHiddenAreaMesh_LineLoop = 2,
__k_eHiddenAreaMesh_Max = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EHiddenAreaMeshType_Unwrapped () const noexcept {
return std::bit_cast<__EHiddenAreaMeshType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field k_eHiddenAreaMesh_Standard offset 0
static OVR::OpenVR::EHiddenAreaMeshType const k_eHiddenAreaMesh_Standard;

/// @brief Field k_eHiddenAreaMesh_Inverse offset 0
static OVR::OpenVR::EHiddenAreaMeshType const k_eHiddenAreaMesh_Inverse;

/// @brief Field k_eHiddenAreaMesh_LineLoop offset 0
static OVR::OpenVR::EHiddenAreaMeshType const k_eHiddenAreaMesh_LineLoop;

/// @brief Field k_eHiddenAreaMesh_Max offset 0
static OVR::OpenVR::EHiddenAreaMeshType const k_eHiddenAreaMesh_Max;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EHiddenAreaMeshType, "OVR.OpenVR", "EHiddenAreaMeshType");
