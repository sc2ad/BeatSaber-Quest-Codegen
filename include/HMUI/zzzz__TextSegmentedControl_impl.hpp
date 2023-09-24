#pragma once
#include "HMUI/zzzz__SegmentedControl_impl.hpp"
#include "HMUI/zzzz__TextSegmentedControl_def.hpp"
#include "HMUI/zzzz__TextSegmentedControlCell_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
//  Writing Method size for method: HMUI::TextSegmentedControl.SetTexts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSegmentedControl::*)(System::Collections::Generic::IReadOnlyList_1<::StringW>)>(&HMUI::TextSegmentedControl::SetTexts)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1fad158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::TextSegmentedControl>::get(),
                            "SetTexts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::TextSegmentedControl.NumberOfCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HMUI::TextSegmentedControl::*)()>(&HMUI::TextSegmentedControl::NumberOfCells)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1fad170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::TextSegmentedControl>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::TextSegmentedControl.CellForCellNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::SegmentedControlCell (HMUI::TextSegmentedControl::*)(int32_t)>(&HMUI::TextSegmentedControl::CellForCellNumber)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x1fad21c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::TextSegmentedControl>::get(),
                            "CellForCellNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::TextSegmentedControl.InstantiateCell
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TextSegmentedControlCell (HMUI::TextSegmentedControl::*)(UnityEngine::Object)>(&HMUI::TextSegmentedControl::InstantiateCell)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1fad4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::TextSegmentedControl>::get(),
                            "InstantiateCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::TextSegmentedControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSegmentedControl::*)()>(&HMUI::TextSegmentedControl::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1fad6b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::TextSegmentedControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HMUI::HMUI__SegmentedControl__IDataSource
constexpr  HMUI::TextSegmentedControl::operator HMUI::HMUI__SegmentedControl__IDataSource() const noexcept {
return HMUI::HMUI__SegmentedControl__IDataSource(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::TextSegmentedControl::__set__fontSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t HMUI::TextSegmentedControl::__get__fontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::TextSegmentedControl::__set__overrideCellSize(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HMUI::TextSegmentedControl::__get__overrideCellSize() const {
return ::cordl_internals::getInstanceField<bool, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::TextSegmentedControl::__set__padding(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t HMUI::TextSegmentedControl::__get__padding() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::TextSegmentedControl::__set__hideCellBackground(bool value)  {
::cordl_internals::setInstanceField<bool, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HMUI::TextSegmentedControl::__get__hideCellBackground() const {
return ::cordl_internals::getInstanceField<bool, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::TextSegmentedControl::__set__firstCellPrefab(HMUI::TextSegmentedControlCell value)  {
::cordl_internals::setInstanceField<HMUI::TextSegmentedControlCell, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::TextSegmentedControlCell>(value));
}
constexpr HMUI::TextSegmentedControlCell HMUI::TextSegmentedControl::__get__firstCellPrefab() const {
return ::cordl_internals::getInstanceField<HMUI::TextSegmentedControlCell, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::TextSegmentedControl::__set__lastCellPrefab(HMUI::TextSegmentedControlCell value)  {
::cordl_internals::setInstanceField<HMUI::TextSegmentedControlCell, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::TextSegmentedControlCell>(value));
}
constexpr HMUI::TextSegmentedControlCell HMUI::TextSegmentedControl::__get__lastCellPrefab() const {
return ::cordl_internals::getInstanceField<HMUI::TextSegmentedControlCell, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::TextSegmentedControl::__set__singleCellPrefab(HMUI::TextSegmentedControlCell value)  {
::cordl_internals::setInstanceField<HMUI::TextSegmentedControlCell, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::TextSegmentedControlCell>(value));
}
constexpr HMUI::TextSegmentedControlCell HMUI::TextSegmentedControl::__get__singleCellPrefab() const {
return ::cordl_internals::getInstanceField<HMUI::TextSegmentedControlCell, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::TextSegmentedControl::__set__middleCellPrefab(HMUI::TextSegmentedControlCell value)  {
::cordl_internals::setInstanceField<HMUI::TextSegmentedControlCell, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HMUI::TextSegmentedControlCell>(value));
}
constexpr HMUI::TextSegmentedControlCell HMUI::TextSegmentedControl::__get__middleCellPrefab() const {
return ::cordl_internals::getInstanceField<HMUI::TextSegmentedControlCell, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::TextSegmentedControl::__set__container(Zenject::DiContainer value)  {
::cordl_internals::setInstanceField<Zenject::DiContainer, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::DiContainer>(value));
}
constexpr Zenject::DiContainer HMUI::TextSegmentedControl::__get__container() const {
return ::cordl_internals::getInstanceField<Zenject::DiContainer, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HMUI::TextSegmentedControl::__set__texts(System::Collections::Generic::IReadOnlyList_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IReadOnlyList_1<::StringW>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IReadOnlyList_1<::StringW>>(value));
}
constexpr System::Collections::Generic::IReadOnlyList_1<::StringW> HMUI::TextSegmentedControl::__get__texts() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IReadOnlyList_1<::StringW>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void HMUI::TextSegmentedControl::SetTexts(System::Collections::Generic::IReadOnlyList_1<::StringW> texts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::TextSegmentedControl>::get(),
                            "SetTexts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::IReadOnlyList_1<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, texts);
}
 int32_t HMUI::TextSegmentedControl::NumberOfCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::TextSegmentedControl>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 HMUI::SegmentedControlCell HMUI::TextSegmentedControl::CellForCellNumber(int32_t cellNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::TextSegmentedControl>::get(),
                            "CellForCellNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::SegmentedControlCell, false>(const_cast<void*>(instance), ___internal_method, cellNumber);
}
 HMUI::TextSegmentedControlCell HMUI::TextSegmentedControl::InstantiateCell(UnityEngine::Object prefab)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::TextSegmentedControl>::get(),
                            "InstantiateCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::TextSegmentedControlCell, false>(const_cast<void*>(instance), ___internal_method, prefab);
}
 HMUI::TextSegmentedControl HMUI::TextSegmentedControl::New_ctor()  {
HMUI::TextSegmentedControl o{THROW_UNLESS(::il2cpp_utils::New<HMUI::TextSegmentedControl>())};
return o;
}
 void HMUI::TextSegmentedControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::TextSegmentedControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
