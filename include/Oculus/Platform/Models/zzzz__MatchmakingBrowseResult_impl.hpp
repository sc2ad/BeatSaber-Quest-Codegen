#pragma once
#include "Oculus/Platform/Models/zzzz__MatchmakingBrowseResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__RoomList_def.hpp"
#include "Oculus/Platform/Models/zzzz__MatchmakingEnqueueResult_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::MatchmakingBrowseResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::MatchmakingBrowseResult::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::MatchmakingBrowseResult::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25a058c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::MatchmakingBrowseResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::MatchmakingBrowseResult::__set_EnqueueResult(Oculus::Platform::Models::MatchmakingEnqueueResult value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::MatchmakingEnqueueResult, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::MatchmakingEnqueueResult>(value));
}
constexpr Oculus::Platform::Models::MatchmakingEnqueueResult Oculus::Platform::Models::MatchmakingBrowseResult::__get_EnqueueResult() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::MatchmakingEnqueueResult, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::MatchmakingBrowseResult::__set_Rooms(Oculus::Platform::Models::RoomList value)  {
::cordl_internals::setInstanceField<Oculus::Platform::Models::RoomList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Oculus::Platform::Models::RoomList>(value));
}
constexpr Oculus::Platform::Models::RoomList Oculus::Platform::Models::MatchmakingBrowseResult::__get_Rooms() const {
return ::cordl_internals::getInstanceField<Oculus::Platform::Models::RoomList, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Oculus::Platform::Models::MatchmakingBrowseResult Oculus::Platform::Models::MatchmakingBrowseResult::New_ctor(::cordl_internals::intptr_t o)  {
Oculus::Platform::Models::MatchmakingBrowseResult o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::Models::MatchmakingBrowseResult>(o))};
return o;
}
 void Oculus::Platform::Models::MatchmakingBrowseResult::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::MatchmakingBrowseResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
