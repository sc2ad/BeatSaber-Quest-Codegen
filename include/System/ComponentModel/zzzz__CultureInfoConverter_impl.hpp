#pragma once
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/ComponentModel/zzzz__CultureInfoConverter_def.hpp"
#include "System/ComponentModel/zzzz__CultureInfoConverter_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer::*)(System::ComponentModel::CultureInfoConverter)>(&System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2775fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::CultureInfoConverter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer::Compare)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x277602c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::IComparer
constexpr  System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer::operator System::Collections::IComparer() const noexcept {
return System::Collections::IComparer(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer::__set__converter(System::ComponentModel::CultureInfoConverter value)  {
::cordl_internals::setInstanceField<System::ComponentModel::CultureInfoConverter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::ComponentModel::CultureInfoConverter>(value));
}
constexpr System::ComponentModel::CultureInfoConverter System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer::__get__converter() const {
return ::cordl_internals::getInstanceField<System::ComponentModel::CultureInfoConverter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer::New_ctor(System::ComponentModel::CultureInfoConverter cultureConverter)  {
System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer o{THROW_UNLESS(::il2cpp_utils::New<System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer>(cultureConverter))};
return o;
}
 void System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer::_ctor(System::ComponentModel::CultureInfoConverter cultureConverter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::CultureInfoConverter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cultureConverter);
}
 int32_t System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer::Compare(::bs_hook::Il2CppWrapperType item1, ::bs_hook::Il2CppWrapperType item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, item1, item2);
}
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureInfoMapper.CreateMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::StringW,::StringW> (*)()>(&System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureInfoMapper::CreateMap)> {
  constexpr static std::size_t size = 0x40e0;
  constexpr static std::size_t addrs = 0x2776198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureInfoMapper>::get(),
                            "CreateMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureInfoMapper.GetCultureInfoName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureInfoMapper::GetCultureInfoName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2775908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureInfoMapper>::get(),
                            "GetCultureInfoName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureInfoMapper::__set_s_cultureInfoNameMap(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, "s_cultureInfoNameMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureInfoMapper>::get>(std::forward<System::Collections::Generic::Dictionary_2<::StringW,::StringW>>(value));
}
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureInfoMapper::__get_s_cultureInfoNameMap()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, "s_cultureInfoNameMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureInfoMapper>::get>();
}
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureInfoMapper::CreateMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureInfoMapper>::get(),
                            "CreateMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, false>(nullptr, ___internal_method);
}
 ::StringW System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureInfoMapper::GetCultureInfoName(::StringW cultureInfoDisplayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__CultureInfoConverter__CultureInfoMapper>::get(),
                            "GetCultureInfoName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, cultureInfoDisplayName);
}
//  Writing Method size for method: System::ComponentModel::CultureInfoConverter.get_DefaultCultureString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::CultureInfoConverter::*)()>(&System::ComponentModel::CultureInfoConverter::get_DefaultCultureString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2774dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                            "get_DefaultCultureString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::CultureInfoConverter.GetCultureName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::CultureInfoConverter::*)(System::Globalization::CultureInfo)>(&System::ComponentModel::CultureInfoConverter::GetCultureName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2774e3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::CultureInfoConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::CultureInfoConverter.CanConvertFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::CultureInfoConverter::*)(System::ComponentModel::ITypeDescriptorContext, System::Type)>(&System::ComponentModel::CultureInfoConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2774e5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::CultureInfoConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::CultureInfoConverter.CanConvertTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::CultureInfoConverter::*)(System::ComponentModel::ITypeDescriptorContext, System::Type)>(&System::ComponentModel::CultureInfoConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2774f24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::CultureInfoConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::CultureInfoConverter.ConvertFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::ComponentModel::CultureInfoConverter::*)(System::ComponentModel::ITypeDescriptorContext, System::Globalization::CultureInfo, ::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::CultureInfoConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0x91c;
  constexpr static std::size_t addrs = 0x2774fec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::CultureInfoConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::CultureInfoConverter.ConvertTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::ComponentModel::CultureInfoConverter::*)(System::ComponentModel::ITypeDescriptorContext, System::Globalization::CultureInfo, ::bs_hook::Il2CppWrapperType, System::Type)>(&System::ComponentModel::CultureInfoConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x27759a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::CultureInfoConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::CultureInfoConverter.GetStandardValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection (System::ComponentModel::CultureInfoConverter::*)(System::ComponentModel::ITypeDescriptorContext)>(&System::ComponentModel::CultureInfoConverter::GetStandardValues)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2775e0c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::CultureInfoConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::CultureInfoConverter.GetStandardValuesExclusive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::CultureInfoConverter::*)(System::ComponentModel::ITypeDescriptorContext)>(&System::ComponentModel::CultureInfoConverter::GetStandardValuesExclusive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2776014;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::CultureInfoConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::CultureInfoConverter.GetStandardValuesSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::CultureInfoConverter::*)(System::ComponentModel::ITypeDescriptorContext)>(&System::ComponentModel::CultureInfoConverter::GetStandardValuesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277601c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::CultureInfoConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::CultureInfoConverter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::CultureInfoConverter::*)()>(&System::ComponentModel::CultureInfoConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2776024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::ComponentModel::CultureInfoConverter::__set__values(System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection value)  {
::cordl_internals::setInstanceField<System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection>(value));
}
constexpr System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection System::ComponentModel::CultureInfoConverter::__get__values() const {
return ::cordl_internals::getInstanceField<System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW System::ComponentModel::CultureInfoConverter::get_DefaultCultureString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                            "get_DefaultCultureString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::ComponentModel::CultureInfoConverter::GetCultureName(System::Globalization::CultureInfo culture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                            "GetCultureName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, culture);
}
 bool System::ComponentModel::CultureInfoConverter::CanConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Type sourceType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                            "CanConvertFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context, sourceType);
}
 bool System::ComponentModel::CultureInfoConverter::CanConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Type destinationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                            "CanConvertTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context, destinationType);
}
 ::bs_hook::Il2CppWrapperType System::ComponentModel::CultureInfoConverter::ConvertFrom(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                            "ConvertFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, context, culture, value);
}
 ::bs_hook::Il2CppWrapperType System::ComponentModel::CultureInfoConverter::ConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, System::Type destinationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                            "ConvertTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, context, culture, value, destinationType);
}
 System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection System::ComponentModel::CultureInfoConverter::GetStandardValues(System::ComponentModel::ITypeDescriptorContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                            "GetStandardValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::System__ComponentModel__TypeConverter__StandardValuesCollection, false>(const_cast<void*>(instance), ___internal_method, context);
}
 bool System::ComponentModel::CultureInfoConverter::GetStandardValuesExclusive(System::ComponentModel::ITypeDescriptorContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                            "GetStandardValuesExclusive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context);
}
 bool System::ComponentModel::CultureInfoConverter::GetStandardValuesSupported(System::ComponentModel::ITypeDescriptorContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                            "GetStandardValuesSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context);
}
 System::ComponentModel::CultureInfoConverter System::ComponentModel::CultureInfoConverter::New_ctor()  {
System::ComponentModel::CultureInfoConverter o{THROW_UNLESS(::il2cpp_utils::New<System::ComponentModel::CultureInfoConverter>())};
return o;
}
 void System::ComponentModel::CultureInfoConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::CultureInfoConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
