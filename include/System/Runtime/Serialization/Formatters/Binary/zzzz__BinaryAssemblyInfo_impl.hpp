#pragma once
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryAssemblyInfo_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::*)(::StringW)>(&System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2355728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::*)(::StringW, System::Reflection::Assembly)>(&System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2355750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo.GetAssembly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::Assembly (System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::*)()>(&System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::GetAssembly)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x235577c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo>::get(),
                            "GetAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::__set_assemblyString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::__get_assemblyString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::__set_assembly(System::Reflection::Assembly value)  {
::cordl_internals::setInstanceField<System::Reflection::Assembly, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Reflection::Assembly>(value));
}
constexpr System::Reflection::Assembly System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::__get_assembly() const {
return ::cordl_internals::getInstanceField<System::Reflection::Assembly, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::New_ctor(::StringW assemblyString)  {
System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo>(assemblyString))};
return o;
}
 void System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::_ctor(::StringW assemblyString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assemblyString);
}
 System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::New_ctor(::StringW assemblyString, System::Reflection::Assembly assembly)  {
System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo>(assemblyString, assembly))};
return o;
}
 void System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::_ctor(::StringW assemblyString, System::Reflection::Assembly assembly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Reflection::Assembly>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assemblyString, assembly);
}
 System::Reflection::Assembly System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::GetAssembly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo>::get(),
                            "GetAssembly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Reflection::Assembly, false>(const_cast<void*>(instance), ___internal_method);
}
