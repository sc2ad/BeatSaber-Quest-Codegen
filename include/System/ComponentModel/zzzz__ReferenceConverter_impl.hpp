#pragma once
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
namespace {
#include "System/ComponentModel/zzzz__ReferenceConverter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer::*)(::System::ComponentModel::ReferenceConverter)>(&::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2783fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ReferenceConverter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer::Compare)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2784114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Collections::IComparer
constexpr  ::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer::operator ::System::Collections::IComparer() const noexcept {
return ::System::Collections::IComparer(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer::__set__converter(::System::ComponentModel::ReferenceConverter value)  {
::cordl_internals::setInstanceField<::System::ComponentModel::ReferenceConverter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::ComponentModel::ReferenceConverter>(value));
}
constexpr ::System::ComponentModel::ReferenceConverter ::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer::__get__converter() const {
return ::cordl_internals::getInstanceField<::System::ComponentModel::ReferenceConverter, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "converter", ty: "::System::ComponentModel::ReferenceConverter", modifiers: "", def_value: None }]
 ::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer::____System__ComponentModel__ReferenceConverter__ReferenceComparer(::System::ComponentModel::ReferenceConverter converter)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____System__ComponentModel__ReferenceConverter__ReferenceComparer>(converter))) {}
 void ::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer::_ctor(::System::ComponentModel::ReferenceConverter converter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ReferenceConverter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, converter);
}
 int32_t ::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer::Compare(::bs_hook::Il2CppWrapperType item1, ::bs_hook::Il2CppWrapperType item2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::____System__ComponentModel__ReferenceConverter__ReferenceComparer>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, item1, item2);
}
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ReferenceConverter::*)(::System::Type)>(&::System::ComponentModel::ReferenceConverter::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2782c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.CanConvertFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext, ::System::Type)>(&::System::ComponentModel::ReferenceConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2782c74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::ReferenceConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.ConvertFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext, ::System::Globalization::CultureInfo, ::bs_hook::Il2CppWrapperType)>(&::System::ComponentModel::ReferenceConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2782dac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::ReferenceConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.ConvertTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext, ::System::Globalization::CultureInfo, ::bs_hook::Il2CppWrapperType, ::System::Type)>(&::System::ComponentModel::ReferenceConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x2783150;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::ReferenceConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.GetStandardValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::____System__ComponentModel__TypeConverter__StandardValuesCollection (::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext)>(&::System::ComponentModel::ReferenceConverter::GetStandardValues)> {
  constexpr static std::size_t size = 0x7f0;
  constexpr static std::size_t addrs = 0x27837d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::ReferenceConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.GetStandardValuesExclusive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext)>(&::System::ComponentModel::ReferenceConverter::GetStandardValuesExclusive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x278409c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::ReferenceConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.GetStandardValuesSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext)>(&::System::ComponentModel::ReferenceConverter::GetStandardValuesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27840a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::ReferenceConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ReferenceConverter.IsValueAllowed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ReferenceConverter::*)(::System::ComponentModel::ITypeDescriptorContext, ::bs_hook::Il2CppWrapperType)>(&::System::ComponentModel::ReferenceConverter::IsValueAllowed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27840ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::ReferenceConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
 void ::System::ComponentModel::ReferenceConverter::__set_s_none(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "s_none", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get>(std::forward<::StringW>(value));
}
 ::StringW ::System::ComponentModel::ReferenceConverter::__get_s_none()  {
return ::cordl_internals::getStaticField<::StringW, "s_none", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get>();
}
constexpr void ::System::ComponentModel::ReferenceConverter::__set__type(::System::Type value)  {
::cordl_internals::setInstanceField<::System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Type>(value));
}
constexpr ::System::Type ::System::ComponentModel::ReferenceConverter::__get__type() const {
return ::cordl_internals::getInstanceField<::System::Type, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: None }]
 ::System::ComponentModel::ReferenceConverter::ReferenceConverter(::System::Type type)  : ::System::ComponentModel::TypeConverter(THROW_UNLESS(::il2cpp_utils::New<ReferenceConverter>(type))) {}
 void ::System::ComponentModel::ReferenceConverter::_ctor(::System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
 bool ::System::ComponentModel::ReferenceConverter::CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext context, ::System::Type sourceType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get(),
                            "CanConvertFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context, sourceType);
}
 ::bs_hook::Il2CppWrapperType ::System::ComponentModel::ReferenceConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext context, ::System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get(),
                            "ConvertFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, context, culture, value);
}
 ::bs_hook::Il2CppWrapperType ::System::ComponentModel::ReferenceConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext context, ::System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, ::System::Type destinationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get(),
                            "ConvertTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, context, culture, value, destinationType);
}
 ::System::ComponentModel::____System__ComponentModel__TypeConverter__StandardValuesCollection ::System::ComponentModel::ReferenceConverter::GetStandardValues(::System::ComponentModel::ITypeDescriptorContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get(),
                            "GetStandardValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::____System__ComponentModel__TypeConverter__StandardValuesCollection, false>(const_cast<void*>(instance), ___internal_method, context);
}
 bool ::System::ComponentModel::ReferenceConverter::GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get(),
                            "GetStandardValuesExclusive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context);
}
 bool ::System::ComponentModel::ReferenceConverter::GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get(),
                            "GetStandardValuesSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context);
}
 bool ::System::ComponentModel::ReferenceConverter::IsValueAllowed(::System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ReferenceConverter>::get(),
                            "IsValueAllowed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context, value);
}
} // end anonymous namespace
