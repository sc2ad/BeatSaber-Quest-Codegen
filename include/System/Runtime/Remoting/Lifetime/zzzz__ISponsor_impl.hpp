#pragma once
namespace {
#include "System/Runtime/Remoting/Lifetime/zzzz__ISponsor_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__ILease_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::ISponsor.Renewal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::ISponsor::*)(::System::Runtime::Remoting::Lifetime::ILease)>(&::System::Runtime::Remoting::Lifetime::ISponsor::Renewal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Runtime::Remoting::Lifetime::ISponsor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::ISponsor>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::System::TimeSpan ::System::Runtime::Remoting::Lifetime::ISponsor::Renewal(::System::Runtime::Remoting::Lifetime::ILease lease)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::ISponsor>::get(),
                            "Renewal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Lifetime::ILease>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method, lease);
}
} // end anonymous namespace
