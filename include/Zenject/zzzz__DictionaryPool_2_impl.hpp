#pragma once
#include "Zenject/zzzz__StaticMemoryPool_1_impl.hpp"
#include "Zenject/zzzz__DictionaryPool_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
 void Zenject::DictionaryPool_2<TKey,TValue>::__set__instance(Zenject::DictionaryPool_2<TKey,TValue> value)  {
::cordl_internals::setStaticField<Zenject::DictionaryPool_2<TKey,TValue>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DictionaryPool_2<TKey,TValue>>::get>(std::forward<Zenject::DictionaryPool_2<TKey,TValue>>(value));
}
 Zenject::DictionaryPool_2<TKey,TValue> Zenject::DictionaryPool_2<TKey,TValue>::__get__instance()  {
return ::cordl_internals::getStaticField<Zenject::DictionaryPool_2<TKey,TValue>, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DictionaryPool_2<TKey,TValue>>::get>();
}
 Zenject::DictionaryPool_2<TKey,TValue> Zenject::DictionaryPool_2<TKey,TValue>::New_ctor()  {
Zenject::DictionaryPool_2<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::DictionaryPool_2<TKey,TValue>>())};
return o;
}
 void Zenject::DictionaryPool_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DictionaryPool_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::DictionaryPool_2<TKey,TValue> Zenject::DictionaryPool_2<TKey,TValue>::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DictionaryPool_2<TKey,TValue>>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::DictionaryPool_2<TKey,TValue>, false>(nullptr, ___internal_method);
}
 void Zenject::DictionaryPool_2<TKey,TValue>::OnSpawned(System::Collections::Generic::Dictionary_2<TKey,TValue> items)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DictionaryPool_2<TKey,TValue>>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, items);
}
 void Zenject::DictionaryPool_2<TKey,TValue>::OnDespawned(System::Collections::Generic::Dictionary_2<TKey,TValue> items)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::DictionaryPool_2<TKey,TValue>>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Collections::Generic::Dictionary_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, items);
}
