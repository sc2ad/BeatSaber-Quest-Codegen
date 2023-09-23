#pragma once
#include "GlobalNamespace/zzzz__SortedList_2_impl.hpp"
#include "GlobalNamespace/zzzz__SortedList_1_def.hpp"
#include "GlobalNamespace/zzzz__ISortedListItemProcessor_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::SortedList_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SortedList_1::*)()>(&GlobalNamespace::SortedList_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SortedList_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SortedList_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SortedList_1::*)(GlobalNamespace::ISortedListItemProcessor_1<TBase>)>(&GlobalNamespace::SortedList_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SortedList_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ISortedListItemProcessor_1<TBase>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::SortedList_1::SortedList_1()  : GlobalNamespace::SortedList_2<TBase,TBase>(THROW_UNLESS(::il2cpp_utils::New<SortedList_1>())) {}
 void GlobalNamespace::SortedList_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SortedList_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "sortedListDataProcessor", ty: "GlobalNamespace::ISortedListItemProcessor_1<TBase>", modifiers: "", def_value: None }]
 GlobalNamespace::SortedList_1::SortedList_1(GlobalNamespace::ISortedListItemProcessor_1<TBase> sortedListDataProcessor)  : GlobalNamespace::SortedList_2<TBase,TBase>(THROW_UNLESS(::il2cpp_utils::New<SortedList_1>(sortedListDataProcessor))) {}
 void GlobalNamespace::SortedList_1::_ctor(GlobalNamespace::ISortedListItemProcessor_1<TBase> sortedListDataProcessor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SortedList_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ISortedListItemProcessor_1<TBase>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sortedListDataProcessor);
}
