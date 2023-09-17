#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "Newtonsoft/Json/Serialization/zzzz__ResolverContractKey_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ResolverContractKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::ResolverContractKey::*)(::System::Type, ::System::Type)>(&::Newtonsoft::Json::Serialization::ResolverContractKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f6c84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ResolverContractKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ResolverContractKey.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Serialization::ResolverContractKey::*)()>(&::Newtonsoft::Json::Serialization::ResolverContractKey::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x24f6c8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Newtonsoft::Json::Serialization::ResolverContractKey),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ResolverContractKey>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ResolverContractKey.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::ResolverContractKey::*)(::bs_hook::Il2CppWrapperType)>(&::Newtonsoft::Json::Serialization::ResolverContractKey::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x24f6cd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Newtonsoft::Json::Serialization::ResolverContractKey),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ResolverContractKey>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ResolverContractKey.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::ResolverContractKey::*)(::Newtonsoft::Json::Serialization::ResolverContractKey)>(&::Newtonsoft::Json::Serialization::ResolverContractKey::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x24f6d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ResolverContractKey>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ResolverContractKey>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_resolverType", ty: "::System::Type", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_contractType", ty: "::System::Type", modifiers: "", def_value: Some("csnull") }]
constexpr ::Newtonsoft::Json::Serialization::ResolverContractKey::ResolverContractKey(::System::Type _resolverType, ::System::Type _contractType) noexcept : ::bs_hook::ValueTypeWrapper() {this->_resolverType = _resolverType;
this->_contractType = _contractType;
}
constexpr void ::Newtonsoft::Json::Serialization::ResolverContractKey::__set__resolverType(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x0>(this->__instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::Newtonsoft::Json::Serialization::ResolverContractKey::__get__resolverType() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x0>(this->__instance);
}
constexpr void ::Newtonsoft::Json::Serialization::ResolverContractKey::__set__contractType(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x8>(this->__instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::Newtonsoft::Json::Serialization::ResolverContractKey::__get__contractType() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x8>(this->__instance);
}
 void ::Newtonsoft::Json::Serialization::ResolverContractKey::_ctor(::System::Type resolverType, ::System::Type contractType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ResolverContractKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, resolverType, contractType);
}
 int32_t ::Newtonsoft::Json::Serialization::ResolverContractKey::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ResolverContractKey>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::Newtonsoft::Json::Serialization::ResolverContractKey::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ResolverContractKey>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, obj);
}
 bool ::Newtonsoft::Json::Serialization::ResolverContractKey::Equals(::Newtonsoft::Json::Serialization::ResolverContractKey other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::ResolverContractKey>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Serialization::ResolverContractKey>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, other);
}
} // end anonymous namespace
