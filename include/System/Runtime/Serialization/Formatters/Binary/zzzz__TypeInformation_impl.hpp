#pragma once
namespace {
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__TypeInformation_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::TypeInformation.get_FullTypeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::Formatters::Binary::TypeInformation::*)()>(&::System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_FullTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x235f184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation>::get(),
                            "get_FullTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::TypeInformation.get_AssemblyString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::Formatters::Binary::TypeInformation::*)()>(&::System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_AssemblyString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x235f18c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation>::get(),
                            "get_AssemblyString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::TypeInformation.get_HasTypeForwardedFrom
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::TypeInformation::*)()>(&::System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_HasTypeForwardedFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x235f194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation>::get(),
                            "get_HasTypeForwardedFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::TypeInformation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::TypeInformation::*)(::StringW, ::StringW, bool)>(&::System::Runtime::Serialization::Formatters::Binary::TypeInformation::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x235f19c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::Serialization::Formatters::Binary::TypeInformation::__set_fullTypeName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Runtime::Serialization::Formatters::Binary::TypeInformation::__get_fullTypeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::TypeInformation::__set_assemblyString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Runtime::Serialization::Formatters::Binary::TypeInformation::__get_assemblyString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::TypeInformation::__set_hasTypeForwardedFrom(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Runtime::Serialization::Formatters::Binary::TypeInformation::__get_hasTypeForwardedFrom() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::StringW ::System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_FullTypeName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation>::get(),
                            "get_FullTypeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_AssemblyString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation>::get(),
                            "get_AssemblyString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::Runtime::Serialization::Formatters::Binary::TypeInformation::get_HasTypeForwardedFrom()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation>::get(),
                            "get_HasTypeForwardedFrom",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "fullTypeName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assemblyString", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hasTypeForwardedFrom", ty: "bool", modifiers: "", def_value: None }]
 ::System::Runtime::Serialization::Formatters::Binary::TypeInformation::TypeInformation(::StringW fullTypeName, ::StringW assemblyString, bool hasTypeForwardedFrom)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TypeInformation>(fullTypeName, assemblyString, hasTypeForwardedFrom))) {}
 void ::System::Runtime::Serialization::Formatters::Binary::TypeInformation::_ctor(::StringW fullTypeName, ::StringW assemblyString, bool hasTypeForwardedFrom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::TypeInformation>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fullTypeName, assemblyString, hasTypeForwardedFrom);
}
} // end anonymous namespace
