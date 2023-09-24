#pragma once
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__RC4_def.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_def.hpp"
//  Writing Method size for method: Mono::Security::Cryptography::RC4._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::RC4::*)()>(&Mono::Security::Cryptography::RC4::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2295d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::RC4>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Cryptography::RC4.get_IV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::RC4::*)()>(&Mono::Security::Cryptography::RC4::get_IV)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x229a87c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Security::Cryptography::RC4),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::RC4>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Cryptography::RC4.set_IV
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::RC4::*)(::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::RC4::set_IV)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x229a8c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Security::Cryptography::RC4),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::RC4>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Cryptography::RC4.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Cryptography::RC4 (*)()>(&Mono::Security::Cryptography::RC4::Create)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x229a8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::RC4>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Mono::Security::Cryptography::RC4::__set_s_legalBlockSizes(::ArrayW<System::Security::Cryptography::KeySizes> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Security::Cryptography::KeySizes>, "s_legalBlockSizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::RC4>::get>(std::forward<::ArrayW<System::Security::Cryptography::KeySizes>>(value));
}
 ::ArrayW<System::Security::Cryptography::KeySizes> Mono::Security::Cryptography::RC4::__get_s_legalBlockSizes()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Security::Cryptography::KeySizes>, "s_legalBlockSizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::RC4>::get>();
}
 void Mono::Security::Cryptography::RC4::__set_s_legalKeySizes(::ArrayW<System::Security::Cryptography::KeySizes> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Security::Cryptography::KeySizes>, "s_legalKeySizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::RC4>::get>(std::forward<::ArrayW<System::Security::Cryptography::KeySizes>>(value));
}
 ::ArrayW<System::Security::Cryptography::KeySizes> Mono::Security::Cryptography::RC4::__get_s_legalKeySizes()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Security::Cryptography::KeySizes>, "s_legalKeySizes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::RC4>::get>();
}
 Mono::Security::Cryptography::RC4 Mono::Security::Cryptography::RC4::New_ctor()  {
Mono::Security::Cryptography::RC4 o{THROW_UNLESS(::il2cpp_utils::New<Mono::Security::Cryptography::RC4>())};
return o;
}
 void Mono::Security::Cryptography::RC4::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::RC4>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Mono::Security::Cryptography::RC4::get_IV()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::RC4>::get(),
                            "get_IV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Mono::Security::Cryptography::RC4::set_IV(::ArrayW<uint8_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::RC4>::get(),
                            "set_IV",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 Mono::Security::Cryptography::RC4 Mono::Security::Cryptography::RC4::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Cryptography::RC4>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::Cryptography::RC4, false>(nullptr, ___internal_method);
}
