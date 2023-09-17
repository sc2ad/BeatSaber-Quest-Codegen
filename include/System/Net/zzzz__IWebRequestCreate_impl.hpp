#pragma once
namespace {
#include "System/Net/zzzz__IWebRequestCreate_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::IWebRequestCreate.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebRequest (::System::Net::IWebRequestCreate::*)(::System::Uri)>(&::System::Net::IWebRequestCreate::Create)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::IWebRequestCreate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IWebRequestCreate>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::System::Net::WebRequest ::System::Net::IWebRequestCreate::Create(::System::Uri uri)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::IWebRequestCreate>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequest, false>(const_cast<void*>(instance), ___internal_method, uri);
}
} // end anonymous namespace
