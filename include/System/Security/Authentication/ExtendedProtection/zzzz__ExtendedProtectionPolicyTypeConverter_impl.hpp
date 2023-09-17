#pragma once
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
namespace {
#include "System/Security/Authentication/ExtendedProtection/zzzz__ExtendedProtectionPolicyTypeConverter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter.CanConvertTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext, ::System::Type)>(&::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27e1cbc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter.ConvertTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext, ::System::Globalization::CultureInfo, ::bs_hook::Il2CppWrapperType, ::System::Type)>(&::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27e1cfc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::*)()>(&::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27e1d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 bool ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::CanConvertTo(::System::ComponentModel::ITypeDescriptorContext context, ::System::Type destinationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter>::get(),
                            "CanConvertTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context, destinationType);
}
 ::bs_hook::Il2CppWrapperType ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext context, ::System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, ::System::Type destinationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter>::get(),
                            "ConvertTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, context, culture, value, destinationType);
}
// Ctor Parameters []
 ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::ExtendedProtectionPolicyTypeConverter()  : ::System::ComponentModel::TypeConverter(THROW_UNLESS(::il2cpp_utils::New<ExtendedProtectionPolicyTypeConverter>())) {}
 void ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
