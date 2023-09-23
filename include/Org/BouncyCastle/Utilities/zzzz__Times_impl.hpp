#pragma once
#include "Org/BouncyCastle/Utilities/zzzz__Times_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Utilities::Times.NanoTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&Org::BouncyCastle::Utilities::Times::NanoTime)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x10e3a3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::Times>::get(),
                            "NanoTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Utilities::Times._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Utilities::Times::*)()>(&Org::BouncyCastle::Utilities::Times::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10e3b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::Times>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Org::BouncyCastle::Utilities::Times::__set_NanosecondsPerTick(int64_t value)  {
::cordl_internals::setStaticField<int64_t, "NanosecondsPerTick", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::Times>::get>(std::forward<int64_t>(value));
}
 int64_t Org::BouncyCastle::Utilities::Times::__get_NanosecondsPerTick()  {
return ::cordl_internals::getStaticField<int64_t, "NanosecondsPerTick", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::Times>::get>();
}
 int64_t Org::BouncyCastle::Utilities::Times::NanoTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::Times>::get(),
                            "NanoTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
 Org::BouncyCastle::Utilities::Times::Times()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Times>())) {}
 void Org::BouncyCastle::Utilities::Times::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::Times>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
