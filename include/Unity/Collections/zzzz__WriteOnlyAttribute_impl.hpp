#pragma once
#include "System/zzzz__Attribute_impl.hpp"
namespace {
#include "Unity/Collections/zzzz__WriteOnlyAttribute_def.hpp"
//  Writing Method size for method: ::Unity::Collections::WriteOnlyAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::WriteOnlyAttribute::*)()>(&::Unity::Collections::WriteOnlyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b28584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::WriteOnlyAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::Unity::Collections::WriteOnlyAttribute::WriteOnlyAttribute()  : ::System::Attribute(THROW_UNLESS(::il2cpp_utils::New<WriteOnlyAttribute>())) {}
 void ::Unity::Collections::WriteOnlyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::WriteOnlyAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
