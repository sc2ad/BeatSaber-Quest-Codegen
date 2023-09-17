#pragma once
namespace {
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ConvertUtils_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DefaultSerializationBinder_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ThreadSafeStore_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::ThreadSafeStore_2::*)(::System::Func_2<TKey,TValue>)>(&::Newtonsoft::Json::Utilities::ThreadSafeStore_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TKey,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ThreadSafeStore_2.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (::Newtonsoft::Json::Utilities::ThreadSafeStore_2::*)(TKey)>(&::Newtonsoft::Json::Utilities::ThreadSafeStore_2::Get)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ThreadSafeStore_2.AddValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (::Newtonsoft::Json::Utilities::ThreadSafeStore_2::*)(TKey)>(&::Newtonsoft::Json::Utilities::ThreadSafeStore_2::AddValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__set__lock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__get__lock() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__set__store(::System::Collections::Generic::Dictionary_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<TKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<TKey,TValue>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue> ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__get__store() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<TKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__set__creator(::System::Func_2<TKey,TValue> value)  {
::cordl_internals::setInstanceField<::System::Func_2<TKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<TKey,TValue>>(value));
}
constexpr ::System::Func_2<TKey,TValue> ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__get__creator() const {
return ::cordl_internals::getInstanceField<::System::Func_2<TKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "creator", ty: "::System::Func_2<TKey,TValue>", modifiers: "", def_value: None }]
 ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::ThreadSafeStore_2(::System::Func_2<TKey,TValue> creator)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ThreadSafeStore_2>(creator))) {}
 void ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::_ctor(::System::Func_2<TKey,TValue> creator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, creator);
}
 TValue ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::Get(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
 TValue ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::AddValue(TKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ThreadSafeStore_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::ThreadSafeStore_2::*)(::System::Func_2<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>)>(&::Newtonsoft::Json::Utilities::ThreadSafeStore_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ThreadSafeStore_2.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (::Newtonsoft::Json::Utilities::ThreadSafeStore_2::*)(::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey)>(&::Newtonsoft::Json::Utilities::ThreadSafeStore_2::Get)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ThreadSafeStore_2.AddValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (::Newtonsoft::Json::Utilities::ThreadSafeStore_2::*)(::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey)>(&::Newtonsoft::Json::Utilities::ThreadSafeStore_2::AddValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__set__lock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__get__lock() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__set__store(::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__get__store() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__set__creator(::System::Func_2<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> value)  {
::cordl_internals::setInstanceField<::System::Func_2<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>>(value));
}
constexpr ::System::Func_2<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__get__creator() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "creator", ty: "::System::Func_2<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>", modifiers: "", def_value: None }]
 ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::ThreadSafeStore_2(::System::Func_2<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> creator)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ThreadSafeStore_2>(creator))) {}
 void ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::_ctor(::System::Func_2<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue> creator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, creator);
}
 TValue ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::Get(::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
 TValue ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::AddValue(::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Utilities::____Newtonsoft__Json__Utilities__ConvertUtils__TypeConvertKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ThreadSafeStore_2._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Utilities::ThreadSafeStore_2::*)(::System::Func_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>)>(&::Newtonsoft::Json::Utilities::ThreadSafeStore_2::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ThreadSafeStore_2.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (::Newtonsoft::Json::Utilities::ThreadSafeStore_2::*)(::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey)>(&::Newtonsoft::Json::Utilities::ThreadSafeStore_2::Get)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::ThreadSafeStore_2.AddValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TValue (::Newtonsoft::Json::Utilities::ThreadSafeStore_2::*)(::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey)>(&::Newtonsoft::Json::Utilities::ThreadSafeStore_2::AddValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__set__lock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__get__lock() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__set__store(::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__get__store() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__set__creator(::System::Func_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> value)  {
::cordl_internals::setInstanceField<::System::Func_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>>(value));
}
constexpr ::System::Func_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::__get__creator() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "creator", ty: "::System::Func_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>", modifiers: "", def_value: None }]
 ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::ThreadSafeStore_2(::System::Func_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> creator)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ThreadSafeStore_2>(creator))) {}
 void ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::_ctor(::System::Func_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue> creator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,TValue>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, creator);
}
 TValue ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::Get(::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
 TValue ::Newtonsoft::Json::Utilities::ThreadSafeStore_2::AddValue(::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Utilities::ThreadSafeStore_2>::get(),
                            "AddValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue, false>(const_cast<void*>(instance), ___internal_method, key);
}
} // end anonymous namespace
