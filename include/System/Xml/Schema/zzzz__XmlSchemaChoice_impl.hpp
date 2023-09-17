#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaGroupBase_impl.hpp"
namespace {
#include "System/Xml/Schema/zzzz__XmlSchemaChoice_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaChoice.get_Items
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection (::System::Xml::Schema::XmlSchemaChoice::*)()>(&::System::Xml::Schema::XmlSchemaChoice::get_Items)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2733970;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Xml::Schema::XmlSchemaChoice),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaChoice>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
constexpr void ::System::Xml::Schema::XmlSchemaChoice::__set_items(::System::Xml::Schema::XmlSchemaObjectCollection value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::XmlSchemaObjectCollection, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Xml::Schema::XmlSchemaObjectCollection>(value));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection ::System::Xml::Schema::XmlSchemaChoice::__get_items() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::XmlSchemaObjectCollection, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::System::Xml::Schema::XmlSchemaObjectCollection ::System::Xml::Schema::XmlSchemaChoice::get_Items()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaChoice>::get(),
                            "get_Items",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectCollection, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
