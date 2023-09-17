#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__DerGenerator_impl.hpp"
namespace {
#include "Org/BouncyCastle/Asn1/zzzz__DerSequenceGenerator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerSequenceGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerSequenceGenerator::*)(::System::IO::Stream)>(&::Org::BouncyCastle::Asn1::DerSequenceGenerator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1138b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerSequenceGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerSequenceGenerator::*)(::System::IO::Stream, int32_t, bool)>(&::Org::BouncyCastle::Asn1::DerSequenceGenerator::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1138be4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerSequenceGenerator.AddObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerSequenceGenerator::*)(::Org::BouncyCastle::Asn1::Asn1Encodable)>(&::Org::BouncyCastle::Asn1::DerSequenceGenerator::AddObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1138c88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Asn1::DerSequenceGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceGenerator>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerSequenceGenerator.GetRawOutputStream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::Org::BouncyCastle::Asn1::DerSequenceGenerator::*)()>(&::Org::BouncyCastle::Asn1::DerSequenceGenerator::GetRawOutputStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1138d08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Asn1::DerSequenceGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceGenerator>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerSequenceGenerator.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerSequenceGenerator::*)()>(&::Org::BouncyCastle::Asn1::DerSequenceGenerator::Close)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1138d10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Asn1::DerSequenceGenerator),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceGenerator>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Asn1::DerSequenceGenerator::__set__bOut(::System::IO::MemoryStream value)  {
::cordl_internals::setInstanceField<::System::IO::MemoryStream, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::MemoryStream>(value));
}
constexpr ::System::IO::MemoryStream ::Org::BouncyCastle::Asn1::DerSequenceGenerator::__get__bOut() const {
return ::cordl_internals::getInstanceField<::System::IO::MemoryStream, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "outStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::DerSequenceGenerator::DerSequenceGenerator(::System::IO::Stream outStream)  : ::Org::BouncyCastle::Asn1::DerGenerator(THROW_UNLESS(::il2cpp_utils::New<DerSequenceGenerator>(outStream))) {}
 void ::Org::BouncyCastle::Asn1::DerSequenceGenerator::_ctor(::System::IO::Stream outStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outStream);
}
// Ctor Parameters [CppParam { name: "outStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "tagNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isExplicit", ty: "bool", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::DerSequenceGenerator::DerSequenceGenerator(::System::IO::Stream outStream, int32_t tagNo, bool isExplicit)  : ::Org::BouncyCastle::Asn1::DerGenerator(THROW_UNLESS(::il2cpp_utils::New<DerSequenceGenerator>(outStream, tagNo, isExplicit))) {}
 void ::Org::BouncyCastle::Asn1::DerSequenceGenerator::_ctor(::System::IO::Stream outStream, int32_t tagNo, bool isExplicit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outStream, tagNo, isExplicit);
}
 void ::Org::BouncyCastle::Asn1::DerSequenceGenerator::AddObject(::Org::BouncyCastle::Asn1::Asn1Encodable obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceGenerator>::get(),
                            "AddObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, obj);
}
 ::System::IO::Stream ::Org::BouncyCastle::Asn1::DerSequenceGenerator::GetRawOutputStream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceGenerator>::get(),
                            "GetRawOutputStream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Org::BouncyCastle::Asn1::DerSequenceGenerator::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerSequenceGenerator>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
