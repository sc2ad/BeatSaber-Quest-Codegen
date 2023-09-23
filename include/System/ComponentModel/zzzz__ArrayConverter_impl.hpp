#pragma once
#include "System/ComponentModel/zzzz__CollectionConverter_impl.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/ComponentModel/zzzz__ArrayConverter_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor::*)(System::Type, System::Type, int32_t)>(&System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2772b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor.GetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor::*)(::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor::GetValue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2772d54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor.SetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType)>(&System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor::SetValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2772e08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
constexpr void System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor::__set__index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor::__get__index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "arrayType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "elementType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
 System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor(System::Type arrayType, System::Type elementType, int32_t index)  : System::ComponentModel::System__ComponentModel__TypeConverter__SimplePropertyDescriptor(THROW_UNLESS(::il2cpp_utils::New<System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor>(arrayType, elementType, index))) {}
 void System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor::_ctor(System::Type arrayType, System::Type elementType, int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, arrayType, elementType, index);
}
 ::bs_hook::Il2CppWrapperType System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor::GetValue(::bs_hook::Il2CppWrapperType instance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor>::get(),
                            "GetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, instance);
}
 void System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor::SetValue(::bs_hook::Il2CppWrapperType instance, ::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::System__ComponentModel__ArrayConverter__ArrayPropertyDescriptor>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, instance, value);
}
//  Writing Method size for method: System::ComponentModel::ArrayConverter.ConvertTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::ComponentModel::ArrayConverter::*)(System::ComponentModel::ITypeDescriptorContext, System::Globalization::CultureInfo, ::bs_hook::Il2CppWrapperType, System::Type)>(&System::ComponentModel::ArrayConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x27727fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::ArrayConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ArrayConverter>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::ArrayConverter.GetProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptorCollection (System::ComponentModel::ArrayConverter::*)(System::ComponentModel::ITypeDescriptorContext, ::bs_hook::Il2CppWrapperType, ::ArrayW<System::Attribute>)>(&System::ComponentModel::ArrayConverter::GetProperties)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x27729c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::ArrayConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ArrayConverter>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::ArrayConverter.GetPropertiesSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ArrayConverter::*)(System::ComponentModel::ITypeDescriptorContext)>(&System::ComponentModel::ArrayConverter::GetPropertiesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2772d44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::ArrayConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ArrayConverter>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::ArrayConverter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ArrayConverter::*)()>(&System::ComponentModel::ArrayConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2772d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ArrayConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::bs_hook::Il2CppWrapperType System::ComponentModel::ArrayConverter::ConvertTo(System::ComponentModel::ITypeDescriptorContext context, System::Globalization::CultureInfo culture, ::bs_hook::Il2CppWrapperType value, System::Type destinationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ArrayConverter>::get(),
                            "ConvertTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, context, culture, value, destinationType);
}
 System::ComponentModel::PropertyDescriptorCollection System::ComponentModel::ArrayConverter::GetProperties(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value, ::ArrayW<System::Attribute> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ArrayConverter>::get(),
                            "GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptorCollection, false>(const_cast<void*>(instance), ___internal_method, context, value, attributes);
}
 bool System::ComponentModel::ArrayConverter::GetPropertiesSupported(System::ComponentModel::ITypeDescriptorContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ArrayConverter>::get(),
                            "GetPropertiesSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context);
}
// Ctor Parameters []
 System::ComponentModel::ArrayConverter::ArrayConverter()  : System::ComponentModel::CollectionConverter(THROW_UNLESS(::il2cpp_utils::New<ArrayConverter>())) {}
 void System::ComponentModel::ArrayConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ArrayConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
