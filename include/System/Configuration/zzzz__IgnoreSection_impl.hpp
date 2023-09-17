#pragma once
#include "System/Configuration/zzzz__ConfigurationSection_impl.hpp"
namespace {
#include "System/Configuration/zzzz__IgnoreSection_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationSaveMode_def.hpp"
//  Writing Method size for method: ::System::Configuration::IgnoreSection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Configuration::IgnoreSection::*)()>(&::System::Configuration::IgnoreSection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x267b57c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::IgnoreSection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IgnoreSection.get_Properties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationPropertyCollection (::System::Configuration::IgnoreSection::*)()>(&::System::Configuration::IgnoreSection::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x267b5b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Configuration::IgnoreSection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::IgnoreSection>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IgnoreSection.DeserializeSection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Configuration::IgnoreSection::*)(::System::Xml::XmlReader)>(&::System::Configuration::IgnoreSection::DeserializeSection)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x267b5ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Configuration::IgnoreSection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::IgnoreSection>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IgnoreSection.IsModified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Configuration::IgnoreSection::*)()>(&::System::Configuration::IgnoreSection::IsModified)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x267b624;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Configuration::IgnoreSection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::IgnoreSection>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IgnoreSection.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Configuration::IgnoreSection::*)(::System::Configuration::ConfigurationElement)>(&::System::Configuration::IgnoreSection::Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x267b65c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Configuration::IgnoreSection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::IgnoreSection>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IgnoreSection.ResetModified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Configuration::IgnoreSection::*)()>(&::System::Configuration::IgnoreSection::ResetModified)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x267b694;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Configuration::IgnoreSection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::IgnoreSection>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IgnoreSection.SerializeSection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Configuration::IgnoreSection::*)(::System::Configuration::ConfigurationElement, ::StringW, ::System::Configuration::ConfigurationSaveMode)>(&::System::Configuration::IgnoreSection::SerializeSection)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x267b6cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Configuration::IgnoreSection),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::IgnoreSection>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Configuration::IgnoreSection::IgnoreSection()  : ::System::Configuration::ConfigurationSection(THROW_UNLESS(::il2cpp_utils::New<IgnoreSection>())) {}
 void ::System::Configuration::IgnoreSection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::IgnoreSection>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Configuration::ConfigurationPropertyCollection ::System::Configuration::IgnoreSection::get_Properties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::IgnoreSection>::get(),
                            "get_Properties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Configuration::IgnoreSection::DeserializeSection(::System::Xml::XmlReader xmlReader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::IgnoreSection>::get(),
                            "DeserializeSection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xmlReader);
}
 bool ::System::Configuration::IgnoreSection::IsModified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::IgnoreSection>::get(),
                            "IsModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::System::Configuration::IgnoreSection::Reset(::System::Configuration::ConfigurationElement parentSection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::IgnoreSection>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Configuration::ConfigurationElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parentSection);
}
 void ::System::Configuration::IgnoreSection::ResetModified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::IgnoreSection>::get(),
                            "ResetModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Configuration::IgnoreSection::SerializeSection(::System::Configuration::ConfigurationElement parentSection, ::StringW name, ::System::Configuration::ConfigurationSaveMode saveMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Configuration::IgnoreSection>::get(),
                            "SerializeSection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Configuration::ConfigurationElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Configuration::ConfigurationSaveMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, parentSection, name, saveMode);
}
} // end anonymous namespace
