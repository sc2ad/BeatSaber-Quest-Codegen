#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "System/Runtime/CompilerServices/zzzz__IntrinsicAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::IntrinsicAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::IntrinsicAttribute::*)()>(&::System::Runtime::CompilerServices::IntrinsicAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236e0c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::IntrinsicAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Runtime::CompilerServices::IntrinsicAttribute::IntrinsicAttribute()  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<IntrinsicAttribute>())) {}
 void ::System::Runtime::CompilerServices::IntrinsicAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::IntrinsicAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
