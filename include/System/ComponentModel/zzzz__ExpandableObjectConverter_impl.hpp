#pragma once
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/ComponentModel/zzzz__ExpandableObjectConverter_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptorCollection_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
//  Writing Method size for method: System::ComponentModel::ExpandableObjectConverter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ExpandableObjectConverter::*)()>(&System::ComponentModel::ExpandableObjectConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277d694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ExpandableObjectConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::ExpandableObjectConverter.GetProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::ComponentModel::PropertyDescriptorCollection (System::ComponentModel::ExpandableObjectConverter::*)(System::ComponentModel::ITypeDescriptorContext, ::bs_hook::Il2CppWrapperType, ::ArrayW<System::Attribute>)>(&System::ComponentModel::ExpandableObjectConverter::GetProperties)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x277d69c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::ExpandableObjectConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ExpandableObjectConverter>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::ComponentModel::ExpandableObjectConverter.GetPropertiesSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ExpandableObjectConverter::*)(System::ComponentModel::ITypeDescriptorContext)>(&System::ComponentModel::ExpandableObjectConverter::GetPropertiesSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x277d704;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::ComponentModel::ExpandableObjectConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ExpandableObjectConverter>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::ComponentModel::ExpandableObjectConverter::ExpandableObjectConverter()  : System::ComponentModel::TypeConverter(THROW_UNLESS(::il2cpp_utils::New<ExpandableObjectConverter>())) {}
 void System::ComponentModel::ExpandableObjectConverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ExpandableObjectConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::ComponentModel::PropertyDescriptorCollection System::ComponentModel::ExpandableObjectConverter::GetProperties(System::ComponentModel::ITypeDescriptorContext context, ::bs_hook::Il2CppWrapperType value, ::ArrayW<System::Attribute> attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ExpandableObjectConverter>::get(),
                            "GetProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Attribute>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::ComponentModel::PropertyDescriptorCollection, false>(const_cast<void*>(instance), ___internal_method, context, value, attributes);
}
 bool System::ComponentModel::ExpandableObjectConverter::GetPropertiesSupported(System::ComponentModel::ITypeDescriptorContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::ComponentModel::ExpandableObjectConverter>::get(),
                            "GetPropertiesSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ComponentModel::ITypeDescriptorContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, context);
}
