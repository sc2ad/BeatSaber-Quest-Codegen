#pragma once
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_impl.hpp"
#include "System/Security/Cryptography/zzzz__AesTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__Aes_def.hpp"
//  Writing Method size for method: System::Security::Cryptography::AesTransform._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesTransform::*)(System::Security::Cryptography::Aes, bool, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::AesTransform::_ctor)> {
  constexpr static std::size_t size = 0x6f4;
  constexpr static std::size_t addrs = 0x267c0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::Aes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::AesTransform.ECB
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::AesTransform::ECB)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x267cb08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::AesTransform),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::AesTransform.SubByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (System::Security::Cryptography::AesTransform::*)(uint32_t)>(&System::Security::Cryptography::AesTransform::SubByte)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x267ca44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get(),
                            "SubByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::AesTransform.Encrypt128
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint32_t>)>(&System::Security::Cryptography::AesTransform::Encrypt128)> {
  constexpr static std::size_t size = 0x1e2c;
  constexpr static std::size_t addrs = 0x267cb1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get(),
                            "Encrypt128",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::AesTransform.Decrypt128
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::AesTransform::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint32_t>)>(&System::Security::Cryptography::AesTransform::Decrypt128)> {
  constexpr static std::size_t size = 0x1df0;
  constexpr static std::size_t addrs = 0x267e948;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get(),
                            "Decrypt128",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::Cryptography::AesTransform::__set_expandedKey(::ArrayW<uint32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint32_t>>(value));
}
constexpr ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::__get_expandedKey() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::AesTransform::__set_Nk(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::AesTransform::__get_Nk() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Security::Cryptography::AesTransform::__set_Nr(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Security::Cryptography::AesTransform::__get_Nr() const {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Security::Cryptography::AesTransform::__set_Rcon(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "Rcon", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::__get_Rcon()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "Rcon", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>();
}
 void System::Security::Cryptography::AesTransform::__set_SBox(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "SBox", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> System::Security::Cryptography::AesTransform::__get_SBox()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "SBox", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>();
}
 void System::Security::Cryptography::AesTransform::__set_iSBox(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "iSBox", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> System::Security::Cryptography::AesTransform::__get_iSBox()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "iSBox", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>();
}
 void System::Security::Cryptography::AesTransform::__set_T0(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "T0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::__get_T0()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "T0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>();
}
 void System::Security::Cryptography::AesTransform::__set_T1(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "T1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::__get_T1()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "T1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>();
}
 void System::Security::Cryptography::AesTransform::__set_T2(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "T2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::__get_T2()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "T2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>();
}
 void System::Security::Cryptography::AesTransform::__set_T3(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "T3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::__get_T3()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "T3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>();
}
 void System::Security::Cryptography::AesTransform::__set_iT0(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "iT0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::__get_iT0()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "iT0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>();
}
 void System::Security::Cryptography::AesTransform::__set_iT1(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "iT1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::__get_iT1()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "iT1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>();
}
 void System::Security::Cryptography::AesTransform::__set_iT2(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "iT2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::__get_iT2()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "iT2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>();
}
 void System::Security::Cryptography::AesTransform::__set_iT3(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "iT3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> System::Security::Cryptography::AesTransform::__get_iT3()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "iT3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get>();
}
 System::Security::Cryptography::AesTransform System::Security::Cryptography::AesTransform::New_ctor(System::Security::Cryptography::Aes algo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv)  {
System::Security::Cryptography::AesTransform o{THROW_UNLESS(::il2cpp_utils::New<System::Security::Cryptography::AesTransform>(algo, encryption, key, iv))};
return o;
}
 void System::Security::Cryptography::AesTransform::_ctor(System::Security::Cryptography::Aes algo, bool encryption, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> iv)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::Aes>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, algo, encryption, key, iv);
}
 void System::Security::Cryptography::AesTransform::ECB(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get(),
                            "ECB",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input, output);
}
 uint32_t System::Security::Cryptography::AesTransform::SubByte(uint32_t a)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get(),
                            "SubByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(instance), ___internal_method, a);
}
 void System::Security::Cryptography::AesTransform::Encrypt128(::ArrayW<uint8_t> indata, ::ArrayW<uint8_t> outdata, ::ArrayW<uint32_t> ekey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get(),
                            "Encrypt128",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indata, outdata, ekey);
}
 void System::Security::Cryptography::AesTransform::Decrypt128(::ArrayW<uint8_t> indata, ::ArrayW<uint8_t> outdata, ::ArrayW<uint32_t> ekey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::AesTransform>::get(),
                            "Decrypt128",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, indata, outdata, ekey);
}
