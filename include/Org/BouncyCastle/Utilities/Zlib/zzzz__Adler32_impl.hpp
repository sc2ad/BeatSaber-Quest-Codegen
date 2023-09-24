#pragma once
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__Adler32_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Utilities::Zlib::Adler32.adler32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Org::BouncyCastle::Utilities::Zlib::Adler32::*)(int64_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Utilities::Zlib::Adler32::adler32)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x10d4968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::Zlib::Adler32>::get(),
                            "adler32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Utilities::Zlib::Adler32._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Utilities::Zlib::Adler32::*)()>(&Org::BouncyCastle::Utilities::Zlib::Adler32::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10d4c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::Zlib::Adler32>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 int64_t Org::BouncyCastle::Utilities::Zlib::Adler32::adler32(int64_t adler, ::ArrayW<uint8_t> buf, int32_t index, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::Zlib::Adler32>::get(),
                            "adler32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(instance), ___internal_method, adler, buf, index, len);
}
 Org::BouncyCastle::Utilities::Zlib::Adler32 Org::BouncyCastle::Utilities::Zlib::Adler32::New_ctor()  {
Org::BouncyCastle::Utilities::Zlib::Adler32 o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Utilities::Zlib::Adler32>())};
return o;
}
 void Org::BouncyCastle::Utilities::Zlib::Adler32::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::Zlib::Adler32>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
