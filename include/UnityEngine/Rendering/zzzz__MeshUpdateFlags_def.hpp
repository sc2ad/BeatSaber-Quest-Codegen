#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
struct MeshUpdateFlags;
}
// Type: UnityEngine.Rendering::MeshUpdateFlags
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10265))
// CS Name: UnityEngine.Rendering.MeshUpdateFlags
struct CORDL_TYPE MeshUpdateFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MeshUpdateFlags(int32_t value__) noexcept;


                    constexpr MeshUpdateFlags(MeshUpdateFlags const&) = default;
                    constexpr MeshUpdateFlags(MeshUpdateFlags&&) = default;
                    constexpr MeshUpdateFlags& operator=(MeshUpdateFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MeshUpdateFlags& operator=(MeshUpdateFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MeshUpdateFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MeshUpdateFlags_Unwrapped : int32_t {
__Default = 0,
__DontValidateIndices = 1,
__DontResetBoneBounds = 2,
__DontNotifyMeshUsers = 4,
__DontRecalculateBounds = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MeshUpdateFlags_Unwrapped () const noexcept {
return std::bit_cast<__MeshUpdateFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static UnityEngine::Rendering::MeshUpdateFlags const Default;

/// @brief Field DontValidateIndices offset 0
static UnityEngine::Rendering::MeshUpdateFlags const DontValidateIndices;

/// @brief Field DontResetBoneBounds offset 0
static UnityEngine::Rendering::MeshUpdateFlags const DontResetBoneBounds;

/// @brief Field DontNotifyMeshUsers offset 0
static UnityEngine::Rendering::MeshUpdateFlags const DontNotifyMeshUsers;

/// @brief Field DontRecalculateBounds offset 0
static UnityEngine::Rendering::MeshUpdateFlags const DontRecalculateBounds;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::MeshUpdateFlags, "UnityEngine.Rendering", "MeshUpdateFlags");
