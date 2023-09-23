#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "GlobalNamespace/zzzz__TableCellWithSeparator_def.hpp"
#include "HMUI/zzzz__ITableCellOwner_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: GlobalNamespace::TableCellWithSeparator.TableViewSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TableCellWithSeparator::*)(HMUI::ITableCellOwner, int32_t)>(&GlobalNamespace::TableCellWithSeparator::TableViewSetup)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1fa3804;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::TableCellWithSeparator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TableCellWithSeparator>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::TableCellWithSeparator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TableCellWithSeparator::*)()>(&GlobalNamespace::TableCellWithSeparator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1fa38e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TableCellWithSeparator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TableCellWithSeparator::__set__separator(UnityEngine::GameObject value)  {
::cordl_internals::setInstanceField<UnityEngine::GameObject, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::GameObject>(value));
}
constexpr UnityEngine::GameObject GlobalNamespace::TableCellWithSeparator::__get__separator() const {
return ::cordl_internals::getInstanceField<UnityEngine::GameObject, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::TableCellWithSeparator::TableViewSetup(HMUI::ITableCellOwner tableCellOwner, int32_t idx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TableCellWithSeparator>::get(),
                            "TableViewSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HMUI::ITableCellOwner>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tableCellOwner, idx);
}
// Ctor Parameters []
 GlobalNamespace::TableCellWithSeparator::TableCellWithSeparator()  : HMUI::TableCell(THROW_UNLESS(::il2cpp_utils::New<TableCellWithSeparator>())) {}
 void GlobalNamespace::TableCellWithSeparator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::TableCellWithSeparator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
