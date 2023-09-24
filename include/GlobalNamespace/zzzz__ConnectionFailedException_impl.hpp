#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedException_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
//  Writing Method size for method: GlobalNamespace::ConnectionFailedException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectionFailedException::*)(GlobalNamespace::ConnectionFailedReason)>(&GlobalNamespace::ConnectionFailedException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xda533c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectionFailedException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ConnectionFailedException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConnectionFailedException::*)(GlobalNamespace::ConnectionFailedReason, ::StringW)>(&GlobalNamespace::ConnectionFailedException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xda53a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectionFailedException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ConnectionFailedException::__set_reason(GlobalNamespace::ConnectionFailedReason value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ConnectionFailedReason, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ConnectionFailedReason>(value));
}
constexpr GlobalNamespace::ConnectionFailedReason GlobalNamespace::ConnectionFailedException::__get_reason() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ConnectionFailedReason, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::ConnectionFailedException GlobalNamespace::ConnectionFailedException::New_ctor(GlobalNamespace::ConnectionFailedReason reason)  {
GlobalNamespace::ConnectionFailedException o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::ConnectionFailedException>(reason))};
return o;
}
 void GlobalNamespace::ConnectionFailedException::_ctor(GlobalNamespace::ConnectionFailedReason reason)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectionFailedException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reason);
}
 GlobalNamespace::ConnectionFailedException GlobalNamespace::ConnectionFailedException::New_ctor(GlobalNamespace::ConnectionFailedReason reason, ::StringW message)  {
GlobalNamespace::ConnectionFailedException o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::ConnectionFailedException>(reason, message))};
return o;
}
 void GlobalNamespace::ConnectionFailedException::_ctor(GlobalNamespace::ConnectionFailedReason reason, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ConnectionFailedException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ConnectionFailedReason>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, reason, message);
}
