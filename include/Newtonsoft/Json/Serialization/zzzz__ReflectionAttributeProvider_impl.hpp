#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__ReflectionAttributeProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IAttributeProvider_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: Newtonsoft::Json::Serialization::ReflectionAttributeProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Serialization::ReflectionAttributeProvider::*)(::bs_hook::Il2CppWrapperType)>(&Newtonsoft::Json::Serialization::ReflectionAttributeProvider::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x24f2e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ReflectionAttributeProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::ReflectionAttributeProvider.GetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<System::Attribute> (Newtonsoft::Json::Serialization::ReflectionAttributeProvider::*)(bool)>(&Newtonsoft::Json::Serialization::ReflectionAttributeProvider::GetAttributes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24f2e84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ReflectionAttributeProvider>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Newtonsoft::Json::Serialization::ReflectionAttributeProvider.GetAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<System::Attribute> (Newtonsoft::Json::Serialization::ReflectionAttributeProvider::*)(System::Type, bool)>(&Newtonsoft::Json::Serialization::ReflectionAttributeProvider::GetAttributes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24f2ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ReflectionAttributeProvider>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Newtonsoft::Json::Serialization::IAttributeProvider
constexpr  Newtonsoft::Json::Serialization::ReflectionAttributeProvider::operator Newtonsoft::Json::Serialization::IAttributeProvider() const noexcept {
return Newtonsoft::Json::Serialization::IAttributeProvider(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Newtonsoft::Json::Serialization::ReflectionAttributeProvider::__set__attributeProvider(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Newtonsoft::Json::Serialization::ReflectionAttributeProvider::__get__attributeProvider() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "attributeProvider", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
 Newtonsoft::Json::Serialization::ReflectionAttributeProvider::ReflectionAttributeProvider(::bs_hook::Il2CppWrapperType attributeProvider)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ReflectionAttributeProvider>(attributeProvider))) {}
 void Newtonsoft::Json::Serialization::ReflectionAttributeProvider::_ctor(::bs_hook::Il2CppWrapperType attributeProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ReflectionAttributeProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attributeProvider);
}
 System::Collections::Generic::IList_1<System::Attribute> Newtonsoft::Json::Serialization::ReflectionAttributeProvider::GetAttributes(bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ReflectionAttributeProvider>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IList_1<System::Attribute>, false>(const_cast<void*>(instance), ___internal_method, inherit);
}
 System::Collections::Generic::IList_1<System::Attribute> Newtonsoft::Json::Serialization::ReflectionAttributeProvider::GetAttributes(System::Type attributeType, bool inherit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Newtonsoft::Json::Serialization::ReflectionAttributeProvider>::get(),
                            "GetAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IList_1<System::Attribute>, false>(const_cast<void*>(instance), ___internal_method, attributeType, inherit);
}
