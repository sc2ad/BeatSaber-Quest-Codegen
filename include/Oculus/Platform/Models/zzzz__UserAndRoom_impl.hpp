#pragma once
namespace {
#include "Oculus/Platform/Models/zzzz__UserAndRoom_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::UserAndRoom._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::UserAndRoom::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::UserAndRoom::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x25a3540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserAndRoom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Oculus::Platform::Models::UserAndRoom::__set_RoomOptional(::Oculus::Platform::Models::Room value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::Room, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::Room>(value));
}
constexpr ::Oculus::Platform::Models::Room ::Oculus::Platform::Models::UserAndRoom::__get_RoomOptional() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Room, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::UserAndRoom::__set_Room(::Oculus::Platform::Models::Room value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::Room, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::Room>(value));
}
constexpr ::Oculus::Platform::Models::Room ::Oculus::Platform::Models::UserAndRoom::__get_Room() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Room, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::UserAndRoom::__set_User(::Oculus::Platform::Models::User value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::User, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::User>(value));
}
constexpr ::Oculus::Platform::Models::User ::Oculus::Platform::Models::UserAndRoom::__get_User() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::User, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::Models::UserAndRoom::UserAndRoom(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UserAndRoom>(o))) {}
 void ::Oculus::Platform::Models::UserAndRoom::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::UserAndRoom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
} // end anonymous namespace
