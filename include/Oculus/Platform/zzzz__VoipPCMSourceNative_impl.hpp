#pragma once
#include "Oculus/Platform/zzzz__VoipPCMSourceNative_def.hpp"
#include "Oculus/Platform/zzzz__IVoipPCMSource_def.hpp"
//  Writing Method size for method: Oculus::Platform::VoipPCMSourceNative.GetPCM
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Oculus::Platform::VoipPCMSourceNative::*)(::ArrayW<float_t>, int32_t)>(&Oculus::Platform::VoipPCMSourceNative::GetPCM)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x259b5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::VoipPCMSourceNative>::get(),
                            "GetPCM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::VoipPCMSourceNative.SetSenderID
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::VoipPCMSourceNative::*)(uint64_t)>(&Oculus::Platform::VoipPCMSourceNative::SetSenderID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259b684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::VoipPCMSourceNative>::get(),
                            "SetSenderID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::VoipPCMSourceNative.PeekSizeElements
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Oculus::Platform::VoipPCMSourceNative::*)()>(&Oculus::Platform::VoipPCMSourceNative::PeekSizeElements)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x259b68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::VoipPCMSourceNative>::get(),
                            "PeekSizeElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::VoipPCMSourceNative.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::VoipPCMSourceNative::*)()>(&Oculus::Platform::VoipPCMSourceNative::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x259b720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::VoipPCMSourceNative>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Oculus::Platform::VoipPCMSourceNative._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::VoipPCMSourceNative::*)()>(&Oculus::Platform::VoipPCMSourceNative::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x259aa74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::VoipPCMSourceNative>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Oculus::Platform::IVoipPCMSource
constexpr  Oculus::Platform::VoipPCMSourceNative::operator Oculus::Platform::IVoipPCMSource() const noexcept {
return Oculus::Platform::IVoipPCMSource(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::VoipPCMSourceNative::__set_senderID(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint64_t>(value));
}
constexpr uint64_t Oculus::Platform::VoipPCMSourceNative::__get_senderID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t Oculus::Platform::VoipPCMSourceNative::GetPCM(::ArrayW<float_t> dest, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::VoipPCMSourceNative>::get(),
                            "GetPCM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, dest, length);
}
 void Oculus::Platform::VoipPCMSourceNative::SetSenderID(uint64_t senderID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::VoipPCMSourceNative>::get(),
                            "SetSenderID",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, senderID);
}
 int32_t Oculus::Platform::VoipPCMSourceNative::PeekSizeElements()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::VoipPCMSourceNative>::get(),
                            "PeekSizeElements",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void Oculus::Platform::VoipPCMSourceNative::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::VoipPCMSourceNative>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 Oculus::Platform::VoipPCMSourceNative::VoipPCMSourceNative()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<VoipPCMSourceNative>())) {}
 void Oculus::Platform::VoipPCMSourceNative::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::VoipPCMSourceNative>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
