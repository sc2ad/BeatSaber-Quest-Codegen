#pragma once
namespace {
#include "System/Threading/zzzz___ThreadPoolWaitCallback_def.hpp"
//  Writing Method size for method: ::System::Threading::_ThreadPoolWaitCallback.PerformWaitCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Threading::_ThreadPoolWaitCallback::PerformWaitCallback)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24aedb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::_ThreadPoolWaitCallback>::get(),
                            "PerformWaitCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 bool ::System::Threading::_ThreadPoolWaitCallback::PerformWaitCallback()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::_ThreadPoolWaitCallback>::get(),
                            "PerformWaitCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
