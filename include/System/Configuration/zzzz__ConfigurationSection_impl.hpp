#pragma once
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
namespace {
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationSaveMode_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
//  Writing Method size for method: ::System::Configuration::ConfigurationSection.DeserializeSection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Configuration::ConfigurationSection::*)(::System::Xml::XmlReader)>(&::System::Configuration::ConfigurationSection::DeserializeSection)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x267b498;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Configuration::ConfigurationSection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationSection.IsModified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Configuration::ConfigurationSection::*)()>(&::System::Configuration::ConfigurationSection::IsModified)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x267b4d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Configuration::ConfigurationSection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationSection.ResetModified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Configuration::ConfigurationSection::*)()>(&::System::Configuration::ConfigurationSection::ResetModified)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x267b508;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Configuration::ConfigurationSection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationSection.SerializeSection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Configuration::ConfigurationSection::*)(::System::Configuration::ConfigurationElement, ::StringW, ::System::Configuration::ConfigurationSaveMode)>(&::System::Configuration::ConfigurationSection::SerializeSection)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x267b540;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Configuration::ConfigurationSection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
 void ::System::Configuration::ConfigurationSection::DeserializeSection(::System::Xml::XmlReader reader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection>::get(),
                            "DeserializeSection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reader);
}
 bool ::System::Configuration::ConfigurationSection::IsModified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection>::get(),
                            "IsModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Configuration::ConfigurationSection::ResetModified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection>::get(),
                            "ResetModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Configuration::ConfigurationSection::SerializeSection(::System::Configuration::ConfigurationElement parentElement, ::StringW name, ::System::Configuration::ConfigurationSaveMode saveMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::ConfigurationSection>::get(),
                            "SerializeSection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Configuration::ConfigurationElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Configuration::ConfigurationSaveMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, parentElement, name, saveMode);
}
} // end anonymous namespace
