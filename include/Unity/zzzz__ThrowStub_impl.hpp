#pragma once
#include "System/zzzz__ObjectDisposedException_impl.hpp"
namespace {
#include "Unity/zzzz__ThrowStub_def.hpp"
//  Writing Method size for method: ::Unity::ThrowStub.ThrowNotSupportedException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::ThrowStub::ThrowNotSupportedException)> {
  constexpr static std::size_t size = 0x1040;
  constexpr static std::size_t addrs = 0x241ea84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::ThrowStub>::get(),
                            "ThrowNotSupportedException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::Unity::ThrowStub::ThrowNotSupportedException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::ThrowStub>::get(),
                            "ThrowNotSupportedException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
