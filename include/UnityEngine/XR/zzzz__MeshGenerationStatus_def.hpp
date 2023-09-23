#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::XR {
struct MeshGenerationStatus;
}
// Type: UnityEngine.XR::MeshGenerationStatus
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15584))
// CS Name: UnityEngine.XR.MeshGenerationStatus
struct CORDL_TYPE MeshGenerationStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MeshGenerationStatus(int32_t value__) noexcept;


                    constexpr MeshGenerationStatus(MeshGenerationStatus const&) = default;
                    constexpr MeshGenerationStatus(MeshGenerationStatus&&) = default;
                    constexpr MeshGenerationStatus& operator=(MeshGenerationStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MeshGenerationStatus& operator=(MeshGenerationStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MeshGenerationStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MeshGenerationStatus_Unwrapped : int32_t {
__Success = 0,
__InvalidMeshId = 1,
__GenerationAlreadyInProgress = 2,
__Canceled = 3,
__UnknownError = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MeshGenerationStatus_Unwrapped () const noexcept {
return std::bit_cast<__MeshGenerationStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Success offset 0
static UnityEngine::XR::MeshGenerationStatus const Success;

/// @brief Field InvalidMeshId offset 0
static UnityEngine::XR::MeshGenerationStatus const InvalidMeshId;

/// @brief Field GenerationAlreadyInProgress offset 0
static UnityEngine::XR::MeshGenerationStatus const GenerationAlreadyInProgress;

/// @brief Field Canceled offset 0
static UnityEngine::XR::MeshGenerationStatus const Canceled;

/// @brief Field UnknownError offset 0
static UnityEngine::XR::MeshGenerationStatus const UnknownError;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::MeshGenerationStatus, "UnityEngine.XR", "MeshGenerationStatus");
