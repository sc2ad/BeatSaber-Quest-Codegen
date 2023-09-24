#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace UnityEngine {
class GameObject;
}
namespace HMUI {
class CurvedTextMeshPro;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServerListTableCell;
}
// Type: ::GameServerListTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5517))
// CS Name: GameServerListTableCell
class CORDL_TYPE GameServerListTableCell : public HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~GameServerListTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerListTableCell", modifiers: " const&", def_value: None }]
constexpr GameServerListTableCell(GameServerListTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServerListTableCell", modifiers: "&&", def_value: None }]
constexpr GameServerListTableCell(GameServerListTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameServerListTableCell(void* ptr) noexcept : HMUI::TableCell(ptr) {
}


  constexpr GameServerListTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameServerListTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameServerListTableCell& operator=(GameServerListTableCell&& o) noexcept = default;
  constexpr GameServerListTableCell& operator=(GameServerListTableCell const& o) noexcept = default;
                


// Fields

 HMUI::CurvedTextMeshPro __declspec(property(get=__get__serverName, put=__set__serverName))  _serverName;

constexpr void __set__serverName(HMUI::CurvedTextMeshPro value) ;

constexpr HMUI::CurvedTextMeshPro __get__serverName() const;

 HMUI::CurvedTextMeshPro __declspec(property(get=__get__difficultiesText, put=__set__difficultiesText))  _difficultiesText;

constexpr void __set__difficultiesText(HMUI::CurvedTextMeshPro value) ;

constexpr HMUI::CurvedTextMeshPro __get__difficultiesText() const;

 HMUI::CurvedTextMeshPro __declspec(property(get=__get__musicPackText, put=__set__musicPackText))  _musicPackText;

constexpr void __set__musicPackText(HMUI::CurvedTextMeshPro value) ;

constexpr HMUI::CurvedTextMeshPro __get__musicPackText() const;

 HMUI::CurvedTextMeshPro __declspec(property(get=__get__playerCount, put=__set__playerCount))  _playerCount;

constexpr void __set__playerCount(HMUI::CurvedTextMeshPro value) ;

constexpr HMUI::CurvedTextMeshPro __get__playerCount() const;

 UnityEngine::GameObject __declspec(property(get=__get__passwordProtected, put=__set__passwordProtected))  _passwordProtected;

constexpr void __set__passwordProtected(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__passwordProtected() const;

 GlobalNamespace::SongPackMasksModel __declspec(property(get=__get__songPackMasksModel, put=__set__songPackMasksModel))  _songPackMasksModel;

constexpr void __set__songPackMasksModel(GlobalNamespace::SongPackMasksModel value) ;

constexpr GlobalNamespace::SongPackMasksModel __get__songPackMasksModel() const;


// Methods

/// @brief Method SetData addr 0x2123404 size 0x388 virtual false final false
 void SetData(GlobalNamespace::INetworkPlayer player) ;

static GlobalNamespace::GameServerListTableCell New_ctor() ;

/// @brief Method .ctor addr 0x212378c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameServerListTableCell);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerListTableCell, "", "GameServerListTableCell");
