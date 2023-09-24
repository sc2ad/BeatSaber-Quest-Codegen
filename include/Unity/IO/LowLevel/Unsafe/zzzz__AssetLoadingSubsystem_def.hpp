#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct AssetLoadingSubsystem;
}
// Type: Unity.IO.LowLevel.Unsafe::AssetLoadingSubsystem
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9928))
// CS Name: Unity.IO.LowLevel.Unsafe.AssetLoadingSubsystem
struct CORDL_TYPE AssetLoadingSubsystem : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AssetLoadingSubsystem(int32_t value__) noexcept;


                    constexpr AssetLoadingSubsystem(AssetLoadingSubsystem const&) = default;
                    constexpr AssetLoadingSubsystem(AssetLoadingSubsystem&&) = default;
                    constexpr AssetLoadingSubsystem& operator=(AssetLoadingSubsystem const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AssetLoadingSubsystem& operator=(AssetLoadingSubsystem&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AssetLoadingSubsystem(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AssetLoadingSubsystem_Unwrapped : int32_t {
__Other = 0,
__Texture = 1,
__VirtualTexture = 2,
__Mesh = 3,
__Audio = 4,
__Scripts = 5,
__EntitiesScene = 6,
__EntitiesStreamBinaryReader = 7,
__FileInfo = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AssetLoadingSubsystem_Unwrapped () const noexcept {
return std::bit_cast<__AssetLoadingSubsystem_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Other offset 0
static Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const Other;

/// @brief Field Texture offset 0
static Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const Texture;

/// @brief Field VirtualTexture offset 0
static Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const VirtualTexture;

/// @brief Field Mesh offset 0
static Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const Mesh;

/// @brief Field Audio offset 0
static Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const Audio;

/// @brief Field Scripts offset 0
static Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const Scripts;

/// @brief Field EntitiesScene offset 0
static Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const EntitiesScene;

/// @brief Field EntitiesStreamBinaryReader offset 0
static Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const EntitiesStreamBinaryReader;

/// @brief Field FileInfo offset 0
static Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem const FileInfo;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::IO::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem, "Unity.IO.LowLevel.Unsafe", "AssetLoadingSubsystem");
