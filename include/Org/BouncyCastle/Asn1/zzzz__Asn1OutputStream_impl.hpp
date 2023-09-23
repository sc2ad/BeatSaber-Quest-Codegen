#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OutputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::Asn1OutputStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Asn1OutputStream::*)(System::IO::Stream)>(&Org::BouncyCastle::Asn1::Asn1OutputStream::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x112ce38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Asn1OutputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Asn1OutputStream.WriteObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Asn1OutputStream::*)(::bs_hook::Il2CppWrapperType)>(&Org::BouncyCastle::Asn1::Asn1OutputStream::WriteObject)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x112ce3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::Asn1OutputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Asn1OutputStream>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "os", ty: "System::IO::Stream", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::Asn1OutputStream::Asn1OutputStream(System::IO::Stream os)  : Org::BouncyCastle::Asn1::DerOutputStream(THROW_UNLESS(::il2cpp_utils::New<Asn1OutputStream>(os))) {}
 void Org::BouncyCastle::Asn1::Asn1OutputStream::_ctor(System::IO::Stream os)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Asn1OutputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, os);
}
 void Org::BouncyCastle::Asn1::Asn1OutputStream::WriteObject(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Asn1OutputStream>::get(),
                            "WriteObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
