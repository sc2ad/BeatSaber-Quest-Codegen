#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace HMUI {
class TableView;
}
namespace Zenject {
class DiContainer;
}
namespace HMUI {
class TableCell;
}
namespace GlobalNamespace {
class GameServerListDetailTableCell;
}
namespace GlobalNamespace {
class GameServerListTableCell;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class TableViewWithDetailCell;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class GlobalNamespace__TableViewWithDetailCell__IDataSource;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServersListTableView;
}
// Type: ::GameServersListTableView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5870))
// CS Name: GameServersListTableView
class CORDL_TYPE GameServersListTableView : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::GlobalNamespace__TableViewWithDetailCell__IDataSource
constexpr operator  GlobalNamespace::GlobalNamespace__TableViewWithDetailCell__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~GameServersListTableView() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServersListTableView", modifiers: " const&", def_value: None }]
constexpr GameServersListTableView(GameServersListTableView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameServersListTableView", modifiers: "&&", def_value: None }]
constexpr GameServersListTableView(GameServersListTableView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameServersListTableView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GameServersListTableView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameServersListTableView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameServersListTableView& operator=(GameServersListTableView&& o) noexcept = default;
  constexpr GameServersListTableView& operator=(GameServersListTableView const& o) noexcept = default;
                


// Fields

/// @brief Field kCellReuseIdentifier offset 0
static constexpr ::ConstString  kCellReuseIdentifier{u"Cell"};

/// @brief Field kDetailCellReuseIdentifier offset 0
static constexpr ::ConstString  kDetailCellReuseIdentifier{u"DetailCell"};

 GlobalNamespace::TableViewWithDetailCell __declspec(property(get=__get__tableView, put=__set__tableView))  _tableView;

constexpr void __set__tableView(GlobalNamespace::TableViewWithDetailCell value) ;

constexpr GlobalNamespace::TableViewWithDetailCell __get__tableView() const;

 GlobalNamespace::GameServerListTableCell __declspec(property(get=__get__gameServerListCellPrefab, put=__set__gameServerListCellPrefab))  _gameServerListCellPrefab;

constexpr void __set__gameServerListCellPrefab(GlobalNamespace::GameServerListTableCell value) ;

constexpr GlobalNamespace::GameServerListTableCell __get__gameServerListCellPrefab() const;

 GlobalNamespace::GameServerListDetailTableCell __declspec(property(get=__get__gameServerDetailCellPrefab, put=__set__gameServerDetailCellPrefab))  _gameServerDetailCellPrefab;

constexpr void __set__gameServerDetailCellPrefab(GlobalNamespace::GameServerListDetailTableCell value) ;

constexpr GlobalNamespace::GameServerListDetailTableCell __get__gameServerDetailCellPrefab() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Action_1<GlobalNamespace::INetworkPlayer> __declspec(property(get=__get_joinButtonPressedEvent, put=__set_joinButtonPressedEvent))  joinButtonPressedEvent;

constexpr void __set_joinButtonPressedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

constexpr System::Action_1<GlobalNamespace::INetworkPlayer> __get_joinButtonPressedEvent() const;

 bool __declspec(property(get=__get__isInitialized, put=__set__isInitialized))  _isInitialized;

constexpr void __set__isInitialized(bool value) ;

constexpr bool __get__isInitialized() const;

 ::ArrayW<GlobalNamespace::INetworkPlayer> __declspec(property(get=__get__gamesList, put=__set__gamesList))  _gamesList;

constexpr void __set__gamesList(::ArrayW<GlobalNamespace::INetworkPlayer> value) ;

constexpr ::ArrayW<GlobalNamespace::INetworkPlayer> __get__gamesList() const;

 GlobalNamespace::INetworkPlayer __declspec(property(get=__get__selectedServer, put=__set__selectedServer))  _selectedServer;

constexpr void __set__selectedServer(GlobalNamespace::INetworkPlayer value) ;

constexpr GlobalNamespace::INetworkPlayer __get__selectedServer() const;


// Methods

/// @brief Method add_joinButtonPressedEvent addr 0x2187ae8 size 0xb0 virtual false final false
 void add_joinButtonPressedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method remove_joinButtonPressedEvent addr 0x2187b98 size 0xb0 virtual false final false
 void remove_joinButtonPressedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method CellSize addr 0x2187c48 size 0xc virtual true final true
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x2187c54 size 0x18 virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method Init addr 0x2187c6c size 0x114 virtual false final false
 void Init() ;

/// @brief Method CellForContent addr 0x2187d80 size 0x164 virtual true final true
 HMUI::TableCell CellForContent(GlobalNamespace::TableViewWithDetailCell tableView, int32_t idx, bool detailOpened) ;

/// @brief Method CellForDetail addr 0x2187ee4 size 0x1bc virtual true final true
 HMUI::TableCell CellForDetail(GlobalNamespace::TableViewWithDetailCell tableView, int32_t contentIdx) ;

/// @brief Method SetData addr 0x21880a0 size 0x124 virtual false final false
 void SetData(System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> servers, bool clearSelection) ;

/// @brief Method HandleGameServerListDetailTableCellJoinServerButtonWasPressed addr 0x21881c4 size 0x24 virtual false final false
 void HandleGameServerListDetailTableCellJoinServerButtonWasPressed() ;

/// @brief Method HandleTableViewDidSelectCellWithIdx addr 0x21881e8 size 0x34 virtual false final false
 void HandleTableViewDidSelectCellWithIdx(HMUI::TableView tableView, int32_t id) ;

/// @brief Method HandleTableViewDidDeselectCellWithIdx addr 0x218821c size 0x8 virtual false final false
 void HandleTableViewDidDeselectCellWithIdx(GlobalNamespace::TableViewWithDetailCell arg1, int32_t arg2) ;

/// @brief Method OnDestroy addr 0x2188224 size 0xf4 virtual false final false
 void OnDestroy() ;

static GlobalNamespace::GameServersListTableView New_ctor() ;

/// @brief Method .ctor addr 0x2188318 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameServersListTableView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServersListTableView, "", "GameServersListTableView");
