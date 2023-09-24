#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Settings;
}
// Forward declare root types
namespace TMPro {
class TMP_ResourceManager;
}
// Type: TMPro::TMP_ResourceManager
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12349))
// CS Name: TMPro.TMP_ResourceManager
class CORDL_TYPE TMP_ResourceManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMP_ResourceManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_ResourceManager", modifiers: " const&", def_value: None }]
constexpr TMP_ResourceManager(TMP_ResourceManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_ResourceManager", modifiers: "&&", def_value: None }]
constexpr TMP_ResourceManager(TMP_ResourceManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_ResourceManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_ResourceManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_ResourceManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_ResourceManager& operator=(TMP_ResourceManager&& o) noexcept = default;
  constexpr TMP_ResourceManager& operator=(TMP_ResourceManager const& o) noexcept = default;
                


// Fields

static TMPro::TMP_ResourceManager __declspec(property(get=__get_s_instance, put=__set_s_instance))  s_instance;

static void __set_s_instance(TMPro::TMP_ResourceManager value) ;

static TMPro::TMP_ResourceManager __get_s_instance() ;

static TMPro::TMP_Settings __declspec(property(get=__get_s_TextSettings, put=__set_s_TextSettings))  s_TextSettings;

static void __set_s_TextSettings(TMPro::TMP_Settings value) ;

static TMPro::TMP_Settings __get_s_TextSettings() ;

static System::Collections::Generic::List_1<TMPro::TMP_FontAsset> __declspec(property(get=__get_s_FontAssetReferences, put=__set_s_FontAssetReferences))  s_FontAssetReferences;

static void __set_s_FontAssetReferences(System::Collections::Generic::List_1<TMPro::TMP_FontAsset> value) ;

static System::Collections::Generic::List_1<TMPro::TMP_FontAsset> __get_s_FontAssetReferences() ;

static System::Collections::Generic::Dictionary_2<int32_t,TMPro::TMP_FontAsset> __declspec(property(get=__get_s_FontAssetReferenceLookup, put=__set_s_FontAssetReferenceLookup))  s_FontAssetReferenceLookup;

static void __set_s_FontAssetReferenceLookup(System::Collections::Generic::Dictionary_2<int32_t,TMPro::TMP_FontAsset> value) ;

static System::Collections::Generic::Dictionary_2<int32_t,TMPro::TMP_FontAsset> __get_s_FontAssetReferenceLookup() ;


// Methods

/// @brief Method GetTextSettings addr 0x2aa7c0c size 0x110 virtual false final false
static TMPro::TMP_Settings GetTextSettings() ;

/// @brief Method AddFontAsset addr 0x2aa7d1c size 0x154 virtual false final false
static void AddFontAsset(TMPro::TMP_FontAsset fontAsset) ;

/// @brief Method TryGetFontAsset addr 0x2aa7e70 size 0x94 virtual false final false
static bool TryGetFontAsset(int32_t hashcode, ByRef<TMPro::TMP_FontAsset> fontAsset) ;

/// @brief Method RebuildFontAssetCache addr 0x2aa7f04 size 0x118 virtual false final false
static void RebuildFontAssetCache(int32_t instanceID) ;

static TMPro::TMP_ResourceManager New_ctor() ;

/// @brief Method .ctor addr 0x2aa7c04 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_ResourceManager);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_ResourceManager, "TMPro", "TMP_ResourceManager");
