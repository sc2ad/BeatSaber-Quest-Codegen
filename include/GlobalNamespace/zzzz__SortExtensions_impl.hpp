#pragma once
#include "GlobalNamespace/zzzz__SortExtensions_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
 void GlobalNamespace::SortExtensions::InsertSorted(System::Collections::Generic::List_1<T> list, T item, System::Func_2<T,int32_t> getSortIndex)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SortExtensions>::get(),
                        "InsertSorted",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<T,int32_t>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, list, item, getSortIndex);
}
template<typename T>
 void GlobalNamespace::SortExtensions::Sort(System::Collections::Generic::List_1<T> list, System::Func_2<T,int32_t> getSortIndex)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SortExtensions>::get(),
                        "Sort",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::List_1<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<T,int32_t>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, list, getSortIndex);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SortExtensions____c__DisplayClass1_0_1._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SortExtensions____c__DisplayClass1_0_1::*)()>(&GlobalNamespace::GlobalNamespace__SortExtensions____c__DisplayClass1_0_1::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SortExtensions____c__DisplayClass1_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SortExtensions____c__DisplayClass1_0_1._Sort_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::GlobalNamespace__SortExtensions____c__DisplayClass1_0_1::*)(T, T)>(&GlobalNamespace::GlobalNamespace__SortExtensions____c__DisplayClass1_0_1::_Sort_b__0)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SortExtensions____c__DisplayClass1_0_1>::get(),
                            "<Sort>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__SortExtensions____c__DisplayClass1_0_1::__set_getSortIndex(System::Func_2<T,int32_t> value)  {
::cordl_internals::setInstanceField<System::Func_2<T,int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<T,int32_t>>(value));
}
constexpr System::Func_2<T,int32_t> GlobalNamespace::GlobalNamespace__SortExtensions____c__DisplayClass1_0_1::__get_getSortIndex() const {
return ::cordl_internals::getInstanceField<System::Func_2<T,int32_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__SortExtensions____c__DisplayClass1_0_1::GlobalNamespace__SortExtensions____c__DisplayClass1_0_1()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__SortExtensions____c__DisplayClass1_0_1>())) {}
 void GlobalNamespace::GlobalNamespace__SortExtensions____c__DisplayClass1_0_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SortExtensions____c__DisplayClass1_0_1>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t GlobalNamespace::GlobalNamespace__SortExtensions____c__DisplayClass1_0_1::_Sort_b__0(T a, T b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SortExtensions____c__DisplayClass1_0_1>::get(),
                            "<Sort>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, a, b);
}
