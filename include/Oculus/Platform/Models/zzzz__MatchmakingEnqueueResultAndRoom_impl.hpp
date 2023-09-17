#pragma once
namespace {
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResultAndRoom_def.hpp"
#include "Oculus/Platform/Models/zzzz__Room_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25a0d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::__set_MatchmakingEnqueueResult(::Oculus::Platform::Models::MatchmakingEnqueueResult value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::MatchmakingEnqueueResult, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::MatchmakingEnqueueResult>(value));
}
constexpr ::Oculus::Platform::Models::MatchmakingEnqueueResult ::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::__get_MatchmakingEnqueueResult() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::MatchmakingEnqueueResult, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::__set_Room(::Oculus::Platform::Models::Room value)  {
::cordl_internals::setInstanceField<::Oculus::Platform::Models::Room, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Oculus::Platform::Models::Room>(value));
}
constexpr ::Oculus::Platform::Models::Room ::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::__get_Room() const {
return ::cordl_internals::getInstanceField<::Oculus::Platform::Models::Room, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "o", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::MatchmakingEnqueueResultAndRoom(::cordl_internals::intptr_t o)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MatchmakingEnqueueResultAndRoom>(o))) {}
 void ::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
} // end anonymous namespace
