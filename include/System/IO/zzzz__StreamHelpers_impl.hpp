#pragma once
#include "System/IO/zzzz__StreamHelpers_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: System::IO::StreamHelpers.ValidateCopyToArgs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IO::Stream, System::IO::Stream, int32_t)>(&System::IO::StreamHelpers::ValidateCopyToArgs)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2391358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::StreamHelpers>::get(),
                            "ValidateCopyToArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::IO::StreamHelpers::ValidateCopyToArgs(System::IO::Stream source, System::IO::Stream destination, int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::IO::StreamHelpers>::get(),
                            "ValidateCopyToArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, destination, bufferSize);
}
