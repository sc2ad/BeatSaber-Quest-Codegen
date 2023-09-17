#pragma once
#include "System/Runtime/Serialization/zzzz__SerializationBinder_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "Newtonsoft/Json/Serialization/zzzz__DefaultSerializationBinder_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::*)(::StringW, ::StringW)>(&::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24ff62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::*)()>(&::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24ff75c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::*)(::bs_hook::Il2CppWrapperType)>(&::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x24ff7ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::*)(::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey)>(&::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::Equals)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x24ff824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "AssemblyName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "TypeName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey(::StringW AssemblyName, ::StringW TypeName) noexcept : ::bs_hook::ValueTypeWrapper() {this->AssemblyName = AssemblyName;
this->TypeName = TypeName;
}
constexpr void ::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::__set_AssemblyName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::__get_AssemblyName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::__set_TypeName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::__get_TypeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
 void ::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::_ctor(::StringW assemblyName, ::StringW typeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, assemblyName, typeName);
}
 int32_t ::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool ::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey::Equals(::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultSerializationBinder.GetTypeFromTypeNameKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (*)(::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey)>(&::Newtonsoft::Json::Serialization::DefaultSerializationBinder::GetTypeFromTypeNameKey)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x24ff3a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder>::get(),
                            "GetTypeFromTypeNameKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultSerializationBinder.BindToType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type (::Newtonsoft::Json::Serialization::DefaultSerializationBinder::*)(::StringW, ::StringW)>(&::Newtonsoft::Json::Serialization::DefaultSerializationBinder::BindToType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x24ff5c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Newtonsoft::Json::Serialization::DefaultSerializationBinder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultSerializationBinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::DefaultSerializationBinder::*)()>(&::Newtonsoft::Json::Serialization::DefaultSerializationBinder::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x24ff634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::Newtonsoft::Json::Serialization::DefaultSerializationBinder::__set_Instance(::Newtonsoft::Json::Serialization::DefaultSerializationBinder value)  {
::cordl_internals::setStaticField<::Newtonsoft::Json::Serialization::DefaultSerializationBinder, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder>::get>(std::forward<::Newtonsoft::Json::Serialization::DefaultSerializationBinder>(value));
}
 ::Newtonsoft::Json::Serialization::DefaultSerializationBinder ::Newtonsoft::Json::Serialization::DefaultSerializationBinder::__get_Instance()  {
return ::cordl_internals::getStaticField<::Newtonsoft::Json::Serialization::DefaultSerializationBinder, "Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder>::get>();
}
constexpr void ::Newtonsoft::Json::Serialization::DefaultSerializationBinder::__set__typeCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,::System::Type> value)  {
::cordl_internals::setInstanceField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,::System::Type>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,::System::Type>>(value));
}
constexpr ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,::System::Type> ::Newtonsoft::Json::Serialization::DefaultSerializationBinder::__get__typeCache() const {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey,::System::Type>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Type ::Newtonsoft::Json::Serialization::DefaultSerializationBinder::GetTypeFromTypeNameKey(::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey typeNameKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder>::get(),
                            "GetTypeFromTypeNameKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::____Newtonsoft__Json__Serialization__DefaultSerializationBinder__TypeNameKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(nullptr, ___internal_method, typeNameKey);
}
 ::System::Type ::Newtonsoft::Json::Serialization::DefaultSerializationBinder::BindToType(::StringW assemblyName, ::StringW typeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder>::get(),
                            "BindToType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type, false>(const_cast<void*>(instance), ___internal_method, assemblyName, typeName);
}
// Ctor Parameters []
 ::Newtonsoft::Json::Serialization::DefaultSerializationBinder::DefaultSerializationBinder()  : ::System::Runtime::Serialization::SerializationBinder(THROW_UNLESS(::il2cpp_utils::New<DefaultSerializationBinder>())) {}
 void ::Newtonsoft::Json::Serialization::DefaultSerializationBinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DefaultSerializationBinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
