#pragma once
namespace {
#include "System/Net/zzzz__NclUtilities_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Net/zzzz__IPHostEntry_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
//  Writing Method size for method: ::System::Net::NclUtilities.IsFatal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Exception)>(&::System::Net::NclUtilities::IsFatal)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x280c05c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities>::get(),
                            "IsFatal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.IsAddressLocal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::IPAddress)>(&::System::Net::NclUtilities::IsAddressLocal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x280c11c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities>::get(),
                            "IsAddressLocal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.GetLocalHost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPHostEntry (*)()>(&::System::Net::NclUtilities::GetLocalHost)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x280c664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities>::get(),
                            "GetLocalHost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.get_LocalAddresses
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::IPAddress> (*)()>(&::System::Net::NclUtilities::get_LocalAddresses)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x280c1a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities>::get(),
                            "get_LocalAddresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NclUtilities.get_LocalAddressesLock
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)()>(&::System::Net::NclUtilities::get_LocalAddressesLock)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x280c67c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities>::get(),
                            "get_LocalAddressesLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::System::Net::NclUtilities::__set__LocalAddresses(::ArrayW<::System::Net::IPAddress> value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Net::IPAddress>, "_LocalAddresses", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities>::get>(std::forward<::ArrayW<::System::Net::IPAddress>>(value));
}
 ::ArrayW<::System::Net::IPAddress> ::System::Net::NclUtilities::__get__LocalAddresses()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Net::IPAddress>, "_LocalAddresses", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities>::get>();
}
 void ::System::Net::NclUtilities::__set__LocalAddressesLock(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "_LocalAddressesLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType ::System::Net::NclUtilities::__get__LocalAddressesLock()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "_LocalAddressesLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities>::get>();
}
 void ::System::Net::NclUtilities::__set__LocalDomainName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "_LocalDomainName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities>::get>(std::forward<::StringW>(value));
}
 ::StringW ::System::Net::NclUtilities::__get__LocalDomainName()  {
return ::cordl_internals::getStaticField<::StringW, "_LocalDomainName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities>::get>();
}
 bool ::System::Net::NclUtilities::IsFatal(::System::Exception exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities>::get(),
                            "IsFatal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, exception);
}
 bool ::System::Net::NclUtilities::IsAddressLocal(::System::Net::IPAddress ipAddress)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities>::get(),
                            "IsAddressLocal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ipAddress);
}
 ::System::Net::IPHostEntry ::System::Net::NclUtilities::GetLocalHost()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities>::get(),
                            "GetLocalHost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPHostEntry, false>(nullptr, ___internal_method);
}
 ::ArrayW<::System::Net::IPAddress> ::System::Net::NclUtilities::get_LocalAddresses()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities>::get(),
                            "get_LocalAddresses",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::IPAddress>, false>(nullptr, ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::Net::NclUtilities::get_LocalAddressesLock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NclUtilities>::get(),
                            "get_LocalAddressesLock",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
