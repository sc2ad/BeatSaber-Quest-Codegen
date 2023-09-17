#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__NetworkPlayersTableView_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__LevelPackHeaderTableCell_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerTableCell_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerOptionsTableCell_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType::______GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::______GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::______GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType  ::GlobalNamespace::______GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType::Header{0};
constexpr ::GlobalNamespace::______GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType  ::GlobalNamespace::______GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType::Player{1};
constexpr ::GlobalNamespace::______GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType  ::GlobalNamespace::______GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType::Options{2};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo::*)()>(&::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2151a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo::__set_type(::GlobalNamespace::______GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::______GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::______GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType>(value));
}
constexpr ::GlobalNamespace::______GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType ::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo::__get_type() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::______GlobalNamespace__NetworkPlayersTableView__CellInfo__CellType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo::__set_headerString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo::__get_headerString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo::__set_player(::GlobalNamespace::INetworkPlayer value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::INetworkPlayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::INetworkPlayer>(value));
}
constexpr ::GlobalNamespace::INetworkPlayer ::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo::__get_player() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::INetworkPlayer, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo::__set_lastCellInParty(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo::__get_lastCellInParty() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo::____GlobalNamespace__NetworkPlayersTableView__CellInfo()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__NetworkPlayersTableView__CellInfo>())) {}
 void ::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.CellSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::NetworkPlayersTableView::*)()>(&::GlobalNamespace::NetworkPlayersTableView::CellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2150ca4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView>::get(),
                            "CellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.NumberOfCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NetworkPlayersTableView::*)()>(&::GlobalNamespace::NetworkPlayersTableView::NumberOfCells)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2150cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.CellForIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell (::GlobalNamespace::NetworkPlayersTableView::*)(::HMUI::TableView, int32_t)>(&::GlobalNamespace::NetworkPlayersTableView::CellForIdx)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x2150cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView>::get(),
                            "CellForIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.AddPlayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkPlayersTableView::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer>, ::StringW)>(&::GlobalNamespace::NetworkPlayersTableView::AddPlayers)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x2151380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView>::get(),
                            "AddPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.SetParties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkPlayersTableView::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer>, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer>, ::StringW, ::StringW)>(&::GlobalNamespace::NetworkPlayersTableView::SetParties)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2151d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView>::get(),
                            "SetParties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.HandleCellWasPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkPlayersTableView::*)(::HMUI::TableView, ::HMUI::TableCell)>(&::GlobalNamespace::NetworkPlayersTableView::HandleCellWasPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2151ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView>::get(),
                            "HandleCellWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableCell>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.HasVisibleOptions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::INetworkPlayer)>(&::GlobalNamespace::NetworkPlayersTableView::HasVisibleOptions)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x2151a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView>::get(),
                            "HasVisibleOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkPlayersTableView::*)()>(&::GlobalNamespace::NetworkPlayersTableView::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2151ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::HMUI::____HMUI__TableView__IDataSource
constexpr  ::GlobalNamespace::NetworkPlayersTableView::operator ::HMUI::____HMUI__TableView__IDataSource() const noexcept {
return ::HMUI::____HMUI__TableView__IDataSource(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::NetworkPlayersTableView::__set__tableView(::HMUI::TableView value)  {
::cordl_internals::setInstanceField<::HMUI::TableView, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::TableView>(value));
}
constexpr ::HMUI::TableView ::GlobalNamespace::NetworkPlayersTableView::__get__tableView() const {
return ::cordl_internals::getInstanceField<::HMUI::TableView, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::NetworkPlayersTableView::__set__playerCellPrefab(::GlobalNamespace::NetworkPlayerTableCell value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NetworkPlayerTableCell, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::NetworkPlayerTableCell>(value));
}
constexpr ::GlobalNamespace::NetworkPlayerTableCell ::GlobalNamespace::NetworkPlayersTableView::__get__playerCellPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NetworkPlayerTableCell, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::NetworkPlayersTableView::__set__optionsCellPrefab(::GlobalNamespace::NetworkPlayerOptionsTableCell value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NetworkPlayerOptionsTableCell, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::NetworkPlayerOptionsTableCell>(value));
}
constexpr ::GlobalNamespace::NetworkPlayerOptionsTableCell ::GlobalNamespace::NetworkPlayersTableView::__get__optionsCellPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NetworkPlayerOptionsTableCell, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::NetworkPlayersTableView::__set__headerCellPrefab(::GlobalNamespace::LevelPackHeaderTableCell value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelPackHeaderTableCell, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LevelPackHeaderTableCell>(value));
}
constexpr ::GlobalNamespace::LevelPackHeaderTableCell ::GlobalNamespace::NetworkPlayersTableView::__get__headerCellPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelPackHeaderTableCell, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::NetworkPlayersTableView::__set__rowHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::NetworkPlayersTableView::__get__rowHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::NetworkPlayersTableView::__set__cellInfo(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo> ::GlobalNamespace::NetworkPlayersTableView::__get__cellInfo() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__NetworkPlayersTableView__CellInfo>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::NetworkPlayersTableView::__set__selectedCellIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::NetworkPlayersTableView::__get__selectedCellIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::NetworkPlayersTableView::__set__selectedPlayerID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::NetworkPlayersTableView::__get__selectedPlayerID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::NetworkPlayersTableView::__set__selectedCellHasOptions(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::NetworkPlayersTableView::__get__selectedCellHasOptions() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t ::GlobalNamespace::NetworkPlayersTableView::CellSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView>::get(),
                            "CellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::NetworkPlayersTableView::NumberOfCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HMUI::TableCell ::GlobalNamespace::NetworkPlayersTableView::CellForIdx(::HMUI::TableView tableView, int32_t row)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView>::get(),
                            "CellForIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::TableCell, false>(const_cast<void*>(instance), ___internal_method, tableView, row);
}
 void ::GlobalNamespace::NetworkPlayersTableView::AddPlayers(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> players, ::StringW title)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView>::get(),
                            "AddPlayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, players, title);
}
 void ::GlobalNamespace::NetworkPlayersTableView::SetParties(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> partyPlayers, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer> otherPlayers, ::StringW myPartyTitle, ::StringW otherPlayersTitle)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView>::get(),
                            "SetParties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, partyPlayers, otherPlayers, myPartyTitle, otherPlayersTitle);
}
 void ::GlobalNamespace::NetworkPlayersTableView::HandleCellWasPressed(::HMUI::TableView tableView, ::HMUI::TableCell tableCell)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView>::get(),
                            "HandleCellWasPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableCell>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tableView, tableCell);
}
 bool ::GlobalNamespace::NetworkPlayersTableView::HasVisibleOptions(::GlobalNamespace::INetworkPlayer player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView>::get(),
                            "HasVisibleOptions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, player);
}
// Ctor Parameters []
 ::GlobalNamespace::NetworkPlayersTableView::NetworkPlayersTableView()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<NetworkPlayersTableView>())) {}
 void ::GlobalNamespace::NetworkPlayersTableView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
