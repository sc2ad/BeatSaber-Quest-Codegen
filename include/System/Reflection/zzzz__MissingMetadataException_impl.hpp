#pragma once
#include "System/zzzz__TypeAccessException_impl.hpp"
namespace {
#include "System/Reflection/zzzz__MissingMetadataException_def.hpp"
//  Writing Method size for method: ::System::Reflection::MissingMetadataException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::MissingMetadataException::*)()>(&::System::Reflection::MissingMetadataException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2380cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MissingMetadataException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Reflection::MissingMetadataException::MissingMetadataException()  : ::System::TypeAccessException(THROW_UNLESS(::il2cpp_utils::New<MissingMetadataException>())) {}
 void ::System::Reflection::MissingMetadataException::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::MissingMetadataException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
