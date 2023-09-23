#pragma once
#include "GlobalNamespace/zzzz__SecureRandomProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__RNGCryptoServiceProvider_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::GetBytes)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xdc96b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState.GetByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::*)()>(&GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::GetByte)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xdc97d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState>::get(),
                            "GetByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState.FillBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::*)()>(&GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::FillBuffer)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xdc9a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState>::get(),
                            "FillBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::*)()>(&GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xdc99e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::__set__random(System::Security::Cryptography::RNGCryptoServiceProvider value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::RNGCryptoServiceProvider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::RNGCryptoServiceProvider>(value));
}
constexpr System::Security::Cryptography::RNGCryptoServiceProvider GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::__get__random() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::RNGCryptoServiceProvider, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::__set__randomBuffer0(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::__get__randomBuffer0() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::__set__randomBuffer1(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::__get__randomBuffer1() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::__set__index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::__get__index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::GetBytes(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, length);
}
 uint8_t GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::GetByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState>::get(),
                            "GetByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::FillBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState>::get(),
                            "FillBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::GlobalNamespace__SecureRandomProvider__SecureRandomState()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__SecureRandomProvider__SecureRandomState>())) {}
 void GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::SecureRandomProvider.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(int32_t)>(&GlobalNamespace::SecureRandomProvider::GetBytes)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xdc9610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SecureRandomProvider>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SecureRandomProvider.GetByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)()>(&GlobalNamespace::SecureRandomProvider::GetByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xdc9770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SecureRandomProvider>::get(),
                            "GetByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SecureRandomProvider.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&GlobalNamespace::SecureRandomProvider::GetBytes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xdc9878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SecureRandomProvider>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SecureRandomProvider.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>)>(&GlobalNamespace::SecureRandomProvider::GetBytes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xdc98f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SecureRandomProvider>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::SecureRandomProvider::__set__secureRandomState(GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState, "_secureRandomState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SecureRandomProvider>::get>(std::forward<GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState>(value));
}
 GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState GlobalNamespace::SecureRandomProvider::__get__secureRandomState()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__SecureRandomProvider__SecureRandomState, "_secureRandomState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SecureRandomProvider>::get>();
}
 ::ArrayW<uint8_t> GlobalNamespace::SecureRandomProvider::GetBytes(int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SecureRandomProvider>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, length);
}
 uint8_t GlobalNamespace::SecureRandomProvider::GetByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SecureRandomProvider>::get(),
                            "GetByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::SecureRandomProvider::GetBytes(::ArrayW<uint8_t> buffer, int32_t offset, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SecureRandomProvider>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, offset, length);
}
 void GlobalNamespace::SecureRandomProvider::GetBytes(::ArrayW<uint8_t> buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SecureRandomProvider>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer);
}
