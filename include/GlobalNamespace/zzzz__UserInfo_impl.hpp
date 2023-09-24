#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__UserInfo__Platform::GlobalNamespace__UserInfo__Platform(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__UserInfo__Platform::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__UserInfo__Platform::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__UserInfo__Platform  GlobalNamespace::GlobalNamespace__UserInfo__Platform::Test{0};
constexpr GlobalNamespace::GlobalNamespace__UserInfo__Platform  GlobalNamespace::GlobalNamespace__UserInfo__Platform::Steam{1};
constexpr GlobalNamespace::GlobalNamespace__UserInfo__Platform  GlobalNamespace::GlobalNamespace__UserInfo__Platform::Oculus{2};
constexpr GlobalNamespace::GlobalNamespace__UserInfo__Platform  GlobalNamespace::GlobalNamespace__UserInfo__Platform::PS4{3};
constexpr GlobalNamespace::GlobalNamespace__UserInfo__Platform  GlobalNamespace::GlobalNamespace__UserInfo__Platform::PS5{4};
//  Writing Method size for method: GlobalNamespace::UserInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UserInfo::*)(GlobalNamespace::GlobalNamespace__UserInfo__Platform, ::StringW, ::StringW)>(&GlobalNamespace::UserInfo::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x221da98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UserInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__UserInfo__Platform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::UserInfo::__set_platform(GlobalNamespace::GlobalNamespace__UserInfo__Platform value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__UserInfo__Platform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__UserInfo__Platform>(value));
}
constexpr GlobalNamespace::GlobalNamespace__UserInfo__Platform GlobalNamespace::UserInfo::__get_platform() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__UserInfo__Platform, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UserInfo::__set_platformUserId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::UserInfo::__get_platformUserId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::UserInfo::__set_userName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::UserInfo::__get_userName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::UserInfo GlobalNamespace::UserInfo::New_ctor(GlobalNamespace::GlobalNamespace__UserInfo__Platform platform, ::StringW platformUserId, ::StringW userName)  {
GlobalNamespace::UserInfo o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::UserInfo>(platform, platformUserId, userName))};
return o;
}
 void GlobalNamespace::UserInfo::_ctor(GlobalNamespace::GlobalNamespace__UserInfo__Platform platform, ::StringW platformUserId, ::StringW userName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::UserInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__UserInfo__Platform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, platform, platformUserId, userName);
}
