#pragma once
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/ComponentModel/zzzz__BooleanConverter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
//  Writing Method size for method: System::ComponentModel::BooleanConverter.CanConvertFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::BooleanConverter::*)(System::ComponentModel::ITypeDescriptorContext, System::Type)>(&System::ComponentModel::BooleanConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2774404;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::BooleanConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::BooleanConverter>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::BooleanConverter.ConvertFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::ComponentModel::BooleanConverter::*)(System::ComponentModel::ITypeDescriptorContext, System::Globalization::CultureInfo, ::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::BooleanConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x27744cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::BooleanConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::BooleanConverter>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::BooleanConverter.GetStandardValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection (System::ComponentModel::BooleanConverter::*)(System::ComponentModel::ITypeDescriptorContext)>(&System::ComponentModel::BooleanConverter::GetStandardValues)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x27746cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::BooleanConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::BooleanConverter>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::BooleanConverter.GetStandardValuesExclusive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::BooleanConverter::*)(System::ComponentModel::ITypeDescriptorContext)>(&System::ComponentModel::BooleanConverter::GetStandardValuesExclusive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2774830;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::BooleanConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::BooleanConverter>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::BooleanConverter.GetStandardValuesSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::BooleanConverter::*)(System::ComponentModel::ITypeDescriptorContext)>(&System::ComponentModel::BooleanConverter::GetStandardValuesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2774838;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::BooleanConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::BooleanConverter>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::BooleanConverter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::BooleanConverter::*)()>(&System::ComponentModel::BooleanConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2774840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::BooleanConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::ComponentModel::BooleanConverter::__set_s_values(System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection value)  {
::cordl_internals::setStaticField<System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection, "s_values", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::BooleanConverter>::get>(std::forward<System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection>(value));
}
 System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection System::ComponentModel::BooleanConverter::__get_s_values()  {
return ::cordl_internals::getStaticField<System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection, "s_values", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::BooleanConverter>::get>();
}
 bool System::ComponentModel::BooleanConverter::CanConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Type sourceType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::BooleanConverter>::get(),
                            "CanConvertFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context, sourceType);
}
 ::bs_hook::Il2CppWrapperType System::ComponentModel::BooleanConverter::ConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::BooleanConverter>::get(),
                            "ConvertFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, context, culture, value);
}
 System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection System::ComponentModel::BooleanConverter::GetStandardValues(System::ComponentModel::ITypeDescriptorContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::BooleanConverter>::get(),
                            "GetStandardValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection, false>(const_cast<void*>(instance), ___internal_method, context);
}
 bool System::ComponentModel::BooleanConverter::GetStandardValuesExclusive(System::ComponentModel::ITypeDescriptorContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::BooleanConverter>::get(),
                            "GetStandardValuesExclusive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context);
}
 bool System::ComponentModel::BooleanConverter::GetStandardValuesSupported(System::ComponentModel::ITypeDescriptorContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::BooleanConverter>::get(),
                            "GetStandardValuesSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context);
}
// Ctor Parameters []
 System::ComponentModel::BooleanConverter::BooleanConverter()  : System::ComponentModel::TypeConverter(THROW_UNLESS(::il2cpp_utils::New<BooleanConverter>())) {}
 void System::ComponentModel::BooleanConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::BooleanConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
