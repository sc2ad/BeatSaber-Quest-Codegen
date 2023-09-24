#pragma once
#include "Zenject/zzzz__MemoryPool_6_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_6_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
constexpr void Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::__set__originalParent(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::__get__originalParent() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::New_ctor()  {
Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>>())};
return o;
}
 void Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::OnCreated(TValue item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>>::get(),
                            "OnCreated",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::OnDestroyed(TValue item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>>::get(),
                            "OnDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::OnSpawned(TValue item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>>::get(),
                            "OnSpawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 void Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::OnDespawned(TValue item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>>::get(),
                            "OnDespawned",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 ::bs_hook::Il2CppWrapperType Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::__zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>>::get(),
                            "__zenCreate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::bs_hook::Il2CppWrapperType>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method, P_0);
}
 Zenject::InjectTypeInfo Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::MonoMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Zenject::InjectTypeInfo, false>(nullptr, ___internal_method);
}
