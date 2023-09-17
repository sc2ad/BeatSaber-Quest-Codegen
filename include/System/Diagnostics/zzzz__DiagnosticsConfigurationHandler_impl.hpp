#pragma once
namespace {
#include "System/Diagnostics/zzzz__DiagnosticsConfigurationHandler_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Configuration/zzzz__IConfigurationSectionHandler_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::DiagnosticsConfigurationHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Diagnostics::DiagnosticsConfigurationHandler::*)()>(&::System::Diagnostics::DiagnosticsConfigurationHandler::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x27b27f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DiagnosticsConfigurationHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::DiagnosticsConfigurationHandler.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Diagnostics::DiagnosticsConfigurationHandler::*)(::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType, ::System::Xml::XmlNode)>(&::System::Diagnostics::DiagnosticsConfigurationHandler::Create)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x27b282c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Diagnostics::DiagnosticsConfigurationHandler),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DiagnosticsConfigurationHandler>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Configuration::IConfigurationSectionHandler
constexpr  ::System::Diagnostics::DiagnosticsConfigurationHandler::operator ::System::Configuration::IConfigurationSectionHandler() const noexcept {
return ::System::Configuration::IConfigurationSectionHandler(::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Diagnostics::DiagnosticsConfigurationHandler::DiagnosticsConfigurationHandler()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DiagnosticsConfigurationHandler>())) {}
 void ::System::Diagnostics::DiagnosticsConfigurationHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DiagnosticsConfigurationHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Diagnostics::DiagnosticsConfigurationHandler::Create(::bs_hook::Il2CppWrapperType parent, ::bs_hook::Il2CppWrapperType configContext, ::System::Xml::XmlNode section)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::DiagnosticsConfigurationHandler>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, parent, configContext, section);
}
} // end anonymous namespace
