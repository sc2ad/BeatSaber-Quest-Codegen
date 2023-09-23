#pragma once
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__ConstructedOctetStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetStringParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1StreamParser_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::ConstructedOctetStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::ConstructedOctetStream::*)(Org::BouncyCastle::Asn1::Asn1StreamParser)>(&Org::BouncyCastle::Asn1::ConstructedOctetStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x11326c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::ConstructedOctetStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1StreamParser>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::ConstructedOctetStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Asn1::ConstructedOctetStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Asn1::ConstructedOctetStream::Read)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x1134b08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::ConstructedOctetStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::ConstructedOctetStream>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::ConstructedOctetStream.ReadByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Org::BouncyCastle::Asn1::ConstructedOctetStream::*)()>(&Org::BouncyCastle::Asn1::ConstructedOctetStream::ReadByte)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1134dd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::ConstructedOctetStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::ConstructedOctetStream>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::ConstructedOctetStream.GetNextParser
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1OctetStringParser (Org::BouncyCastle::Asn1::ConstructedOctetStream::*)()>(&Org::BouncyCastle::Asn1::ConstructedOctetStream::GetNextParser)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1134ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::ConstructedOctetStream>::get(),
                            "GetNextParser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Asn1::ConstructedOctetStream::__set__parser(Org::BouncyCastle::Asn1::Asn1StreamParser value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::Asn1StreamParser, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::Asn1StreamParser>(value));
}
constexpr Org::BouncyCastle::Asn1::Asn1StreamParser Org::BouncyCastle::Asn1::ConstructedOctetStream::__get__parser() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::Asn1StreamParser, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::ConstructedOctetStream::__set__first(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Asn1::ConstructedOctetStream::__get__first() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Asn1::ConstructedOctetStream::__set__currentStream(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream Org::BouncyCastle::Asn1::ConstructedOctetStream::__get__currentStream() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "parser", ty: "Org::BouncyCastle::Asn1::Asn1StreamParser", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::ConstructedOctetStream::ConstructedOctetStream(Org::BouncyCastle::Asn1::Asn1StreamParser parser)  : Org::BouncyCastle::Utilities::IO::BaseInputStream(THROW_UNLESS(::il2cpp_utils::New<ConstructedOctetStream>(parser))) {}
 void Org::BouncyCastle::Asn1::ConstructedOctetStream::_ctor(Org::BouncyCastle::Asn1::Asn1StreamParser parser)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::ConstructedOctetStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1StreamParser>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parser);
}
 int32_t Org::BouncyCastle::Asn1::ConstructedOctetStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::ConstructedOctetStream>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, count);
}
 int32_t Org::BouncyCastle::Asn1::ConstructedOctetStream::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::ConstructedOctetStream>::get(),
                            "ReadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Asn1::Asn1OctetStringParser Org::BouncyCastle::Asn1::ConstructedOctetStream::GetNextParser()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::ConstructedOctetStream>::get(),
                            "GetNextParser",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::Asn1OctetStringParser, false>(const_cast<void*>(instance), ___internal_method);
}
