#pragma once
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/ComponentModel/zzzz__GuidConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: System::ComponentModel::GuidConverter.CanConvertFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::GuidConverter::*)(System::ComponentModel::ITypeDescriptorContext, System::Type)>(&System::ComponentModel::GuidConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x277df38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::GuidConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::GuidConverter>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::GuidConverter.CanConvertTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::GuidConverter::*)(System::ComponentModel::ITypeDescriptorContext, System::Type)>(&System::ComponentModel::GuidConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x277e000;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::GuidConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::GuidConverter>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::GuidConverter.ConvertFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::ComponentModel::GuidConverter::*)(System::ComponentModel::ITypeDescriptorContext, System::Globalization::CultureInfo, ::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::GuidConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x277e0c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::GuidConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::GuidConverter>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::GuidConverter.ConvertTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::ComponentModel::GuidConverter::*)(System::ComponentModel::ITypeDescriptorContext, System::Globalization::CultureInfo, ::bs_hook::Il2CppWrapperType, System::Type)>(&System::ComponentModel::GuidConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x277e1a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::GuidConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::GuidConverter>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::GuidConverter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::GuidConverter::*)()>(&System::ComponentModel::GuidConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277e4d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::GuidConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 bool System::ComponentModel::GuidConverter::CanConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Type sourceType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::GuidConverter>::get(),
                            "CanConvertFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context, sourceType);
}
 bool System::ComponentModel::GuidConverter::CanConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Type destinationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::GuidConverter>::get(),
                            "CanConvertTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context, destinationType);
}
 ::bs_hook::Il2CppWrapperType System::ComponentModel::GuidConverter::ConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::GuidConverter>::get(),
                            "ConvertFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, context, culture, value);
}
 ::bs_hook::Il2CppWrapperType System::ComponentModel::GuidConverter::ConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, System::Type destinationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::GuidConverter>::get(),
                            "ConvertTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, context, culture, value, destinationType);
}
// Ctor Parameters []
 System::ComponentModel::GuidConverter::GuidConverter()  : System::ComponentModel::TypeConverter(THROW_UNLESS(::il2cpp_utils::New<GuidConverter>())) {}
 void System::ComponentModel::GuidConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::GuidConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
