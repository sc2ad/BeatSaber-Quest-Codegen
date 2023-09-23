#pragma once
#include "UnityOpus/zzzz__Decoder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityOpus/zzzz__NumChannels_def.hpp"
#include "UnityOpus/zzzz__SamplingFrequency_def.hpp"
//  Writing Method size for method: UnityOpus::Decoder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOpus::Decoder::*)(UnityOpus::SamplingFrequency, UnityOpus::NumChannels)>(&UnityOpus::Decoder::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x21d61b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityOpus::Decoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityOpus::SamplingFrequency>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityOpus::NumChannels>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityOpus::Decoder.Decode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityOpus::Decoder::*)(::ArrayW<uint8_t>, int32_t, ::ArrayW<float_t>, int32_t)>(&UnityOpus::Decoder::Decode)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x21d6398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityOpus::Decoder>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityOpus::Decoder.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOpus::Decoder::*)(bool)>(&UnityOpus::Decoder::Dispose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21d65d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityOpus::Decoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityOpus::Decoder>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityOpus::Decoder.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOpus::Decoder::*)()>(&UnityOpus::Decoder::Finalize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21d66d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityOpus::Decoder),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityOpus::Decoder>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityOpus::Decoder.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityOpus::Decoder::*)()>(&UnityOpus::Decoder::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x21d6774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityOpus::Decoder>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IDisposable
constexpr  UnityOpus::Decoder::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityOpus::Decoder::__set_decoder(::cordl_internals::intptr_t value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t UnityOpus::Decoder::__get_decoder() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityOpus::Decoder::__set_channels(UnityOpus::NumChannels value)  {
::cordl_internals::setInstanceField<UnityOpus::NumChannels, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityOpus::NumChannels>(value));
}
constexpr UnityOpus::NumChannels UnityOpus::Decoder::__get_channels() const {
return ::cordl_internals::getInstanceField<UnityOpus::NumChannels, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityOpus::Decoder::__set_softclipMem(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> UnityOpus::Decoder::__get_softclipMem() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityOpus::Decoder::__set_disposedValue(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityOpus::Decoder::__get_disposedValue() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "samplingFrequency", ty: "UnityOpus::SamplingFrequency", modifiers: "", def_value: None }, CppParam { name: "channels", ty: "UnityOpus::NumChannels", modifiers: "", def_value: None }]
 UnityOpus::Decoder::Decoder(UnityOpus::SamplingFrequency samplingFrequency, UnityOpus::NumChannels channels)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Decoder>(samplingFrequency, channels))) {}
 void UnityOpus::Decoder::_ctor(UnityOpus::SamplingFrequency samplingFrequency, UnityOpus::NumChannels channels)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityOpus::Decoder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityOpus::SamplingFrequency>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityOpus::NumChannels>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, samplingFrequency, channels);
}
/// @param decodeFec: int32_t (default: 0)
 int32_t UnityOpus::Decoder::Decode(::ArrayW<uint8_t> data, int32_t dataLength, ::ArrayW<float_t> pcm, int32_t decodeFec)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityOpus::Decoder>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, data, dataLength, pcm, decodeFec);
}
 void UnityOpus::Decoder::Dispose(bool disposing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityOpus::Decoder>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposing);
}
 void UnityOpus::Decoder::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityOpus::Decoder>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityOpus::Decoder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityOpus::Decoder>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
