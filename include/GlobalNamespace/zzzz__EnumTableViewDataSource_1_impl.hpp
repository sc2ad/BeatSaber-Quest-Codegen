#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnumTableViewDataSource_1_def.hpp"
#include "GlobalNamespace/zzzz__TextOnlyTableCell_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
/// @brief Convert operator to HMUI::HMUI__TableView__IDataSource
constexpr  GlobalNamespace::EnumTableViewDataSource_1<T>::operator HMUI::HMUI__TableView__IDataSource() const noexcept {
return HMUI::HMUI__TableView__IDataSource(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EnumTableViewDataSource_1<T>::__set__cellPrefab(GlobalNamespace::TextOnlyTableCell value)  {
::cordl_internals::setInstanceField<GlobalNamespace::TextOnlyTableCell, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::TextOnlyTableCell>(value));
}
constexpr GlobalNamespace::TextOnlyTableCell GlobalNamespace::EnumTableViewDataSource_1<T>::__get__cellPrefab() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::TextOnlyTableCell, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EnumTableViewDataSource_1<T>::__set__cellHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::EnumTableViewDataSource_1<T>::__get__cellHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EnumTableViewDataSource_1<T>::__set__values(::ArrayW<T> value)  {
::cordl_internals::setInstanceField<::ArrayW<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<T>>(value));
}
constexpr ::ArrayW<T> GlobalNamespace::EnumTableViewDataSource_1<T>::__get__values() const {
return ::cordl_internals::getInstanceField<::ArrayW<T>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t GlobalNamespace::EnumTableViewDataSource_1<T>::CellSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnumTableViewDataSource_1<T>>::get(),
                            "CellSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::EnumTableViewDataSource_1<T>::NumberOfCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnumTableViewDataSource_1<T>>::get(),
                            "NumberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 HMUI::TableCell GlobalNamespace::EnumTableViewDataSource_1<T>::CellForIdx(HMUI::TableView tableView, int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnumTableViewDataSource_1<T>>::get(),
                            "CellForIdx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::TableView>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::TableCell, false>(const_cast<void*>(instance), ___internal_method, tableView, idx);
}
 int32_t GlobalNamespace::EnumTableViewDataSource_1<T>::GetIdForValue(T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnumTableViewDataSource_1<T>>::get(),
                            "GetIdForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW GlobalNamespace::EnumTableViewDataSource_1<T>::GetLabelForId(int32_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnumTableViewDataSource_1<T>>::get(),
                            "GetLabelForId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, id);
}
 T GlobalNamespace::EnumTableViewDataSource_1<T>::GetValueForId(int32_t id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnumTableViewDataSource_1<T>>::get(),
                            "GetValueForId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, id);
}
 ::StringW GlobalNamespace::EnumTableViewDataSource_1<T>::GetLabelForValue(T value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnumTableViewDataSource_1<T>>::get(),
                            "GetLabelForValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::EnumTableViewDataSource_1<T> GlobalNamespace::EnumTableViewDataSource_1<T>::New_ctor()  {
GlobalNamespace::EnumTableViewDataSource_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::EnumTableViewDataSource_1<T>>())};
return o;
}
 void GlobalNamespace::EnumTableViewDataSource_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnumTableViewDataSource_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
