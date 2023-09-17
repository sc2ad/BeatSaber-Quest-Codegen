#pragma once
namespace {
#include "GlobalNamespace/zzzz__IStartSeekSongController_def.hpp"
#include "UnityEngine/zzzz__WaitUntil_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IStartSeekSongController.get_waitUntilIsReadyToStartTheSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::WaitUntil (::GlobalNamespace::IStartSeekSongController::*)()>(&::GlobalNamespace::IStartSeekSongController::get_waitUntilIsReadyToStartTheSong)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IStartSeekSongController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStartSeekSongController>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IStartSeekSongController.StartSong
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IStartSeekSongController::*)(float_t)>(&::GlobalNamespace::IStartSeekSongController::StartSong)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IStartSeekSongController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStartSeekSongController>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IStartSeekSongController.SeekTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IStartSeekSongController::*)(float_t)>(&::GlobalNamespace::IStartSeekSongController::SeekTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IStartSeekSongController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStartSeekSongController>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 ::UnityEngine::WaitUntil ::GlobalNamespace::IStartSeekSongController::get_waitUntilIsReadyToStartTheSong()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStartSeekSongController>::get(),
                            "get_waitUntilIsReadyToStartTheSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::WaitUntil, false>(const_cast<void*>(instance), ___internal_method);
}
/// @param offsetTime: float_t (default: 0)
 void ::GlobalNamespace::IStartSeekSongController::StartSong(float_t offsetTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStartSeekSongController>::get(),
                            "StartSong",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, offsetTime);
}
 void ::GlobalNamespace::IStartSeekSongController::SeekTo(float_t songTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStartSeekSongController>::get(),
                            "SeekTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, songTime);
}
} // end anonymous namespace
