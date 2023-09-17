#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_impl.hpp"
namespace {
#include "Org/BouncyCastle/Bcpg/zzzz__CompressedDataPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__CompressionAlgorithmTag_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::CompressedDataPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::CompressedDataPacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream)>(&::Org::BouncyCastle::Bcpg::CompressedDataPacket::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x11448dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::CompressedDataPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::CompressedDataPacket.get_Algorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag (::Org::BouncyCastle::Bcpg::CompressedDataPacket::*)()>(&::Org::BouncyCastle::Bcpg::CompressedDataPacket::get_Algorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1146260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::CompressedDataPacket>::get(),
                            "get_Algorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Bcpg::CompressedDataPacket::__set_algorithm(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag ::Org::BouncyCastle::Bcpg::CompressedDataPacket::__get_algorithm() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Bcpg::CompressedDataPacket::CompressedDataPacket(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  : ::Org::BouncyCastle::Bcpg::InputStreamPacket(THROW_UNLESS(::il2cpp_utils::New<CompressedDataPacket>(bcpgIn))) {}
 void ::Org::BouncyCastle::Bcpg::CompressedDataPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::CompressedDataPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bcpgIn);
}
 ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag ::Org::BouncyCastle::Bcpg::CompressedDataPacket::get_Algorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::CompressedDataPacket>::get(),
                            "get_Algorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
