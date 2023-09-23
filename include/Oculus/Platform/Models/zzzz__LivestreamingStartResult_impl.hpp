#pragma once
#include "Oculus/Platform/Models/zzzz__LivestreamingStartResult_def.hpp"
#include "Oculus/Platform/zzzz__LivestreamingStartStatus_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::LivestreamingStartResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::LivestreamingStartResult::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::LivestreamingStartResult::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x259fffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::LivestreamingStartResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::LivestreamingStartResult::__set_StreamingResult(Oculus::Platform::LivestreamingStartStatus value)  {
::cordl_internals::setInstanceField<Oculus::Platform::LivestreamingStartStatus, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::LivestreamingStartStatus>(value));
}
constexpr Oculus::Platform::LivestreamingStartStatus Oculus::Platform::Models::LivestreamingStartResult::__get_StreamingResult() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::LivestreamingStartStatus, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 Oculus::Platform::Models::LivestreamingStartResult::LivestreamingStartResult(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<LivestreamingStartResult>(o))) {}
 void Oculus::Platform::Models::LivestreamingStartResult::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::LivestreamingStartResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
