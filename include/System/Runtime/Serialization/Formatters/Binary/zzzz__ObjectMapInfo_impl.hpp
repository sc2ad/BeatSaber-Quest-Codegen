#pragma once
namespace {
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectMapInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::*)(int32_t, int32_t, ::ArrayW<::StringW>, ::ArrayW<::System::Type>)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x235af98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo.isCompatible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::*)(int32_t, ::ArrayW<::StringW>, ::ArrayW<::System::Type>)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::isCompatible)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x235ae5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo>::get(),
                            "isCompatible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__set_objectId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__get_objectId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__set_numMembers(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__get_numMembers() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__set_memberNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__get_memberNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__set_memberTypes(::ArrayW<::System::Type> value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Type>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::System::Type>>(value));
}
constexpr ::ArrayW<::System::Type> ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::__get_memberTypes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Type>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "objectId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "numMembers", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "memberNames", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "memberTypes", ty: "::ArrayW<::System::Type>", modifiers: "", def_value: None }]
 ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::ObjectMapInfo(int32_t objectId, int32_t numMembers, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Type> memberTypes)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ObjectMapInfo>(objectId, numMembers, memberNames, memberTypes))) {}
 void ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::_ctor(int32_t objectId, int32_t numMembers, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Type> memberTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, objectId, numMembers, memberNames, memberTypes);
}
 bool ::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo::isCompatible(int32_t numMembers, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Type> memberTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectMapInfo>::get(),
                            "isCompatible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Type>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, numMembers, memberNames, memberTypes);
}
} // end anonymous namespace
