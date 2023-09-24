#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputInterfaceTilemapSettings;
}
// Type: HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9786))
// CS Name: HoudiniEngineUnity.HEU_InputInterfaceTilemapSettings
class CORDL_TYPE HEU_InputInterfaceTilemapSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HEU_InputInterfaceTilemapSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceTilemapSettings", modifiers: " const&", def_value: None }]
constexpr HEU_InputInterfaceTilemapSettings(HEU_InputInterfaceTilemapSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceTilemapSettings", modifiers: "&&", def_value: None }]
constexpr HEU_InputInterfaceTilemapSettings(HEU_InputInterfaceTilemapSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_InputInterfaceTilemapSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_InputInterfaceTilemapSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_InputInterfaceTilemapSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_InputInterfaceTilemapSettings& operator=(HEU_InputInterfaceTilemapSettings&& o) noexcept = default;
  constexpr HEU_InputInterfaceTilemapSettings& operator=(HEU_InputInterfaceTilemapSettings const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__createGroupsForTiles, put=__set__createGroupsForTiles))  _createGroupsForTiles;

constexpr void __set__createGroupsForTiles(bool value) ;

constexpr bool __get__createGroupsForTiles() const;

 bool __declspec(property(get=__get__exportUnusedTiles, put=__set__exportUnusedTiles))  _exportUnusedTiles;

constexpr void __set__exportUnusedTiles(bool value) ;

constexpr bool __get__exportUnusedTiles() const;

 bool __declspec(property(get=__get__applyTileColor, put=__set__applyTileColor))  _applyTileColor;

constexpr void __set__applyTileColor(bool value) ;

constexpr bool __get__applyTileColor() const;

 bool __declspec(property(get=__get__applyTilemapOrientation, put=__set__applyTilemapOrientation))  _applyTilemapOrientation;

constexpr void __set__applyTilemapOrientation(bool value) ;

constexpr bool __get__applyTilemapOrientation() const;


// Methods

static HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings New_ctor() ;

/// @brief Method .ctor addr 0x2059cf0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InputInterfaceTilemapSettings, "HoudiniEngineUnity", "HEU_InputInterfaceTilemapSettings");
