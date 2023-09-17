#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace RootMotion {
class LayerMaskExtensions;
}
// Type: RootMotion::LayerMaskExtensions
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12438))
// CS Name: RootMotion.LayerMaskExtensions
class CORDL_TYPE LayerMaskExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LayerMaskExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "LayerMaskExtensions", modifiers: " const&", def_value: None }]
constexpr LayerMaskExtensions(LayerMaskExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LayerMaskExtensions", modifiers: "&&", def_value: None }]
constexpr LayerMaskExtensions(LayerMaskExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LayerMaskExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LayerMaskExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LayerMaskExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LayerMaskExtensions& operator=(LayerMaskExtensions&& o) noexcept = default;
  constexpr LayerMaskExtensions& operator=(LayerMaskExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Contains addr 0x11b3e1c size 0x4c virtual false final false
static bool Contains(::UnityEngine::LayerMask mask, int32_t layer) ;

/// @brief Method Create addr 0x11b3e68 size 0x14 virtual false final false
static ::UnityEngine::LayerMask Create(::ArrayW<::StringW> layerNames) ;

/// @brief Method Create addr 0x11b3f24 size 0x14 virtual false final false
static ::UnityEngine::LayerMask Create(::ArrayW<int32_t> layerNumbers) ;

/// @brief Method NamesToMask addr 0x11b3e7c size 0xa8 virtual false final false
static ::UnityEngine::LayerMask NamesToMask(::ArrayW<::StringW> layerNames) ;

/// @brief Method LayerNumbersToMask addr 0x11b3f38 size 0x90 virtual false final false
static ::UnityEngine::LayerMask LayerNumbersToMask(::ArrayW<int32_t> layerNumbers) ;

/// @brief Method Inverse addr 0x11b3fc8 size 0x28 virtual false final false
static ::UnityEngine::LayerMask Inverse(::UnityEngine::LayerMask original) ;

/// @brief Method AddToMask addr 0x11b3ff0 size 0x4c virtual false final false
static ::UnityEngine::LayerMask AddToMask(::UnityEngine::LayerMask original, ::ArrayW<::StringW> layerNames) ;

/// @brief Method RemoveFromMask addr 0x11b403c size 0x68 virtual false final false
static ::UnityEngine::LayerMask RemoveFromMask(::UnityEngine::LayerMask original, ::ArrayW<::StringW> layerNames) ;

/// @brief Method MaskToNames addr 0x11b40a4 size 0x154 virtual false final false
static ::ArrayW<::StringW> MaskToNames(::UnityEngine::LayerMask original) ;

/// @brief Method MaskToNumbers addr 0x11b41f8 size 0x138 virtual false final false
static ::ArrayW<int32_t> MaskToNumbers(::UnityEngine::LayerMask original) ;

/// @brief Method MaskToString addr 0x11b4330 size 0x58 virtual false final false
static ::StringW MaskToString(::UnityEngine::LayerMask original) ;

/// @brief Method MaskToString addr 0x11b4388 size 0x24 virtual false final false
static ::StringW MaskToString(::UnityEngine::LayerMask original, ::StringW delimiter) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::LayerMaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::LayerMaskExtensions, "RootMotion", "LayerMaskExtensions");
