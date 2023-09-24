#pragma once
#include "GlobalNamespace/zzzz__ReferenceCountingCache_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__IReferenceCountingCache_2_def.hpp"
/// @brief Convert operator to GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>
constexpr  GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::operator GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>() const noexcept {
return GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::__set__items(System::Collections::Generic::Dictionary_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<TKey,TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<TKey,TValue>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<TKey,TValue> GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::__get__items() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<TKey,TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::__set__referencesCount(System::Collections::Generic::Dictionary_2<TKey,int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<TKey,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<TKey,int32_t>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<TKey,int32_t> GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::__get__referencesCount() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<TKey,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::Insert(TKey key, TValue item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, key, item);
}
 int32_t GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::AddReference(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>>::get(),
                            "AddReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, key);
}
 int32_t GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::RemoveReference(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>>::get(),
                            "RemoveReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, key);
}
 int32_t GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::GetReferenceCount(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>>::get(),
                            "GetReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, key);
}
 bool GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::TryGet(TKey key, ByRef<TValue> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>>::get(),
                            "TryGet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, result);
}
 void GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::LogError(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
 GlobalNamespace::ReferenceCountingCache_2<TKey,TValue> GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::New_ctor()  {
GlobalNamespace::ReferenceCountingCache_2<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>>())};
return o;
}
 void GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
/// @brief Convert operator to GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>
constexpr  GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::operator GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>() const noexcept {
return GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::__set__items(System::Collections::Generic::Dictionary_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<TKey,TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<TKey,TValue>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<TKey,TValue> GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::__get__items() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<TKey,TValue>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::__set__referencesCount(System::Collections::Generic::Dictionary_2<TKey,int32_t> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<TKey,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<TKey,int32_t>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<TKey,int32_t> GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::__get__referencesCount() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<TKey,int32_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::Insert(TKey key, TValue item)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>>::get(),
                            "Insert",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, key, item);
}
 int32_t GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::AddReference(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>>::get(),
                            "AddReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, key);
}
 int32_t GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::RemoveReference(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>>::get(),
                            "RemoveReference",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, key);
}
 int32_t GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::GetReferenceCount(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>>::get(),
                            "GetReferenceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, key);
}
 bool GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::TryGet(TKey key, ByRef<TValue> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>>::get(),
                            "TryGet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, key, result);
}
 void GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::LogError(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>>::get(),
                            "LogError",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
 GlobalNamespace::ReferenceCountingCache_2<TKey,TValue> GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::New_ctor()  {
GlobalNamespace::ReferenceCountingCache_2<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>>())};
return o;
}
 void GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ReferenceCountingCache_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
