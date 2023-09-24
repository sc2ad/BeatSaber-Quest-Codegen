#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace TMPro::SpriteAssetUtilities {
struct SpriteAssetImportFormats;
}
// Type: TMPro.SpriteAssetUtilities::SpriteAssetImportFormats
namespace TMPro::SpriteAssetUtilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12402))
// CS Name: TMPro.SpriteAssetUtilities.SpriteAssetImportFormats
struct CORDL_TYPE SpriteAssetImportFormats : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SpriteAssetImportFormats(int32_t value__) noexcept;


                    constexpr SpriteAssetImportFormats(SpriteAssetImportFormats const&) = default;
                    constexpr SpriteAssetImportFormats(SpriteAssetImportFormats&&) = default;
                    constexpr SpriteAssetImportFormats& operator=(SpriteAssetImportFormats const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SpriteAssetImportFormats& operator=(SpriteAssetImportFormats&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SpriteAssetImportFormats(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SpriteAssetImportFormats_Unwrapped : int32_t {
__None = 0,
__TexturePackerJsonArray = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SpriteAssetImportFormats_Unwrapped () const noexcept {
return std::bit_cast<__SpriteAssetImportFormats_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static TMPro::SpriteAssetUtilities::SpriteAssetImportFormats const None;

/// @brief Field TexturePackerJsonArray offset 0
static TMPro::SpriteAssetUtilities::SpriteAssetImportFormats const TexturePackerJsonArray;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro::SpriteAssetUtilities
DEFINE_IL2CPP_ARG_TYPE(TMPro::SpriteAssetUtilities::SpriteAssetImportFormats, "TMPro.SpriteAssetUtilities", "SpriteAssetImportFormats");
