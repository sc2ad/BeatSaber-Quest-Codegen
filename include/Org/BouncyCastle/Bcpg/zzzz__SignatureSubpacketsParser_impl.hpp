#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacketsParser_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::SignatureSubpacketsParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::*)(System::IO::Stream)>(&Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1149720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::SignatureSubpacketsParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::SignatureSubpacketsParser.ReadPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::SignatureSubpacket (Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::*)()>(&Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::ReadPacket)> {
  constexpr static std::size_t size = 0x650;
  constexpr static std::size_t addrs = 0x1149748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::SignatureSubpacketsParser>::get(),
                            "ReadPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::SignatureSubpacketsParser.CheckData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::StringW)>(&Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::CheckData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x114a964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::SignatureSubpacketsParser>::get(),
                            "CheckData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::__set_input(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::__get_input() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Bcpg::SignatureSubpacketsParser Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::New_ctor(System::IO::Stream input)  {
Org::BouncyCastle::Bcpg::SignatureSubpacketsParser o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::SignatureSubpacketsParser>(input))};
return o;
}
 void Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::_ctor(System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::SignatureSubpacketsParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 Org::BouncyCastle::Bcpg::SignatureSubpacket Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::ReadPacket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::SignatureSubpacketsParser>::get(),
                            "ReadPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::SignatureSubpacket, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::SignatureSubpacketsParser::CheckData(::ArrayW<uint8_t> data, int32_t expected, int32_t bytesRead, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::SignatureSubpacketsParser>::get(),
                            "CheckData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, data, expected, bytesRead, name);
}
