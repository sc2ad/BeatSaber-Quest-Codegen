#pragma once
#include "HMUI/zzzz__ITableCellOwner_def.hpp"
#include "HMUI/zzzz__TableViewSelectionType_def.hpp"
//  Writing Method size for method: HMUI::ITableCellOwner.get_selectionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<HMUI::TableViewSelectionType (HMUI::ITableCellOwner::*)()>(&HMUI::ITableCellOwner::get_selectionType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::ITableCellOwner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ITableCellOwner>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ITableCellOwner.get_canSelectSelectedCell
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::ITableCellOwner::*)()>(&HMUI::ITableCellOwner::get_canSelectSelectedCell)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::ITableCellOwner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ITableCellOwner>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: HMUI::ITableCellOwner.get_numberOfCells
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (HMUI::ITableCellOwner::*)()>(&HMUI::ITableCellOwner::get_numberOfCells)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(HMUI::ITableCellOwner),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ITableCellOwner>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 HMUI::TableViewSelectionType HMUI::ITableCellOwner::get_selectionType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ITableCellOwner>::get(),
                            "get_selectionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<HMUI::TableViewSelectionType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool HMUI::ITableCellOwner::get_canSelectSelectedCell()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ITableCellOwner>::get(),
                            "get_canSelectSelectedCell",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t HMUI::ITableCellOwner::get_numberOfCells()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HMUI::ITableCellOwner>::get(),
                            "get_numberOfCells",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
