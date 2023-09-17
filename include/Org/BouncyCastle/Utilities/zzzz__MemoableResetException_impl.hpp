#pragma once
#include "System/zzzz__InvalidCastException_impl.hpp"
namespace {
#include "Org/BouncyCastle/Utilities/zzzz__MemoableResetException_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::MemoableResetException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::MemoableResetException::*)(::StringW)>(&::Org::BouncyCastle::Utilities::MemoableResetException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10e2a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::MemoableResetException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Utilities::MemoableResetException::MemoableResetException(::StringW msg)  : ::System::InvalidCastException(THROW_UNLESS(::il2cpp_utils::New<MemoableResetException>(msg))) {}
 void ::Org::BouncyCastle::Utilities::MemoableResetException::_ctor(::StringW msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::MemoableResetException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, msg);
}
} // end anonymous namespace
