#pragma once
#include "GlobalNamespace/zzzz__SortedList_2_impl.hpp"
#include "GlobalNamespace/zzzz__SortedList_1_def.hpp"
#include "GlobalNamespace/zzzz__ISortedListItemProcessor_1_def.hpp"
 GlobalNamespace::SortedList_1<TBase> GlobalNamespace::SortedList_1<TBase>::New_ctor()  {
GlobalNamespace::SortedList_1<TBase> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SortedList_1<TBase>>())};
return o;
}
 void GlobalNamespace::SortedList_1<TBase>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SortedList_1<TBase>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SortedList_1<TBase> GlobalNamespace::SortedList_1<TBase>::New_ctor(GlobalNamespace::ISortedListItemProcessor_1<TBase> sortedListDataProcessor)  {
GlobalNamespace::SortedList_1<TBase> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SortedList_1<TBase>>(sortedListDataProcessor))};
return o;
}
 void GlobalNamespace::SortedList_1<TBase>::_ctor(GlobalNamespace::ISortedListItemProcessor_1<TBase> sortedListDataProcessor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SortedList_1<TBase>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ISortedListItemProcessor_1<TBase>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sortedListDataProcessor);
}
