#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBaseBase_1_impl.hpp"
#include "Zenject/zzzz__ArrayPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
constexpr void Zenject::ArrayPool_1<T>::__set__length(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Zenject::ArrayPool_1<T>::__get__length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void Zenject::ArrayPool_1<T>::__set__pools(System::Collections::Generic::Dictionary_2<int32_t,Zenject::ArrayPool_1<T>> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<int32_t,Zenject::ArrayPool_1<T>>, "_pools", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ArrayPool_1<T>>::get>(std::forward<System::Collections::Generic::Dictionary_2<int32_t,Zenject::ArrayPool_1<T>>>(value));
}
 System::Collections::Generic::Dictionary_2<int32_t,Zenject::ArrayPool_1<T>> Zenject::ArrayPool_1<T>::__get__pools()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<int32_t,Zenject::ArrayPool_1<T>>, "_pools", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ArrayPool_1<T>>::get>();
}
 Zenject::ArrayPool_1<T> Zenject::ArrayPool_1<T>::New_ctor(int32_t length)  {
Zenject::ArrayPool_1<T> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::ArrayPool_1<T>>(length))};
return o;
}
 void Zenject::ArrayPool_1<T>::_ctor(int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ArrayPool_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, length);
}
 void Zenject::ArrayPool_1<T>::OnDespawned(::ArrayW<T> arr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ArrayPool_1<T>>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, arr);
}
 ::ArrayW<T> Zenject::ArrayPool_1<T>::Spawn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ArrayPool_1<T>>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<T> Zenject::ArrayPool_1<T>::Alloc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ArrayPool_1<T>>::get(),
                            "Alloc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 Zenject::ArrayPool_1<T> Zenject::ArrayPool_1<T>::GetPool(int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::ArrayPool_1<T>>::get(),
                            "GetPool",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::ArrayPool_1<T>, false>(nullptr, ___internal_method, length);
}
