#pragma once
#include "System/Xml/zzzz__IValidationEventHandling_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: System::Xml::IValidationEventHandling.SendEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::IValidationEventHandling::*)(System::Exception, System::Xml::Schema::XmlSeverityType)>(&System::Xml::IValidationEventHandling::SendEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Xml::IValidationEventHandling),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::IValidationEventHandling>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void System::Xml::IValidationEventHandling::SendEvent(System::Exception exception, System::Xml::Schema::XmlSeverityType severity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Xml::IValidationEventHandling>::get(),
                            "SendEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Xml::Schema::XmlSeverityType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, exception, severity);
}
