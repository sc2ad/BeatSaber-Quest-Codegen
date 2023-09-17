#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "System/Runtime/InteropServices/zzzz__ComImportAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::ComImportAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::ComImportAttribute::*)()>(&::System::Runtime::InteropServices::ComImportAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236ac68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ComImportAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::System::Runtime::InteropServices::ComImportAttribute::ComImportAttribute()  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<ComImportAttribute>())) {}
 void ::System::Runtime::InteropServices::ComImportAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::ComImportAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
