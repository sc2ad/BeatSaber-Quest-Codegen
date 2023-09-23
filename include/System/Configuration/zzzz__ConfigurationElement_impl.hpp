#pragma once
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
//  Writing Method size for method: System::Configuration::ConfigurationElement.get_Properties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Configuration::ConfigurationPropertyCollection (System::Configuration::ConfigurationElement::*)()>(&System::Configuration::ConfigurationElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x267b3b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Configuration::ConfigurationElement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Configuration::ConfigurationElement>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Configuration::ConfigurationElement.IsModified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Configuration::ConfigurationElement::*)()>(&System::Configuration::ConfigurationElement::IsModified)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x267b3f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Configuration::ConfigurationElement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Configuration::ConfigurationElement>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Configuration::ConfigurationElement.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::ConfigurationElement::*)(System::Configuration::ConfigurationElement)>(&System::Configuration::ConfigurationElement::Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x267b428;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Configuration::ConfigurationElement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Configuration::ConfigurationElement>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Configuration::ConfigurationElement.ResetModified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::ConfigurationElement::*)()>(&System::Configuration::ConfigurationElement::ResetModified)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x267b460;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Configuration::ConfigurationElement),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Configuration::ConfigurationElement>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
 System::Configuration::ConfigurationPropertyCollection System::Configuration::ConfigurationElement::get_Properties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Configuration::ConfigurationElement>::get(),
                            "get_Properties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Configuration::ConfigurationPropertyCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Configuration::ConfigurationElement::IsModified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Configuration::ConfigurationElement>::get(),
                            "IsModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Configuration::ConfigurationElement::Reset(System::Configuration::ConfigurationElement parentElement)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Configuration::ConfigurationElement>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Configuration::ConfigurationElement>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parentElement);
}
 void System::Configuration::ConfigurationElement::ResetModified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Configuration::ConfigurationElement>::get(),
                            "ResetModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
