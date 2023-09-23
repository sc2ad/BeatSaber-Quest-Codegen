#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "Unity/Collections/zzzz__ReadOnlyAttribute_def.hpp"
//  Writing Method size for method: Unity::Collections::ReadOnlyAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Collections::ReadOnlyAttribute::*)()>(&Unity::Collections::ReadOnlyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b2857c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::ReadOnlyAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 Unity::Collections::ReadOnlyAttribute::ReadOnlyAttribute()  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<ReadOnlyAttribute>())) {}
 void Unity::Collections::ReadOnlyAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Unity::Collections::ReadOnlyAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
