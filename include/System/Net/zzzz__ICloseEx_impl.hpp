#pragma once
namespace {
#include "System/Net/zzzz__ICloseEx_def.hpp"
#include "System/Net/zzzz__CloseExState_def.hpp"
//  Writing Method size for method: ::System::Net::ICloseEx.CloseEx
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ICloseEx::*)(::System::Net::CloseExState)>(&::System::Net::ICloseEx::CloseEx)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Net::ICloseEx),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ICloseEx>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::System::Net::ICloseEx::CloseEx(::System::Net::CloseExState closeState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ICloseEx>::get(),
                            "CloseEx",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CloseExState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, closeState);
}
} // end anonymous namespace
