#pragma once
#include "GlobalNamespace/zzzz__AsyncCache_2_def.hpp"
#include "GlobalNamespace/zzzz__AsyncCache_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
constexpr void GlobalNamespace::GlobalNamespace__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>::__set_toAdd(TKey value)  {
::cordl_internals::setInstanceField<TKey, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<TKey>(value));
}
constexpr TKey GlobalNamespace::GlobalNamespace__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>::__get_toAdd() const {
return ::cordl_internals::getInstanceField<TKey, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>::__set___4__this(GlobalNamespace::AsyncCache_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::AsyncCache_2<TKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::AsyncCache_2<TKey,TValue>>(value));
}
constexpr GlobalNamespace::AsyncCache_2<TKey,TValue> GlobalNamespace::GlobalNamespace__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::AsyncCache_2<TKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__AsyncCache_2____c__DisplayClass4_0<TKey,TValue> GlobalNamespace::GlobalNamespace__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>::New_ctor()  {
GlobalNamespace::GlobalNamespace__AsyncCache_2____c__DisplayClass4_0<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<TValue> GlobalNamespace::GlobalNamespace__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>::_get_Item_b__1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>>::get(),
                            "<get_Item>b__1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TValue>, false>(const_cast<void*>(instance), ___internal_method);
}
constexpr void GlobalNamespace::AsyncCache_2<TKey,TValue>::__set__valueFactory(System::Func_2<TKey,System::Threading::Tasks::Task_1<TValue>> value)  {
::cordl_internals::setInstanceField<System::Func_2<TKey,System::Threading::Tasks::Task_1<TValue>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TKey,System::Threading::Tasks::Task_1<TValue>>>(value));
}
constexpr System::Func_2<TKey,System::Threading::Tasks::Task_1<TValue>> GlobalNamespace::AsyncCache_2<TKey,TValue>::__get__valueFactory() const {
return ::cordl_internals::getInstanceField<System::Func_2<TKey,System::Threading::Tasks::Task_1<TValue>>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AsyncCache_2<TKey,TValue>::__set__map(System::Collections::Concurrent::ConcurrentDictionary_2<TKey,System::Lazy_1<System::Threading::Tasks::Task_1<TValue>>> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::ConcurrentDictionary_2<TKey,System::Lazy_1<System::Threading::Tasks::Task_1<TValue>>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::ConcurrentDictionary_2<TKey,System::Lazy_1<System::Threading::Tasks::Task_1<TValue>>>>(value));
}
constexpr System::Collections::Concurrent::ConcurrentDictionary_2<TKey,System::Lazy_1<System::Threading::Tasks::Task_1<TValue>>> GlobalNamespace::AsyncCache_2<TKey,TValue>::__get__map() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::ConcurrentDictionary_2<TKey,System::Lazy_1<System::Threading::Tasks::Task_1<TValue>>>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::AsyncCache_2<TKey,TValue> GlobalNamespace::AsyncCache_2<TKey,TValue>::New_ctor(System::Func_2<TKey,System::Threading::Tasks::Task_1<TValue>> valueFactory)  {
GlobalNamespace::AsyncCache_2<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::AsyncCache_2<TKey,TValue>>(valueFactory))};
return o;
}
 void GlobalNamespace::AsyncCache_2<TKey,TValue>::_ctor(System::Func_2<TKey,System::Threading::Tasks::Task_1<TValue>> valueFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncCache_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TKey,System::Threading::Tasks::Task_1<TValue>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, valueFactory);
}
 System::Threading::Tasks::Task_1<TValue> GlobalNamespace::AsyncCache_2<TKey,TValue>::get_Item(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncCache_2<TKey,TValue>>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<TValue>, false>(const_cast<void*>(instance), ___internal_method, key);
}
 void GlobalNamespace::AsyncCache_2<TKey,TValue>::RemoveKey(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncCache_2<TKey,TValue>>::get(),
                            "RemoveKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, key);
}
 System::Lazy_1<System::Threading::Tasks::Task_1<TValue>> GlobalNamespace::AsyncCache_2<TKey,TValue>::_get_Item_b__4_0(TKey toAdd)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncCache_2<TKey,TValue>>::get(),
                            "<get_Item>b__4_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Lazy_1<System::Threading::Tasks::Task_1<TValue>>, false>(const_cast<void*>(instance), ___internal_method, toAdd);
}
