#pragma once
namespace {
#include "GlobalNamespace/zzzz__TestInvitePlatformHandler_def.hpp"
#include "GlobalNamespace/zzzz__IInvitePlatformHandler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestInvitePlatformHandler.get_isSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::TestInvitePlatformHandler::*)()>(&::GlobalNamespace::TestInvitePlatformHandler::get_isSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f30e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestInvitePlatformHandler>::get(),
                            "get_isSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestInvitePlatformHandler.OpenInvitePanel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestInvitePlatformHandler::*)()>(&::GlobalNamespace::TestInvitePlatformHandler::OpenInvitePanel)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x21f30e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestInvitePlatformHandler>::get(),
                            "OpenInvitePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestInvitePlatformHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestInvitePlatformHandler::*)()>(&::GlobalNamespace::TestInvitePlatformHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f3150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestInvitePlatformHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IInvitePlatformHandler
constexpr  ::GlobalNamespace::TestInvitePlatformHandler::operator ::GlobalNamespace::IInvitePlatformHandler() const noexcept {
return ::GlobalNamespace::IInvitePlatformHandler(::bs_hook::Il2CppWrapperType::instance);
}
 bool ::GlobalNamespace::TestInvitePlatformHandler::get_isSupported()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestInvitePlatformHandler>::get(),
                            "get_isSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::TestInvitePlatformHandler::OpenInvitePanel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestInvitePlatformHandler>::get(),
                            "OpenInvitePanel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::TestInvitePlatformHandler::TestInvitePlatformHandler()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TestInvitePlatformHandler>())) {}
 void ::GlobalNamespace::TestInvitePlatformHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestInvitePlatformHandler>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
