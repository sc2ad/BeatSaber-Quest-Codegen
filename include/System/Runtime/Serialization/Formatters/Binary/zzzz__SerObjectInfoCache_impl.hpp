#pragma once
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoCache_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::*)(::StringW, ::StringW, bool)>(&System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x235f0bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::*)(System::Type)>(&System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x235f0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_fullTypeName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_fullTypeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_assemblyString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_assemblyString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_hasTypeForwardedFrom(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_hasTypeForwardedFrom() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_memberInfos(::ArrayW<System::Reflection::MemberInfo> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Reflection::MemberInfo>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Reflection::MemberInfo>>(value));
}
constexpr ::ArrayW<System::Reflection::MemberInfo> System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_memberInfos() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Reflection::MemberInfo>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_memberNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_memberNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_memberTypes(::ArrayW<System::Type> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Type>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Type>>(value));
}
constexpr ::ArrayW<System::Type> System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_memberTypes() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Type>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::New_ctor(::StringW typeName, ::StringW assemblyName, bool hasTypeForwardedFrom)  {
System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache>(typeName, assemblyName, hasTypeForwardedFrom))};
return o;
}
 void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::_ctor(::StringW typeName, ::StringW assemblyName, bool hasTypeForwardedFrom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, typeName, assemblyName, hasTypeForwardedFrom);
}
 System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::New_ctor(System::Type type)  {
System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache>(type))};
return o;
}
 void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::_ctor(System::Type type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type);
}
