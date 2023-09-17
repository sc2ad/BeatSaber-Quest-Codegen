#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "System/ComponentModel/zzzz__SettingsBindableAttribute_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::SettingsBindableAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::SettingsBindableAttribute::*)(bool)>(&::System::ComponentModel::SettingsBindableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x278589c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::SettingsBindableAttribute.get_Bindable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::SettingsBindableAttribute::*)()>(&::System::ComponentModel::SettingsBindableAttribute::get_Bindable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27858c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute>::get(),
                            "get_Bindable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::SettingsBindableAttribute.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::SettingsBindableAttribute::*)(::bs_hook::Il2CppWrapperType)>(&::System::ComponentModel::SettingsBindableAttribute::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x27858cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::SettingsBindableAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::SettingsBindableAttribute.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::SettingsBindableAttribute::*)()>(&::System::ComponentModel::SettingsBindableAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2785958;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::SettingsBindableAttribute),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 void ::System::ComponentModel::SettingsBindableAttribute::__set_Yes(::System::ComponentModel::SettingsBindableAttribute value)  {
::cordl_internals::setStaticField<::System::ComponentModel::SettingsBindableAttribute, "Yes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute>::get>(std::forward<::System::ComponentModel::SettingsBindableAttribute>(value));
}
 ::System::ComponentModel::SettingsBindableAttribute ::System::ComponentModel::SettingsBindableAttribute::__get_Yes()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::SettingsBindableAttribute, "Yes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute>::get>();
}
 void ::System::ComponentModel::SettingsBindableAttribute::__set_No(::System::ComponentModel::SettingsBindableAttribute value)  {
::cordl_internals::setStaticField<::System::ComponentModel::SettingsBindableAttribute, "No", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute>::get>(std::forward<::System::ComponentModel::SettingsBindableAttribute>(value));
}
 ::System::ComponentModel::SettingsBindableAttribute ::System::ComponentModel::SettingsBindableAttribute::__get_No()  {
return ::cordl_internals::getStaticField<::System::ComponentModel::SettingsBindableAttribute, "No", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute>::get>();
}
constexpr void ::System::ComponentModel::SettingsBindableAttribute::__set__Bindable_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::ComponentModel::SettingsBindableAttribute::__get__Bindable_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "bindable", ty: "bool", modifiers: "", def_value: None }]
 ::System::ComponentModel::SettingsBindableAttribute::SettingsBindableAttribute(bool bindable)  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<SettingsBindableAttribute>(bindable))) {}
 void ::System::ComponentModel::SettingsBindableAttribute::_ctor(bool bindable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bindable);
}
 bool ::System::ComponentModel::SettingsBindableAttribute::get_Bindable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute>::get(),
                            "get_Bindable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::ComponentModel::SettingsBindableAttribute::Equals(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 int32_t ::System::ComponentModel::SettingsBindableAttribute::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::SettingsBindableAttribute>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
