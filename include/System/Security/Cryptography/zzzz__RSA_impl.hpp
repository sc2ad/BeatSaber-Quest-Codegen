#pragma once
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAParameters_def.hpp"
//  Writing Method size for method: System::Security::Cryptography::RSA._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSA::*)()>(&System::Security::Cryptography::RSA::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22fa444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSA>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RSA.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::RSA (*)()>(&System::Security::Cryptography::RSA::Create)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x22fa44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSA>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RSA.EncryptValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::RSA::EncryptValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x22fa4ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RSA),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSA>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RSA.FromXmlString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSA::*)(::StringW)>(&System::Security::Cryptography::RSA::FromXmlString)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x22fa54c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RSA),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSA>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RSA.ToXmlString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::RSA::*)(bool)>(&System::Security::Cryptography::RSA::ToXmlString)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x22faaa4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RSA),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSA>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RSA.ExportParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::RSAParameters (System::Security::Cryptography::RSA::*)(bool)>(&System::Security::Cryptography::RSA::ExportParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RSA),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSA>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Security::Cryptography::RSA.ImportParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSA::*)(System::Security::Cryptography::RSAParameters)>(&System::Security::Cryptography::RSA::ImportParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::Security::Cryptography::RSA),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSA>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::Security::Cryptography::RSA::RSA()  : System::Security::Cryptography::AsymmetricAlgorithm(THROW_UNLESS(::il2cpp_utils::New<RSA>())) {}
 void System::Security::Cryptography::RSA::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSA>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::RSA System::Security::Cryptography::RSA::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSA>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::RSA, false>(nullptr, ___internal_method);
}
 ::ArrayW<uint8_t> System::Security::Cryptography::RSA::EncryptValue(::ArrayW<uint8_t> rgb)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSA>::get(),
                            "EncryptValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, rgb);
}
 void System::Security::Cryptography::RSA::FromXmlString(::StringW xmlString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSA>::get(),
                            "FromXmlString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xmlString);
}
 ::StringW System::Security::Cryptography::RSA::ToXmlString(bool includePrivateParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSA>::get(),
                            "ToXmlString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, includePrivateParameters);
}
 System::Security::Cryptography::RSAParameters System::Security::Cryptography::RSA::ExportParameters(bool includePrivateParameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSA>::get(),
                            "ExportParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::RSAParameters, false>(const_cast<void*>(instance), ___internal_method, includePrivateParameters);
}
 void System::Security::Cryptography::RSA::ImportParameters(System::Security::Cryptography::RSAParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Security::Cryptography::RSA>::get(),
                            "ImportParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::RSAParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parameters);
}
