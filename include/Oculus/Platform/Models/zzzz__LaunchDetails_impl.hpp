#pragma once
namespace {
#include "Oculus/Platform/Models/zzzz__LaunchDetails_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/zzzz__LaunchType_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LaunchDetails._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LaunchDetails::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::LaunchDetails::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x259f1f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchDetails>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Oculus::Platform::Models::LaunchDetails::__set_DeeplinkMessage(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Oculus::Platform::Models::LaunchDetails::__get_DeeplinkMessage() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::LaunchDetails::__set_DestinationApiName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Oculus::Platform::Models::LaunchDetails::__get_DestinationApiName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::LaunchDetails::__set_LaunchSource(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Oculus::Platform::Models::LaunchDetails::__get_LaunchSource() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::LaunchDetails::__set_LaunchType(::Oculus::Platform::LaunchType value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::LaunchType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::LaunchType>(value));
}
constexpr ::Oculus::Platform::LaunchType ::Oculus::Platform::Models::LaunchDetails::__get_LaunchType() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::LaunchType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::LaunchDetails::__set_RoomID(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::Oculus::Platform::Models::LaunchDetails::__get_RoomID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::LaunchDetails::__set_TrackingID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Oculus::Platform::Models::LaunchDetails::__get_TrackingID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::LaunchDetails::__set_UsersOptional(::Oculus::Platform::Models::UserList value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::UserList>(value));
}
constexpr ::Oculus::Platform::Models::UserList ::Oculus::Platform::Models::LaunchDetails::__get_UsersOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::LaunchDetails::__set_Users(::Oculus::Platform::Models::UserList value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::UserList, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::UserList>(value));
}
constexpr ::Oculus::Platform::Models::UserList ::Oculus::Platform::Models::LaunchDetails::__get_Users() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::UserList, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::Models::LaunchDetails::LaunchDetails(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LaunchDetails>(o))) {}
 void ::Oculus::Platform::Models::LaunchDetails::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LaunchDetails>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
} // end anonymous namespace
