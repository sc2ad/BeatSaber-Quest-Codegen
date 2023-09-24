#pragma once
#include "Zenject/zzzz__StaticMemoryPoolBaseBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBase_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
 Zenject::StaticMemoryPoolBase_1<TValue> Zenject::StaticMemoryPoolBase_1<TValue>::New_ctor(System::Action_1<TValue> onDespawnedMethod)  {
Zenject::StaticMemoryPoolBase_1<TValue> o{THROW_UNLESS(::il2cpp_utils::New<Zenject::StaticMemoryPoolBase_1<TValue>>(onDespawnedMethod))};
return o;
}
 void Zenject::StaticMemoryPoolBase_1<TValue>::_ctor(System::Action_1<TValue> onDespawnedMethod)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPoolBase_1<TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, onDespawnedMethod);
}
 TValue Zenject::StaticMemoryPoolBase_1<TValue>::Alloc()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::StaticMemoryPoolBase_1<TValue>>::get(),
                            "Alloc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method);
}
