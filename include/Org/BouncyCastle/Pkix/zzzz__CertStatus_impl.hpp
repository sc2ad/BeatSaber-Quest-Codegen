#pragma once
#include "Org/BouncyCastle/Pkix/zzzz__CertStatus_def.hpp"
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeObject_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Pkix::CertStatus.get_RevocationDate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Utilities::Date::DateTimeObject (Org::BouncyCastle::Pkix::CertStatus::*)()>(&Org::BouncyCastle::Pkix::CertStatus::get_RevocationDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105c584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::CertStatus>::get(),
                            "get_RevocationDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::CertStatus.set_RevocationDate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::CertStatus::*)(Org::BouncyCastle::Utilities::Date::DateTimeObject)>(&Org::BouncyCastle::Pkix::CertStatus::set_RevocationDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105c58c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::CertStatus>::get(),
                            "set_RevocationDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Date::DateTimeObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::CertStatus.get_Status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Pkix::CertStatus::*)()>(&Org::BouncyCastle::Pkix::CertStatus::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105c594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::CertStatus>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::CertStatus.set_Status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::CertStatus::*)(int32_t)>(&Org::BouncyCastle::Pkix::CertStatus::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105c59c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::CertStatus>::get(),
                            "set_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Pkix::CertStatus._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Pkix::CertStatus::*)()>(&Org::BouncyCastle::Pkix::CertStatus::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x105c5a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::CertStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Pkix::CertStatus::__set_status(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Pkix::CertStatus::__get_status() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Pkix::CertStatus::__set_revocationDate(Org::BouncyCastle::Utilities::Date::DateTimeObject value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Utilities::Date::DateTimeObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Utilities::Date::DateTimeObject>(value));
}
constexpr Org::BouncyCastle::Utilities::Date::DateTimeObject Org::BouncyCastle::Pkix::CertStatus::__get_revocationDate() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Utilities::Date::DateTimeObject, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Utilities::Date::DateTimeObject Org::BouncyCastle::Pkix::CertStatus::get_RevocationDate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::CertStatus>::get(),
                            "get_RevocationDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Utilities::Date::DateTimeObject, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Pkix::CertStatus::set_RevocationDate(Org::BouncyCastle::Utilities::Date::DateTimeObject value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::CertStatus>::get(),
                            "set_RevocationDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Utilities::Date::DateTimeObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t Org::BouncyCastle::Pkix::CertStatus::get_Status()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::CertStatus>::get(),
                            "get_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Pkix::CertStatus::set_Status(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::CertStatus>::get(),
                            "set_Status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 Org::BouncyCastle::Pkix::CertStatus::CertStatus()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CertStatus>())) {}
 void Org::BouncyCastle::Pkix::CertStatus::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Pkix::CertStatus>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
