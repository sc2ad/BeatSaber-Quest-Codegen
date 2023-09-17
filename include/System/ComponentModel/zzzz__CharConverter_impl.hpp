#pragma once
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
namespace {
#include "System/ComponentModel/zzzz__CharConverter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::CharConverter.CanConvertFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::CharConverter::*)(::System::ComponentModel::ITypeDescriptorContext, ::System::Type)>(&::System::ComponentModel::CharConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2774a74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::CharConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CharConverter.ConvertTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::ComponentModel::CharConverter::*)(::System::ComponentModel::ITypeDescriptorContext, ::System::Globalization::CultureInfo, ::bs_hook::Il2CppWrapperType, ::System::Type)>(&::System::ComponentModel::CharConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2774b3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::CharConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CharConverter.ConvertFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::ComponentModel::CharConverter::*)(::System::ComponentModel::ITypeDescriptorContext, ::System::Globalization::CultureInfo, ::bs_hook::Il2CppWrapperType)>(&::System::ComponentModel::CharConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2774c6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::CharConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CharConverter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::CharConverter::*)()>(&::System::ComponentModel::CharConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2774df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 bool ::System::ComponentModel::CharConverter::CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext context, ::System::Type sourceType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter>::get(),
                            "CanConvertFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context, sourceType);
}
 ::bs_hook::Il2CppWrapperType ::System::ComponentModel::CharConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext context, ::System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, ::System::Type destinationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter>::get(),
                            "ConvertTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, context, culture, value, destinationType);
}
 ::bs_hook::Il2CppWrapperType ::System::ComponentModel::CharConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext context, ::System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter>::get(),
                            "ConvertFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, context, culture, value);
}
// Ctor Parameters []
 ::System::ComponentModel::CharConverter::CharConverter()  : ::System::ComponentModel::TypeConverter(THROW_UNLESS(::il2cpp_utils::New<CharConverter>())) {}
 void ::System::ComponentModel::CharConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
