#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ResultsTableView_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "GlobalNamespace/zzzz__ResultsTableCell_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResultsTableView.CellSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::ResultsTableView::*)()>(&::GlobalNamespace::ResultsTableView::CellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x218f184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsTableView>::get(),
                            "CellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResultsTableView.NumberOfCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ResultsTableView::*)()>(&::GlobalNamespace::ResultsTableView::NumberOfCells)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x218f18c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsTableView>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResultsTableView.CellForIdx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell (::GlobalNamespace::ResultsTableView::*)(::HMUI::TableView, int32_t)>(&::GlobalNamespace::ResultsTableView::CellForIdx)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x218f22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsTableView>::get(),
                            "CellForIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResultsTableView.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResultsTableView::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData>)>(&::GlobalNamespace::ResultsTableView::SetData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x218f3fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsTableView>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResultsTableView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResultsTableView::*)()>(&::GlobalNamespace::ResultsTableView::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x218f428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsTableView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::HMUI::____HMUI__TableView__IDataSource
constexpr  ::GlobalNamespace::ResultsTableView::operator ::HMUI::____HMUI__TableView__IDataSource() const noexcept {
return ::HMUI::____HMUI__TableView__IDataSource(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ResultsTableView::__set__tableView(::HMUI::TableView value)  {
::cordl_internals::setInstanceField<::HMUI::TableView, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::TableView>(value));
}
constexpr ::HMUI::TableView ::GlobalNamespace::ResultsTableView::__get__tableView() const {
return ::cordl_internals::getInstanceField<::HMUI::TableView, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ResultsTableView::__set__cellPrefab(::GlobalNamespace::ResultsTableCell value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ResultsTableCell, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ResultsTableCell>(value));
}
constexpr ::GlobalNamespace::ResultsTableCell ::GlobalNamespace::ResultsTableView::__get__cellPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ResultsTableCell, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ResultsTableView::__set__rowHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::ResultsTableView::__get__rowHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ResultsTableView::__set__dataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData>>(value));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> ::GlobalNamespace::ResultsTableView::__get__dataList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t ::GlobalNamespace::ResultsTableView::CellSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsTableView>::get(),
                            "CellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::GlobalNamespace::ResultsTableView::NumberOfCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsTableView>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::HMUI::TableCell ::GlobalNamespace::ResultsTableView::CellForIdx(::HMUI::TableView tableView, int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsTableView>::get(),
                            "CellForIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HMUI::TableCell, false>(const_cast<void*>(instance), ___internal_method, tableView, idx);
}
 void ::GlobalNamespace::ResultsTableView::SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> dataList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsTableView>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, dataList);
}
// Ctor Parameters []
 ::GlobalNamespace::ResultsTableView::ResultsTableView()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ResultsTableView>())) {}
 void ::GlobalNamespace::ResultsTableView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResultsTableView>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
