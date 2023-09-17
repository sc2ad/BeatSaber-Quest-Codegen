#pragma once
#include "System/ComponentModel/zzzz__ReferenceConverter_impl.hpp"
namespace {
#include "System/ComponentModel/zzzz__ComponentConverter_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ComponentConverter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ComponentConverter::*)(::System::Type)>(&::System::ComponentModel::ComponentConverter::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2787ac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentConverter.GetProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptorCollection (::System::ComponentModel::ComponentConverter::*)(::System::ComponentModel::ITypeDescriptorContext, ::bs_hook::Il2CppWrapperType, ::ArrayW<::System::Attribute>)>(&::System::ComponentModel::ComponentConverter::GetProperties)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2787b2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::ComponentConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentConverter>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentConverter.GetPropertiesSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::ComponentConverter::*)(::System::ComponentModel::ITypeDescriptorContext)>(&::System::ComponentModel::ComponentConverter::GetPropertiesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2787bf8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::ComponentModel::ComponentConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentConverter>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "type", ty: "::System::Type", modifiers: "", def_value: None }]
 ::System::ComponentModel::ComponentConverter::ComponentConverter(::System::Type type)  : ::System::ComponentModel::ReferenceConverter(THROW_UNLESS(::il2cpp_utils::New<ComponentConverter>(type))) {}
 void ::System::ComponentModel::ComponentConverter::_ctor(::System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
 ::System::ComponentModel::PropertyDescriptorCollection ::System::ComponentModel::ComponentConverter::GetProperties(::System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value, ::ArrayW<::System::Attribute> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentConverter>::get(),
                            "GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Attribute>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptorCollection, false>(const_cast<void*>(instance), ___internal_method, context, value, attributes);
}
 bool ::System::ComponentModel::ComponentConverter::GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentConverter>::get(),
                            "GetPropertiesSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context);
}
} // end anonymous namespace
