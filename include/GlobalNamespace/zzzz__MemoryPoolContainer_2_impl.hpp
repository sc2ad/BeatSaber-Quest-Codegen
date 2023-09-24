#pragma once
#include "GlobalNamespace/zzzz__MemoryPoolContainer_2_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
constexpr void GlobalNamespace::MemoryPoolContainer_2<T0,T1>::__set__activeItems(GlobalNamespace::LazyCopyHashSet_1<T1> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LazyCopyHashSet_1<T1>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LazyCopyHashSet_1<T1>>(value));
}
constexpr GlobalNamespace::LazyCopyHashSet_1<T1> GlobalNamespace::MemoryPoolContainer_2<T0,T1>::__get__activeItems() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LazyCopyHashSet_1<T1>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MemoryPoolContainer_2<T0,T1>::__set__memoryPool(Zenject::IMemoryPool_1<T0> value)  {
::cordl_internals::setInstanceField<Zenject::IMemoryPool_1<T0>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::IMemoryPool_1<T0>>(value));
}
constexpr Zenject::IMemoryPool_1<T0> GlobalNamespace::MemoryPoolContainer_2<T0,T1>::__get__memoryPool() const {
return ::cordl_internals::getInstanceField<Zenject::IMemoryPool_1<T0>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<T1> GlobalNamespace::MemoryPoolContainer_2<T0,T1>::get_activeItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MemoryPoolContainer_2<T0,T1>>::get(),
                            "get_activeItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<T1>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::MemoryPoolContainer_2<T0,T1> GlobalNamespace::MemoryPoolContainer_2<T0,T1>::New_ctor(Zenject::IMemoryPool_1<T0> memoryPool)  {
GlobalNamespace::MemoryPoolContainer_2<T0,T1> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MemoryPoolContainer_2<T0,T1>>(memoryPool))};
return o;
}
 void GlobalNamespace::MemoryPoolContainer_2<T0,T1>::_ctor(Zenject::IMemoryPool_1<T0> memoryPool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MemoryPoolContainer_2<T0,T1>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IMemoryPool_1<T0>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, memoryPool);
}
 T0 GlobalNamespace::MemoryPoolContainer_2<T0,T1>::Spawn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MemoryPoolContainer_2<T0,T1>>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T0, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MemoryPoolContainer_2<T0,T1>::Despawn(T0 item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MemoryPoolContainer_2<T0,T1>>::get(),
                            "Despawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
