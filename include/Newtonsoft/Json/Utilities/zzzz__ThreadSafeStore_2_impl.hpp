#pragma once
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DefaultSerializationBinder_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ConvertUtils_def.hpp"
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::__set__lock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::__get__lock() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::__set__store(System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::__get__store() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::__set__creator(System::Func_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> value)  {
::cordl_internals::setInstanceField<System::Func_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>>(value));
}
constexpr System::Func_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::__get__creator() const {
return ::cordl_internals::getInstanceField<System::Func_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::New_ctor(System::Func_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> creator)  {
Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>>(creator))};
return o;
}
 void Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::_ctor(System::Func_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> creator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, creator);
}
 TValue Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::Get(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
 TValue Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>::AddValue(Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Serialization::Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::__set__lock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::__get__lock() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::__set__store(System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::__get__store() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::__set__creator(System::Func_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> value)  {
::cordl_internals::setInstanceField<System::Func_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>>(value));
}
constexpr System::Func_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::__get__creator() const {
return ::cordl_internals::getInstanceField<System::Func_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::New_ctor(System::Func_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> creator)  {
Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>>(creator))};
return o;
}
 void Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::_ctor(System::Func_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> creator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, creator);
}
 TValue Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::Get(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
 TValue Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>::AddValue(Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::ThreadSafeStore_2<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Newtonsoft::Json::Utilities::Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__set__lock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__get__lock() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__set__store(System::Collections::Generic::Dictionary_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::Dictionary_2<TKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::Dictionary_2<TKey,TValue>>(value));
}
constexpr System::Collections::Generic::Dictionary_2<TKey,TValue> Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__get__store() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::Dictionary_2<TKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__set__creator(System::Func_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<System::Func_2<TKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Func_2<TKey,TValue>>(value));
}
constexpr System::Func_2<TKey,TValue> Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::__get__creator() const {
return ::cordl_internals::getInstanceField<System::Func_2<TKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue> Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::New_ctor(System::Func_2<TKey,TValue> creator)  {
Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue> o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>>(creator))};
return o;
}
 void Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::_ctor(System::Func_2<TKey,TValue> creator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Func_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, creator);
}
 TValue Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::Get(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
 TValue Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>::AddValue(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Utilities::ThreadSafeStore_2<TKey,TValue>>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
