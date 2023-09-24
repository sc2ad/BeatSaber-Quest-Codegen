#pragma once
#include "System/zzzz__InvalidCastException_impl.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__MemoableResetException_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Utilities::MemoableResetException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Utilities::MemoableResetException::*)(::StringW)>(&Org::BouncyCastle::Utilities::MemoableResetException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10e2a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::MemoableResetException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Utilities::MemoableResetException Org::BouncyCastle::Utilities::MemoableResetException::New_ctor(::StringW msg)  {
Org::BouncyCastle::Utilities::MemoableResetException o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Utilities::MemoableResetException>(msg))};
return o;
}
 void Org::BouncyCastle::Utilities::MemoableResetException::_ctor(::StringW msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Utilities::MemoableResetException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
