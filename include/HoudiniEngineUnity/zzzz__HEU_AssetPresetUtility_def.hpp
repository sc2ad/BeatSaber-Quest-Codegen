#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AssetPresetUtility;
}
// Type: HoudiniEngineUnity::HEU_AssetPresetUtility
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9555))
// CS Name: HoudiniEngineUnity.HEU_AssetPresetUtility
class CORDL_TYPE HEU_AssetPresetUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_AssetPresetUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetPresetUtility", modifiers: " const&", def_value: None }]
constexpr HEU_AssetPresetUtility(HEU_AssetPresetUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetPresetUtility", modifiers: "&&", def_value: None }]
constexpr HEU_AssetPresetUtility(HEU_AssetPresetUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_AssetPresetUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_AssetPresetUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_AssetPresetUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_AssetPresetUtility& operator=(HEU_AssetPresetUtility&& o) noexcept = default;
  constexpr HEU_AssetPresetUtility& operator=(HEU_AssetPresetUtility const& o) noexcept = default;
                


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_PRESET_IDENTIFIER, put=__set_PRESET_IDENTIFIER))  PRESET_IDENTIFIER;

static void __set_PRESET_IDENTIFIER(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_PRESET_IDENTIFIER() ;

static int32_t __declspec(property(get=__get_PRESET_VERSION, put=__set_PRESET_VERSION))  PRESET_VERSION;

static void __set_PRESET_VERSION(int32_t value) ;

static int32_t __get_PRESET_VERSION() ;


// Methods

/// @brief Method SaveAssetPresetToFile addr 0x1fdb128 size 0x640 virtual false final false
static void SaveAssetPresetToFile(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW filePath) ;

/// @brief Method LoadPresetFileIntoAssetAndCook addr 0x1fdbf54 size 0x668 virtual false final false
static void LoadPresetFileIntoAssetAndCook(HoudiniEngineUnity::HEU_HoudiniAsset asset, ::StringW filePath) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_AssetPresetUtility);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_AssetPresetUtility, "HoudiniEngineUnity", "HEU_AssetPresetUtility");
