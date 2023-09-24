#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__ReflectionValueProvider_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IValueProvider_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Serialization::ReflectionValueProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::ReflectionValueProvider::*)(System::Reflection::MemberInfo)>(&Newtonsoft::Json::Serialization::ReflectionValueProvider::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2517570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ReflectionValueProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::ReflectionValueProvider.SetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::ReflectionValueProvider::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::ReflectionValueProvider::SetValue)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x25175dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ReflectionValueProvider>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::ReflectionValueProvider.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (Newtonsoft::Json::Serialization::ReflectionValueProvider::*)(::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::ReflectionValueProvider::GetValue)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2517780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ReflectionValueProvider>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Newtonsoft::Json::Serialization::IValueProvider
constexpr  Newtonsoft::Json::Serialization::ReflectionValueProvider::operator Newtonsoft::Json::Serialization::IValueProvider() const noexcept {
return Newtonsoft::Json::Serialization::IValueProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Serialization::ReflectionValueProvider::__set__memberInfo(System::Reflection::MemberInfo value)  {
::cordl_internals::setInstanceField<System::Reflection::MemberInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::MemberInfo>(value));
}
constexpr System::Reflection::MemberInfo Newtonsoft::Json::Serialization::ReflectionValueProvider::__get__memberInfo() const {
return ::cordl_internals::getInstanceField<System::Reflection::MemberInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Newtonsoft::Json::Serialization::ReflectionValueProvider Newtonsoft::Json::Serialization::ReflectionValueProvider::New_ctor(System::Reflection::MemberInfo memberInfo)  {
Newtonsoft::Json::Serialization::ReflectionValueProvider o{THROW_UNLESS(::il2cpp_utils::New<Newtonsoft::Json::Serialization::ReflectionValueProvider>(memberInfo))};
return o;
}
 void Newtonsoft::Json::Serialization::ReflectionValueProvider::_ctor(System::Reflection::MemberInfo memberInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ReflectionValueProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::MemberInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, memberInfo);
}
 void Newtonsoft::Json::Serialization::ReflectionValueProvider::SetValue(::bs_hook::Il2CppWrapperType target, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ReflectionValueProvider>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, target, value);
}
 ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::ReflectionValueProvider::GetValue(::bs_hook::Il2CppWrapperType target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ReflectionValueProvider>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, target);
}
