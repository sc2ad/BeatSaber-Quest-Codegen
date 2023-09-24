#pragma once
#include "GlobalNamespace/zzzz__HMCache_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
constexpr void GlobalNamespace::HMCache_2<K,V>::__set_itemWillBeRemovedFromCacheEvent(System::Action_1<V> value)  {
::cordl_internals::setInstanceField<System::Action_1<V>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<V>>(value));
}
constexpr System::Action_1<V> GlobalNamespace::HMCache_2<K,V>::__get_itemWillBeRemovedFromCacheEvent() const {
return ::cordl_internals::getInstanceField<System::Action_1<V>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HMCache_2<K,V>::__set__cache(System::Collections::Generic::Dictionary_2<K,V> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<K,V>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<K,V>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<K,V> GlobalNamespace::HMCache_2<K,V>::__get__cache() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<K,V>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HMCache_2<K,V>::__set__addedElements(System::Collections::Generic::Queue_1<K> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Queue_1<K>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Queue_1<K>>(value));
}
constexpr System::Collections::Generic::Queue_1<K> GlobalNamespace::HMCache_2<K,V>::__get__addedElements() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Queue_1<K>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::HMCache_2<K,V>::__set__maxNumberElements(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::HMCache_2<K,V>::__get__maxNumberElements() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::HMCache_2<K,V>::add_itemWillBeRemovedFromCacheEvent(System::Action_1<V> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMCache_2<K,V>>::get(),
                            "add_itemWillBeRemovedFromCacheEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<V>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void GlobalNamespace::HMCache_2<K,V>::remove_itemWillBeRemovedFromCacheEvent(System::Action_1<V> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMCache_2<K,V>>::get(),
                            "remove_itemWillBeRemovedFromCacheEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<V>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 GlobalNamespace::HMCache_2<K,V> GlobalNamespace::HMCache_2<K,V>::New_ctor(int32_t maxNumberElements)  {
GlobalNamespace::HMCache_2<K,V> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::HMCache_2<K,V>>(maxNumberElements))};
return o;
}
 void GlobalNamespace::HMCache_2<K,V>::_ctor(int32_t maxNumberElements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMCache_2<K,V>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, maxNumberElements);
}
 bool GlobalNamespace::HMCache_2<K,V>::IsInCache(K key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMCache_2<K,V>>::get(),
                            "IsInCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void GlobalNamespace::HMCache_2<K,V>::UpdateOrderInCache(K key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMCache_2<K,V>>::get(),
                            "UpdateOrderInCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
 V GlobalNamespace::HMCache_2<K,V>::GetFromCache(K key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMCache_2<K,V>>::get(),
                            "GetFromCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<V, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void GlobalNamespace::HMCache_2<K,V>::PutToCache(K key, V value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMCache_2<K,V>>::get(),
                            "PutToCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<V>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key, value);
}
 void GlobalNamespace::HMCache_2<K,V>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::HMCache_2<K,V>>::get(),
                            "Clear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
