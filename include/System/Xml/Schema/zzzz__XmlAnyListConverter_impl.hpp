#pragma once
#include "System/Xml/Schema/zzzz__XmlListConverter_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlAnyListConverter_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
//  Writing Method size for method: System::Xml::Schema::XmlAnyListConverter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlAnyListConverter::*)(System::Xml::Schema::XmlBaseConverter)>(&System::Xml::Schema::XmlAnyListConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2751984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAnyListConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlBaseConverter>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Xml::Schema::XmlAnyListConverter.ChangeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Xml::Schema::XmlAnyListConverter::*)(::bs_hook::Il2CppWrapperType, System::Type, System::Xml::IXmlNamespaceResolver)>(&System::Xml::Schema::XmlAnyListConverter::ChangeType)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x27519f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::Schema::XmlAnyListConverter),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAnyListConverter>::get(),
                                  61
                                ));
    return ___internal_method;
  }
};
 void System::Xml::Schema::XmlAnyListConverter::__set_ItemList(System::Xml::Schema::XmlValueConverter value)  {
::cordl_internals::setStaticField<System::Xml::Schema::XmlValueConverter, "ItemList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAnyListConverter>::get>(std::forward<System::Xml::Schema::XmlValueConverter>(value));
}
 System::Xml::Schema::XmlValueConverter System::Xml::Schema::XmlAnyListConverter::__get_ItemList()  {
return ::cordl_internals::getStaticField<System::Xml::Schema::XmlValueConverter, "ItemList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAnyListConverter>::get>();
}
 void System::Xml::Schema::XmlAnyListConverter::__set_AnyAtomicList(System::Xml::Schema::XmlValueConverter value)  {
::cordl_internals::setStaticField<System::Xml::Schema::XmlValueConverter, "AnyAtomicList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAnyListConverter>::get>(std::forward<System::Xml::Schema::XmlValueConverter>(value));
}
 System::Xml::Schema::XmlValueConverter System::Xml::Schema::XmlAnyListConverter::__get_AnyAtomicList()  {
return ::cordl_internals::getStaticField<System::Xml::Schema::XmlValueConverter, "AnyAtomicList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAnyListConverter>::get>();
}
// Ctor Parameters [CppParam { name: "atomicConverter", ty: "System::Xml::Schema::XmlBaseConverter", modifiers: "", def_value: None }]
 System::Xml::Schema::XmlAnyListConverter::XmlAnyListConverter(System::Xml::Schema::XmlBaseConverter atomicConverter)  : System::Xml::Schema::XmlListConverter(THROW_UNLESS(::il2cpp_utils::New<XmlAnyListConverter>(atomicConverter))) {}
 void System::Xml::Schema::XmlAnyListConverter::_ctor(System::Xml::Schema::XmlBaseConverter atomicConverter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAnyListConverter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlBaseConverter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, atomicConverter);
}
 ::bs_hook::Il2CppWrapperType System::Xml::Schema::XmlAnyListConverter::ChangeType(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlAnyListConverter>::get(),
                            "ChangeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::IXmlNamespaceResolver>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, value, destinationType, nsResolver);
}
