#pragma once
#include "System/zzzz__ArgumentException_impl.hpp"
namespace {
#include "LiteNetLib/Utils/zzzz__InvalidTypeException_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Utils::InvalidTypeException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::InvalidTypeException::*)(::StringW)>(&::LiteNetLib::Utils::InvalidTypeException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2099444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::InvalidTypeException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
 ::LiteNetLib::Utils::InvalidTypeException::InvalidTypeException(::StringW message)  : ::System::ArgumentException(THROW_UNLESS(::il2cpp_utils::New<InvalidTypeException>(message))) {}
 void ::LiteNetLib::Utils::InvalidTypeException::_ctor(::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::InvalidTypeException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
} // end anonymous namespace
