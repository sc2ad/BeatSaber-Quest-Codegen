#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__SXprUtilities_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k::*)(Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::ArrayW<uint8_t>, int64_t)>(&Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1043b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k.get_IterationCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k::get_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1043b84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k::__set_mIterationCount64(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k::__get_mIterationCount64() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "algorithm", ty: "Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "iv", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "iterationCount64", ty: "int64_t", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k(Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t> iv, int64_t iterationCount64)  : Org::BouncyCastle::Bcpg::S2k(THROW_UNLESS(::il2cpp_utils::New<Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k>(algorithm, iv, iterationCount64))) {}
 void Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k::_ctor(Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t> iv, int64_t iterationCount64)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, algorithm, iv, iterationCount64);
}
 int64_t Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k::get_IterationCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::Org__BouncyCastle__Bcpg__OpenPgp__SXprUtilities__MyS2k>::get(),
                            "get_IterationCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1043ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities.ReadLength
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(System::IO::Stream, int32_t)>(&Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::ReadLength)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1043ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities>::get(),
                            "ReadLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities.ReadString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::IO::Stream, int32_t)>(&Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::ReadString)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1036c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities>::get(),
                            "ReadString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities.ReadBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(System::IO::Stream, int32_t)>(&Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::ReadBytes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1036d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities>::get(),
                            "ReadBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities.ParseS2k
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::S2k (*)(System::IO::Stream)>(&Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::ParseS2k)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x1037578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities>::get(),
                            "ParseS2k",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities.SkipOpenParenthesis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IO::Stream)>(&Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::SkipOpenParenthesis)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1036bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities>::get(),
                            "SkipOpenParenthesis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities.SkipCloseParenthesis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::IO::Stream)>(&Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::SkipCloseParenthesis)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1036d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities>::get(),
                            "SkipCloseParenthesis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::SXprUtilities()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SXprUtilities>())) {}
 void Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::ReadLength(System::IO::Stream input, int32_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities>::get(),
                            "ReadLength",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, input, ch);
}
 ::StringW Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::ReadString(System::IO::Stream input, int32_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities>::get(),
                            "ReadString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, input, ch);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::ReadBytes(System::IO::Stream input, int32_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities>::get(),
                            "ReadBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(nullptr, ___internal_method, input, ch);
}
 Org::BouncyCastle::Bcpg::S2k Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::ParseS2k(System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities>::get(),
                            "ParseS2k",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::S2k, false>(nullptr, ___internal_method, input);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::SkipOpenParenthesis(System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities>::get(),
                            "SkipOpenParenthesis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities::SkipCloseParenthesis(System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities>::get(),
                            "SkipCloseParenthesis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input);
}
