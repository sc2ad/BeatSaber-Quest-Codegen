#pragma once
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
constexpr void GlobalNamespace::MemoryPoolContainer_1<T>::__set__activeItems(GlobalNamespace::LazyCopyHashSet_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LazyCopyHashSet_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LazyCopyHashSet_1<T>>(value));
}
constexpr GlobalNamespace::LazyCopyHashSet_1<T> GlobalNamespace::MemoryPoolContainer_1<T>::__get__activeItems() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LazyCopyHashSet_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MemoryPoolContainer_1<T>::__set__memoryPool(Zenject::IMemoryPool_1<T> value)  {
::cordl_internals::setInstanceField<Zenject::IMemoryPool_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Zenject::IMemoryPool_1<T>>(value));
}
constexpr Zenject::IMemoryPool_1<T> GlobalNamespace::MemoryPoolContainer_1<T>::__get__memoryPool() const {
return ::cordl_internals::getInstanceField<Zenject::IMemoryPool_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::List_1<T> GlobalNamespace::MemoryPoolContainer_1<T>::get_activeItems()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MemoryPoolContainer_1<T>>::get(),
                            "get_activeItems",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::MemoryPoolContainer_1<T> GlobalNamespace::MemoryPoolContainer_1<T>::New_ctor(Zenject::IMemoryPool_1<T> memoryPool)  {
GlobalNamespace::MemoryPoolContainer_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::MemoryPoolContainer_1<T>>(memoryPool))};
return o;
}
 void GlobalNamespace::MemoryPoolContainer_1<T>::_ctor(Zenject::IMemoryPool_1<T> memoryPool)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MemoryPoolContainer_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Zenject::IMemoryPool_1<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, memoryPool);
}
 T GlobalNamespace::MemoryPoolContainer_1<T>::Spawn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MemoryPoolContainer_1<T>>::get(),
                            "Spawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MemoryPoolContainer_1<T>::Despawn(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MemoryPoolContainer_1<T>>::get(),
                            "Despawn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
