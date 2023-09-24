#pragma once
#include "Zenject/zzzz__KeyedFactoryBase_2_impl.hpp"
#include "Zenject/zzzz__KeyedFactory_4_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
 System::Collections::Generic::IEnumerable_1<System::Type> Zenject::KeyedFactory_4<TBase,TKey,TParam1,TParam2>::get_ProvidedTypes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::KeyedFactory_4<TBase,TKey,TParam1,TParam2>>::get(),
                            "get_ProvidedTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<System::Type>, false>(const_cast<void*>(instance), ___internal_method);
}
 TBase Zenject::KeyedFactory_4<TBase,TKey,TParam1,TParam2>::Create(TKey key, TParam1 param1, TParam2 param2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::KeyedFactory_4<TBase,TKey,TParam1,TParam2>>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TBase, false>(const_cast<void*>(instance), ___internal_method, key, param1, param2);
}
 Zenject::KeyedFactory_4<TBase,TKey,TParam1,TParam2> Zenject::KeyedFactory_4<TBase,TKey,TParam1,TParam2>::New_ctor()  {
Zenject::KeyedFactory_4<TBase,TKey,TParam1,TParam2> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::KeyedFactory_4<TBase,TKey,TParam1,TParam2>>())};
return o;
}
 void Zenject::KeyedFactory_4<TBase,TKey,TParam1,TParam2>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::KeyedFactory_4<TBase,TKey,TParam1,TParam2>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType Zenject::KeyedFactory_4<TBase,TKey,TParam1,TParam2>::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::KeyedFactory_4<TBase,TKey,TParam1,TParam2>>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::KeyedFactory_4<TBase,TKey,TParam1,TParam2>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::KeyedFactory_4<TBase,TKey,TParam1,TParam2>>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
