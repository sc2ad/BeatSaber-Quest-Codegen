#pragma once
namespace {
#include "GlobalNamespace/zzzz__BufferedAudioStream_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BufferedAudioStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedAudioStream::*)(::UnityEngine::AudioSource)>(&::GlobalNamespace::BufferedAudioStream::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2551c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedAudioStream.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedAudioStream::*)()>(&::GlobalNamespace::BufferedAudioStream::Update)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x2551d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedAudioStream.Stop
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedAudioStream::*)()>(&::GlobalNamespace::BufferedAudioStream::Stop)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2551ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedAudioStream.AddData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedAudioStream::*)(::ArrayW<float_t>)>(&::GlobalNamespace::BufferedAudioStream::AddData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2551efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream>::get(),
                            "AddData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BufferedAudioStream::__set_audio(::UnityEngine::AudioSource value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioSource, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::AudioSource>(value));
}
constexpr ::UnityEngine::AudioSource ::GlobalNamespace::BufferedAudioStream::__get_audio() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BufferedAudioStream::__set_audioBuffer(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::GlobalNamespace::BufferedAudioStream::__get_audioBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BufferedAudioStream::__set_writePos(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::BufferedAudioStream::__get_writePos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BufferedAudioStream::__set_playbackDelayRemaining(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BufferedAudioStream::__get_playbackDelayRemaining() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BufferedAudioStream::__set_remainingBufferTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::BufferedAudioStream::__get_remainingBufferTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "audio", ty: "::UnityEngine::AudioSource", modifiers: "", def_value: None }]
 ::GlobalNamespace::BufferedAudioStream::BufferedAudioStream(::UnityEngine::AudioSource audio)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BufferedAudioStream>(audio))) {}
 void ::GlobalNamespace::BufferedAudioStream::_ctor(::UnityEngine::AudioSource audio)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSource>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, audio);
}
 void ::GlobalNamespace::BufferedAudioStream::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BufferedAudioStream::Stop()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream>::get(),
                            "Stop",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BufferedAudioStream::AddData(::ArrayW<float_t> samples)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedAudioStream>::get(),
                            "AddData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, samples);
}
} // end anonymous namespace
