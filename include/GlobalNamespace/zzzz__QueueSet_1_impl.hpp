#pragma once
#include "GlobalNamespace/zzzz__QueueSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
constexpr void GlobalNamespace::QueueSet_1<T>::__set__linkedList(System::Collections::Generic::LinkedList_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::LinkedList_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::LinkedList_1<T>>(value));
}
constexpr System::Collections::Generic::LinkedList_1<T> GlobalNamespace::QueueSet_1<T>::__get__linkedList() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::LinkedList_1<T>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::QueueSet_1<T>::__set__set(System::Collections::Generic::HashSet_1<T> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<T>>(value));
}
constexpr System::Collections::Generic::HashSet_1<T> GlobalNamespace::QueueSet_1<T>::__get__set() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<T>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t GlobalNamespace::QueueSet_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QueueSet_1<T>>::get(),
                            "get_Count",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::QueueSet_1<T>::Enqueue(T item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QueueSet_1<T>>::get(),
                            "Enqueue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, item);
}
 T GlobalNamespace::QueueSet_1<T>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QueueSet_1<T>>::get(),
                            "Dequeue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::QueueSet_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QueueSet_1<T>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::QueueSet_1<T> GlobalNamespace::QueueSet_1<T>::New_ctor()  {
GlobalNamespace::QueueSet_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::QueueSet_1<T>>())};
return o;
}
 void GlobalNamespace::QueueSet_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::QueueSet_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
