#pragma once
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_impl.hpp"
namespace {
#include "Org/BouncyCastle/Utilities/IO/zzzz__TeeInputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::TeeInputStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::IO::TeeInputStream::*)(::System::IO::Stream, ::System::IO::Stream)>(&::Org::BouncyCastle::Utilities::IO::TeeInputStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x10d40f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::TeeInputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::TeeInputStream.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::IO::TeeInputStream::*)()>(&::Org::BouncyCastle::Utilities::IO::TeeInputStream::Close)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x10d411c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Utilities::IO::TeeInputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::TeeInputStream>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::TeeInputStream.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::IO::TeeInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Utilities::IO::TeeInputStream::Read)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10d4190;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Utilities::IO::TeeInputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::TeeInputStream>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::TeeInputStream.ReadByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Utilities::IO::TeeInputStream::*)()>(&::Org::BouncyCastle::Utilities::IO::TeeInputStream::ReadByte)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x10d4208;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Utilities::IO::TeeInputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::TeeInputStream>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Utilities::IO::TeeInputStream::__set_input(::System::IO::Stream value)  {
::cordl_internals::setInstanceField<::System::IO::Stream, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::Stream>(value));
}
constexpr ::System::IO::Stream ::Org::BouncyCastle::Utilities::IO::TeeInputStream::__get_input() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Utilities::IO::TeeInputStream::__set_tee(::System::IO::Stream value)  {
::cordl_internals::setInstanceField<::System::IO::Stream, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::Stream>(value));
}
constexpr ::System::IO::Stream ::Org::BouncyCastle::Utilities::IO::TeeInputStream::__get_tee() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "input", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "tee", ty: "::System::IO::Stream", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Utilities::IO::TeeInputStream::TeeInputStream(::System::IO::Stream input, ::System::IO::Stream tee)  : ::Org::BouncyCastle::Utilities::IO::BaseInputStream(THROW_UNLESS(::il2cpp_utils::New<TeeInputStream>(input, tee))) {}
 void ::Org::BouncyCastle::Utilities::IO::TeeInputStream::_ctor(::System::IO::Stream input, ::System::IO::Stream tee)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::TeeInputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input, tee);
}
 void ::Org::BouncyCastle::Utilities::IO::TeeInputStream::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::TeeInputStream>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t ::Org::BouncyCastle::Utilities::IO::TeeInputStream::Read(::ArrayW<uint8_t> buf, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::TeeInputStream>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, buf, off, len);
}
 int32_t ::Org::BouncyCastle::Utilities::IO::TeeInputStream::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::IO::TeeInputStream>::get(),
                            "ReadByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
