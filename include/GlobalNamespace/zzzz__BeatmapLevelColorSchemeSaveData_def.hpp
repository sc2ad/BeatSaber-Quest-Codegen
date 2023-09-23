#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__ColorScheme;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelColorSchemeSaveData;
}
// Type: ::BeatmapLevelColorSchemeSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4342))
// CS Name: BeatmapLevelColorSchemeSaveData
class CORDL_TYPE BeatmapLevelColorSchemeSaveData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BeatmapLevelColorSchemeSaveData() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelColorSchemeSaveData", modifiers: " const&", def_value: None }]
constexpr BeatmapLevelColorSchemeSaveData(BeatmapLevelColorSchemeSaveData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelColorSchemeSaveData", modifiers: "&&", def_value: None }]
constexpr BeatmapLevelColorSchemeSaveData(BeatmapLevelColorSchemeSaveData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapLevelColorSchemeSaveData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapLevelColorSchemeSaveData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapLevelColorSchemeSaveData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapLevelColorSchemeSaveData& operator=(BeatmapLevelColorSchemeSaveData&& o) noexcept = default;
  constexpr BeatmapLevelColorSchemeSaveData& operator=(BeatmapLevelColorSchemeSaveData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_useOverride, put=__set_useOverride))  useOverride;

constexpr void __set_useOverride(bool value) ;

constexpr bool __get_useOverride() const;

 GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme __declspec(property(get=__get_colorScheme, put=__set_colorScheme))  colorScheme;

constexpr void __set_colorScheme(GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme value) ;

constexpr GlobalNamespace::GlobalNamespace__PlayerSaveData__ColorScheme __get_colorScheme() const;


// Methods

/// @brief Method IsDefault addr 0x21df0e8 size 0x15c virtual false final false
 bool IsDefault() ;

// Ctor Parameters []
explicit BeatmapLevelColorSchemeSaveData() ;

/// @brief Method .ctor addr 0x21df244 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapLevelColorSchemeSaveData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelColorSchemeSaveData, "", "BeatmapLevelColorSchemeSaveData");
