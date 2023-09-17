#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "JetBrains/Annotations/zzzz__AspRequiredAttributeAttribute_def.hpp"
//  Writing Method size for method: ::JetBrains::Annotations::AspRequiredAttributeAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspRequiredAttributeAttribute::*)(::StringW)>(&::JetBrains::Annotations::AspRequiredAttributeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d412fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspRequiredAttributeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspRequiredAttributeAttribute.get_Attribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::JetBrains::Annotations::AspRequiredAttributeAttribute::*)()>(&::JetBrains::Annotations::AspRequiredAttributeAttribute::get_Attribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d41324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspRequiredAttributeAttribute>::get(),
                            "get_Attribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JetBrains::Annotations::AspRequiredAttributeAttribute.set_Attribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::JetBrains::Annotations::AspRequiredAttributeAttribute::*)(::StringW)>(&::JetBrains::Annotations::AspRequiredAttributeAttribute::set_Attribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d4132c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspRequiredAttributeAttribute>::get(),
                            "set_Attribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::JetBrains::Annotations::AspRequiredAttributeAttribute::__set__Attribute_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::JetBrains::Annotations::AspRequiredAttributeAttribute::__get__Attribute_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "attribute", ty: "::StringW", modifiers: "", def_value: None }]
 ::JetBrains::Annotations::AspRequiredAttributeAttribute::AspRequiredAttributeAttribute(::StringW attribute)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<AspRequiredAttributeAttribute>(attribute))) {}
 void ::JetBrains::Annotations::AspRequiredAttributeAttribute::_ctor(::StringW attribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspRequiredAttributeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, attribute);
}
 ::StringW ::JetBrains::Annotations::AspRequiredAttributeAttribute::get_Attribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspRequiredAttributeAttribute>::get(),
                            "get_Attribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::JetBrains::Annotations::AspRequiredAttributeAttribute::set_Attribute(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::JetBrains::Annotations::AspRequiredAttributeAttribute>::get(),
                            "set_Attribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
} // end anonymous namespace
