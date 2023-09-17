#pragma once
#include "Org/BouncyCastle/Utilities/IO/zzzz__FilterStream_impl.hpp"
namespace {
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__WrappedGeneratorStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__IStreamGenerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::*)(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator, ::System::IO::Stream)>(&::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1043b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::*)()>(&::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::Close)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1043bb8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::__set_gen(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator>(value));
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::__get_gen() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "gen", ty: "::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator", modifiers: "", def_value: None }, CppParam { name: "str", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::WrappedGeneratorStream(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator gen, ::System::IO::Stream str)  : ::Org::BouncyCastle::Utilities::IO::FilterStream(THROW_UNLESS(::il2cpp_utils::New<WrappedGeneratorStream>(gen, str))) {}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator gen, ::System::IO::Stream str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, gen, str);
}
 void ::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::WrappedGeneratorStream>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
