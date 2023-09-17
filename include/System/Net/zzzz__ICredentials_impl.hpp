#pragma once
namespace {
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::ICredentials.GetCredential
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkCredential (::System::Net::ICredentials::*)(::System::Uri, ::StringW)>(&::System::Net::ICredentials::GetCredential)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::ICredentials),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ICredentials>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::System::Net::NetworkCredential ::System::Net::ICredentials::GetCredential(::System::Uri uri, ::StringW authType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ICredentials>::get(),
                            "GetCredential",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkCredential, false>(const_cast<void*>(instance), ___internal_method, uri, authType);
}
} // end anonymous namespace
