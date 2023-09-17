#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "System/ComponentModel/zzzz__AttributeProviderAttribute_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::AttributeProviderAttribute.get_TypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::AttributeProviderAttribute::*)()>(&::System::ComponentModel::AttributeProviderAttribute::get_TypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2773c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeProviderAttribute>::get(),
                            "get_TypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::AttributeProviderAttribute.get_PropertyName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ComponentModel::AttributeProviderAttribute::*)()>(&::System::ComponentModel::AttributeProviderAttribute::get_PropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2773c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeProviderAttribute>::get(),
                            "get_PropertyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::ComponentModel::AttributeProviderAttribute::__set__TypeName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::ComponentModel::AttributeProviderAttribute::__get__TypeName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::ComponentModel::AttributeProviderAttribute::__set__PropertyName_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::ComponentModel::AttributeProviderAttribute::__get__PropertyName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::System::ComponentModel::AttributeProviderAttribute::get_TypeName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeProviderAttribute>::get(),
                            "get_TypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::ComponentModel::AttributeProviderAttribute::get_PropertyName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::AttributeProviderAttribute>::get(),
                            "get_PropertyName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
