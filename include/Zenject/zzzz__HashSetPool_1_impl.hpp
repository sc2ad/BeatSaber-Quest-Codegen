#pragma once
#include "Zenject/zzzz__StaticMemoryPool_1_impl.hpp"
#include "Zenject/zzzz__HashSetPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
 void Zenject::HashSetPool_1<T>::__set__instance(Zenject::HashSetPool_1<T> value)  {
::cordl_internals::setStaticField<Zenject::HashSetPool_1<T>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::HashSetPool_1<T>>::get>(std::forward<Zenject::HashSetPool_1<T>>(value));
}
 Zenject::HashSetPool_1<T> Zenject::HashSetPool_1<T>::__get__instance()  {
return ::cordl_internals::getStaticField<Zenject::HashSetPool_1<T>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::HashSetPool_1<T>>::get>();
}
 Zenject::HashSetPool_1<T> Zenject::HashSetPool_1<T>::New_ctor()  {
Zenject::HashSetPool_1<T> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::HashSetPool_1<T>>())};
return o;
}
 void Zenject::HashSetPool_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::HashSetPool_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::HashSetPool_1<T> Zenject::HashSetPool_1<T>::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::HashSetPool_1<T>>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::HashSetPool_1<T>, false>(nullptr, ___internal_method);
}
 void Zenject::HashSetPool_1<T>::OnSpawned(System::Collections::Generic::HashSet_1<T> items)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::HashSetPool_1<T>>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, items);
}
 void Zenject::HashSetPool_1<T>::OnDespawned(System::Collections::Generic::HashSet_1<T> items)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::HashSetPool_1<T>>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::HashSet_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, items);
}
