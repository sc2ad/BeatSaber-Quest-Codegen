#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
// Type: ::AssetDownloadingState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4432))
// CS Name: LevelDataAssetDownloadUpdate::AssetDownloadingState
struct CORDL_TYPE GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState(int32_t value__) noexcept;


                    constexpr GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState(GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState const&) = default;
                    constexpr GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState(GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState&&) = default;
                    constexpr GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState& operator=(GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState& operator=(GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState_Unwrapped : int32_t {
__PreparingToDownload = 0,
__Downloading = 1,
__Completed = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PreparingToDownload offset 0
static GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState const PreparingToDownload;

/// @brief Field Downloading offset 0
static GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState const Downloading;

/// @brief Field Completed offset 0
static GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState const Completed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelDataAssetDownloadUpdate
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4433))
// CS Name: LevelDataAssetDownloadUpdate
struct CORDL_TYPE LevelDataAssetDownloadUpdate : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using AssetDownloadingState = GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState;

// Ctor Parameters [CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "bytesTotal", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "bytesTransferred", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "assetDownloadingState", ty: "GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState", modifiers: "", def_value: None }]
constexpr LevelDataAssetDownloadUpdate(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred, GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState assetDownloadingState) noexcept;


                    constexpr LevelDataAssetDownloadUpdate(LevelDataAssetDownloadUpdate const&) = default;
                    constexpr LevelDataAssetDownloadUpdate(LevelDataAssetDownloadUpdate&&) = default;
                    constexpr LevelDataAssetDownloadUpdate& operator=(LevelDataAssetDownloadUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LevelDataAssetDownloadUpdate& operator=(LevelDataAssetDownloadUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LevelDataAssetDownloadUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_levelID, put=__set_levelID))  levelID;

constexpr void __set_levelID(::StringW value) ;

constexpr ::StringW __get_levelID() const;

 uint32_t __declspec(property(get=__get_bytesTotal, put=__set_bytesTotal))  bytesTotal;

constexpr void __set_bytesTotal(uint32_t value) ;

constexpr uint32_t __get_bytesTotal() const;

 uint32_t __declspec(property(get=__get_bytesTransferred, put=__set_bytesTransferred))  bytesTransferred;

constexpr void __set_bytesTransferred(uint32_t value) ;

constexpr uint32_t __get_bytesTransferred() const;

 GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState __declspec(property(get=__get_assetDownloadingState, put=__set_assetDownloadingState))  assetDownloadingState;

constexpr void __set_assetDownloadingState(GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState value) ;

constexpr GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState __get_assetDownloadingState() const;


// Methods

/// @brief Method .ctor addr 0x21ed9f0 size 0x10 virtual false final false
 void _ctor(::StringW levelID, uint32_t bytesTotal, uint32_t bytesTransferred, GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState assetDownloadingState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LevelDataAssetDownloadUpdate__AssetDownloadingState, "", "LevelDataAssetDownloadUpdate/AssetDownloadingState");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelDataAssetDownloadUpdate, "", "LevelDataAssetDownloadUpdate");
