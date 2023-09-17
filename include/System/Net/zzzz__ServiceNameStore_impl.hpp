#pragma once
namespace {
#include "System/Net/zzzz__ServiceNameStore_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ServiceNameCollection_def.hpp"
//  Writing Method size for method: ::System::Net::ServiceNameStore._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServiceNameStore::*)()>(&::System::Net::ServiceNameStore::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28171e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServiceNameStore>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Net::ServiceNameStore::__set_serviceNames(::System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr ::System::Collections::Generic::List_1<::StringW> ::System::Net::ServiceNameStore::__get_serviceNames() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Net::ServiceNameStore::__set_serviceNameCollection(::System::Security::Authentication::ExtendedProtection::ServiceNameCollection value)  {
::cordl_internals::setInstanceField<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection>(value));
}
constexpr ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection ::System::Net::ServiceNameStore::__get_serviceNameCollection() const {
return ::cordl_internals::getInstanceField<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::System::Net::ServiceNameStore::ServiceNameStore()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ServiceNameStore>())) {}
 void ::System::Net::ServiceNameStore::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServiceNameStore>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
