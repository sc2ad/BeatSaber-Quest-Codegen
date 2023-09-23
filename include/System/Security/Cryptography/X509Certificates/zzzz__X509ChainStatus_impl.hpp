#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatus_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatusFlags_def.hpp"
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainStatus._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainStatus::*)(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&System::Security::Cryptography::X509Certificates::X509ChainStatus::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27eec1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainStatus.get_Status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags (System::Security::Cryptography::X509Certificates::X509ChainStatus::*)()>(&System::Security::Cryptography::X509Certificates::X509ChainStatus::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f1588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainStatus>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainStatus.set_Status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainStatus::*)(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&System::Security::Cryptography::X509Certificates::X509ChainStatus::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f1590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainStatus>::get(),
                            "set_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainStatus.set_StatusInformation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::X509Certificates::X509ChainStatus::*)(::StringW)>(&System::Security::Cryptography::X509Certificates::X509ChainStatus::set_StatusInformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27f1598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainStatus>::get(),
                            "set_StatusInformation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::X509Certificates::X509ChainStatus.GetInformation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)>(&System::Security::Cryptography::X509Certificates::X509ChainStatus::GetInformation)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x27ed6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainStatus>::get(),
                            "GetInformation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "status", ty: "System::Security::Cryptography::X509Certificates::X509ChainStatusFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "info", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatus::X509ChainStatus(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags status, ::StringW info) noexcept : ::bs_hook::ValueTypeWrapper() {this->status = status;
this->info = info;
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainStatus::__set_status(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, 0x0>(this->__instance, std::forward<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509ChainStatusFlags System::Security::Cryptography::X509Certificates::X509ChainStatus::__get_status() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, 0x0>(this->__instance);
}
constexpr void System::Security::Cryptography::X509Certificates::X509ChainStatus::__set_info(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Security::Cryptography::X509Certificates::X509ChainStatus::__get_info() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
 void System::Security::Cryptography::X509Certificates::X509ChainStatus::_ctor(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, flag);
}
 System::Security::Cryptography::X509Certificates::X509ChainStatusFlags System::Security::Cryptography::X509Certificates::X509ChainStatus::get_Status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainStatus>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void System::Security::Cryptography::X509Certificates::X509ChainStatus::set_Status(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainStatus>::get(),
                            "set_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void System::Security::Cryptography::X509Certificates::X509ChainStatus::set_StatusInformation(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainStatus>::get(),
                            "set_StatusInformation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 ::StringW System::Security::Cryptography::X509Certificates::X509ChainStatus::GetInformation(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::X509Certificates::X509ChainStatus>::get(),
                            "GetInformation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainStatusFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, flags);
}
