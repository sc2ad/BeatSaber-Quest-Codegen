#pragma once
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_impl.hpp"
#include "System/Xml/Schema/zzzz__Datatype_union_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
//  Writing Method size for method: System::Xml::Schema::Datatype_union.HasAtomicMembers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::Datatype_union::*)()>(&System::Xml::Schema::Datatype_union::HasAtomicMembers)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2723a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::Datatype_union>::get(),
                            "HasAtomicMembers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Xml::Schema::Datatype_union::__set_atomicValueType(System::Type value)  {
::cordl_internals::setStaticField<System::Type, "atomicValueType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::Datatype_union>::get>(std::forward<System::Type>(value));
}
 System::Type System::Xml::Schema::Datatype_union::__get_atomicValueType()  {
return ::cordl_internals::getStaticField<System::Type, "atomicValueType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::Datatype_union>::get>();
}
 void System::Xml::Schema::Datatype_union::__set_listValueType(System::Type value)  {
::cordl_internals::setStaticField<System::Type, "listValueType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::Datatype_union>::get>(std::forward<System::Type>(value));
}
 System::Type System::Xml::Schema::Datatype_union::__get_listValueType()  {
return ::cordl_internals::getStaticField<System::Type, "listValueType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::Datatype_union>::get>();
}
constexpr void System::Xml::Schema::Datatype_union::__set_types(::ArrayW<System::Xml::Schema::XmlSchemaSimpleType> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Xml::Schema::XmlSchemaSimpleType>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Xml::Schema::XmlSchemaSimpleType>>(value));
}
constexpr ::ArrayW<System::Xml::Schema::XmlSchemaSimpleType> System::Xml::Schema::Datatype_union::__get_types() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Xml::Schema::XmlSchemaSimpleType>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool System::Xml::Schema::Datatype_union::HasAtomicMembers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::Datatype_union>::get(),
                            "HasAtomicMembers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
