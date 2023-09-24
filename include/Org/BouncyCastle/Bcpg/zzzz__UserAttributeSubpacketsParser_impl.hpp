#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacketsParser_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacket_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::*)(System::IO::Stream)>(&Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x114ad30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser.ReadPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::UserAttributeSubpacket (Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::*)()>(&Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::ReadPacket)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x114ae60;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::__set_input(System::IO::Stream value)  {
::cordl_internals::setInstanceField<System::IO::Stream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::IO::Stream>(value));
}
constexpr System::IO::Stream Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::__get_input() const {
return ::cordl_internals::getInstanceField<System::IO::Stream, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::New_ctor(System::IO::Stream input)  {
Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser>(input))};
return o;
}
 void Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::_ctor(System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
 Org::BouncyCastle::Bcpg::UserAttributeSubpacket Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser::ReadPacket()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::UserAttributeSubpacketsParser>::get(),
                            "ReadPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::UserAttributeSubpacket, false>(const_cast<void*>(instance), ___internal_method);
}
