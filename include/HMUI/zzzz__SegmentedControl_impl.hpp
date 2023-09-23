#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: HMUI::HMUI__SegmentedControl__IDataSource.NumberOfCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HMUI::HMUI__SegmentedControl__IDataSource::*)()>(&HMUI::HMUI__SegmentedControl__IDataSource::NumberOfCells)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::HMUI__SegmentedControl__IDataSource),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__SegmentedControl__IDataSource>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::HMUI__SegmentedControl__IDataSource.CellForCellNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::SegmentedControlCell (HMUI::HMUI__SegmentedControl__IDataSource::*)(int32_t)>(&HMUI::HMUI__SegmentedControl__IDataSource::CellForCellNumber)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::HMUI__SegmentedControl__IDataSource),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__SegmentedControl__IDataSource>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 int32_t HMUI::HMUI__SegmentedControl__IDataSource::NumberOfCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__SegmentedControl__IDataSource>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 HMUI::SegmentedControlCell HMUI::HMUI__SegmentedControl__IDataSource::CellForCellNumber(int32_t cellNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::HMUI__SegmentedControl__IDataSource>::get(),
                            "CellForCellNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::SegmentedControlCell, false>(const_cast<void*>(instance), ___internal_method, cellNumber);
}
//  Writing Method size for method: HMUI::SegmentedControl.add_didSelectCellEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)(System::Action_2<HMUI::SegmentedControl,int32_t>)>(&HMUI::SegmentedControl::add_didSelectCellEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1fac884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "add_didSelectCellEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<HMUI::SegmentedControl,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SegmentedControl.remove_didSelectCellEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)(System::Action_2<HMUI::SegmentedControl,int32_t>)>(&HMUI::SegmentedControl::remove_didSelectCellEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1fac934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "remove_didSelectCellEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<HMUI::SegmentedControl,int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SegmentedControl.get_dataSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::HMUI__SegmentedControl__IDataSource (HMUI::SegmentedControl::*)()>(&HMUI::SegmentedControl::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fac9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "get_dataSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SegmentedControl.set_dataSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)(HMUI::HMUI__SegmentedControl__IDataSource)>(&HMUI::SegmentedControl::set_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fabe78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "set_dataSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__SegmentedControl__IDataSource>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SegmentedControl.get_selectedCellNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HMUI::SegmentedControl::*)()>(&HMUI::SegmentedControl::get_selectedCellNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fac9ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "get_selectedCellNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SegmentedControl.get_cells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<HMUI::SegmentedControlCell> (HMUI::SegmentedControl::*)()>(&HMUI::SegmentedControl::get_cells)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fac9f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "get_cells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SegmentedControl.CreateCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)()>(&HMUI::SegmentedControl::CreateCells)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x1fac9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "CreateCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SegmentedControl.HandleCellSelectionDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)(HMUI::SelectableCell, HMUI::HMUI__SelectableCell__TransitionType, ::bs_hook::Il2CppWrapperType)>(&HMUI::SegmentedControl::HandleCellSelectionDidChange)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1facec4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "HandleCellSelectionDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::SelectableCell>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__SelectableCell__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SegmentedControl.SetCallbackForCell
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)(int32_t, System::Action_1<int32_t>)>(&HMUI::SegmentedControl::SetCallbackForCell)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1fad014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "SetCallbackForCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SegmentedControl.ReloadData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)()>(&HMUI::SegmentedControl::ReloadData)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x1fabec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "ReloadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SegmentedControl.SelectCellWithNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)(int32_t)>(&HMUI::SegmentedControl::SelectCellWithNumber)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1fad07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "SelectCellWithNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::SegmentedControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::SegmentedControl::*)()>(&HMUI::SegmentedControl::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1fac700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HMUI::SegmentedControl::__set__separatorPrefab(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform HMUI::SegmentedControl::__get__separatorPrefab() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SegmentedControl::__set_didSelectCellEvent(System::Action_2<HMUI::SegmentedControl,int32_t> value)  {
::cordl_internals::setInstanceField<System::Action_2<HMUI::SegmentedControl,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<HMUI::SegmentedControl,int32_t>>(value));
}
constexpr System::Action_2<HMUI::SegmentedControl,int32_t> HMUI::SegmentedControl::__get_didSelectCellEvent() const {
return ::cordl_internals::getInstanceField<System::Action_2<HMUI::SegmentedControl,int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SegmentedControl::__set__numberOfCells(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HMUI::SegmentedControl::__get__numberOfCells() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SegmentedControl::__set__cells(System::Collections::Generic::List_1<HMUI::SegmentedControlCell> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<HMUI::SegmentedControlCell>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<HMUI::SegmentedControlCell>>(value));
}
constexpr System::Collections::Generic::List_1<HMUI::SegmentedControlCell> HMUI::SegmentedControl::__get__cells() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<HMUI::SegmentedControlCell>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SegmentedControl::__set__separators(System::Collections::Generic::List_1<UnityEngine::GameObject> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::GameObject>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::GameObject>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::GameObject> HMUI::SegmentedControl::__get__separators() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::GameObject>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SegmentedControl::__set__dataSource(HMUI::HMUI__SegmentedControl__IDataSource value)  {
::cordl_internals::setInstanceField<HMUI::HMUI__SegmentedControl__IDataSource, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::HMUI__SegmentedControl__IDataSource>(value));
}
constexpr HMUI::HMUI__SegmentedControl__IDataSource HMUI::SegmentedControl::__get__dataSource() const {
return ::cordl_internals::getInstanceField<HMUI::HMUI__SegmentedControl__IDataSource, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SegmentedControl::__set__selectedCellNumber(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HMUI::SegmentedControl::__get__selectedCellNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::SegmentedControl::__set__callbacks(System::Collections::Generic::Dictionary_2<int32_t,System::Action_1<int32_t>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<int32_t,System::Action_1<int32_t>>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<int32_t,System::Action_1<int32_t>>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<int32_t,System::Action_1<int32_t>> HMUI::SegmentedControl::__get__callbacks() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<int32_t,System::Action_1<int32_t>>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HMUI::SegmentedControl::add_didSelectCellEvent(System::Action_2<HMUI::SegmentedControl,int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "add_didSelectCellEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<HMUI::SegmentedControl,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void HMUI::SegmentedControl::remove_didSelectCellEvent(System::Action_2<HMUI::SegmentedControl,int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "remove_didSelectCellEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<HMUI::SegmentedControl,int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 HMUI::HMUI__SegmentedControl__IDataSource HMUI::SegmentedControl::get_dataSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "get_dataSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::HMUI__SegmentedControl__IDataSource, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::SegmentedControl::set_dataSource(HMUI::HMUI__SegmentedControl__IDataSource value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "set_dataSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__SegmentedControl__IDataSource>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t HMUI::SegmentedControl::get_selectedCellNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "get_selectedCellNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IReadOnlyList_1<HMUI::SegmentedControlCell> HMUI::SegmentedControl::get_cells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "get_cells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IReadOnlyList_1<HMUI::SegmentedControlCell>, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::SegmentedControl::CreateCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "CreateCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::SegmentedControl::HandleCellSelectionDidChange(HMUI::SelectableCell selectableCell, HMUI::HMUI__SelectableCell__TransitionType transitionType, ::bs_hook::Il2CppWrapperType changeOwner)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "HandleCellSelectionDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::SelectableCell>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::HMUI__SelectableCell__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selectableCell, transitionType, changeOwner);
}
 void HMUI::SegmentedControl::SetCallbackForCell(int32_t cellNumber, System::Action_1<int32_t> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "SetCallbackForCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cellNumber, callback);
}
 void HMUI::SegmentedControl::ReloadData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "ReloadData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void HMUI::SegmentedControl::SelectCellWithNumber(int32_t selectCellNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            "SelectCellWithNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, selectCellNumber);
}
// Ctor Parameters []
 HMUI::SegmentedControl::SegmentedControl()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<SegmentedControl>())) {}
 void HMUI::SegmentedControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::SegmentedControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
