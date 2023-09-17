#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_impl.hpp"
namespace {
#include "Org/BouncyCastle/Bcpg/zzzz__LiteralDataPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::LiteralDataPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::LiteralDataPacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream)>(&::Org::BouncyCastle::Bcpg::LiteralDataPacket::_ctor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x11449e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::LiteralDataPacket.get_Format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::LiteralDataPacket::*)()>(&::Org::BouncyCastle::Bcpg::LiteralDataPacket::get_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1147ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket>::get(),
                            "get_Format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::LiteralDataPacket.get_ModificationTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::LiteralDataPacket::*)()>(&::Org::BouncyCastle::Bcpg::LiteralDataPacket::get_ModificationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1147ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket>::get(),
                            "get_ModificationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::LiteralDataPacket.get_FileName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Bcpg::LiteralDataPacket::*)()>(&::Org::BouncyCastle::Bcpg::LiteralDataPacket::get_FileName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1147ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket>::get(),
                            "get_FileName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::LiteralDataPacket.GetRawFileName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::LiteralDataPacket::*)()>(&::Org::BouncyCastle::Bcpg::LiteralDataPacket::GetRawFileName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1147af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket>::get(),
                            "GetRawFileName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Bcpg::LiteralDataPacket::__set_format(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Bcpg::LiteralDataPacket::__get_format() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Bcpg::LiteralDataPacket::__set_fileName(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Bcpg::LiteralDataPacket::__get_fileName() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Bcpg::LiteralDataPacket::__set_modDate(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t ::Org::BouncyCastle::Bcpg::LiteralDataPacket::__get_modDate() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Bcpg::LiteralDataPacket::LiteralDataPacket(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  : ::Org::BouncyCastle::Bcpg::InputStreamPacket(THROW_UNLESS(::il2cpp_utils::New<LiteralDataPacket>(bcpgIn))) {}
 void ::Org::BouncyCastle::Bcpg::LiteralDataPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bcpgIn);
}
 int32_t ::Org::BouncyCastle::Bcpg::LiteralDataPacket::get_Format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket>::get(),
                            "get_Format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t ::Org::BouncyCastle::Bcpg::LiteralDataPacket::get_ModificationTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket>::get(),
                            "get_ModificationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::Org::BouncyCastle::Bcpg::LiteralDataPacket::get_FileName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket>::get(),
                            "get_FileName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Bcpg::LiteralDataPacket::GetRawFileName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::LiteralDataPacket>::get(),
                            "GetRawFileName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
