#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaObject_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
//  Writing Method size for method: System::Xml::Schema::XmlSchemaAnnotated._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaAnnotated::*)()>(&System::Xml::Schema::XmlSchemaAnnotated::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2733758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlSchemaAnnotated>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Xml::Schema::XmlSchemaAnnotated System::Xml::Schema::XmlSchemaAnnotated::New_ctor()  {
System::Xml::Schema::XmlSchemaAnnotated o{THROW_UNLESS(::il2cpp_utils::New<System::Xml::Schema::XmlSchemaAnnotated>())};
return o;
}
 void System::Xml::Schema::XmlSchemaAnnotated::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::Schema::XmlSchemaAnnotated>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
