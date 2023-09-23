#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Versioning/zzzz__NonVersionableAttribute_def.hpp"
//  Writing Method size for method: System::Runtime::Versioning::NonVersionableAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Versioning::NonVersionableAttribute::*)()>(&System::Runtime::Versioning::NonVersionableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234814c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Versioning::NonVersionableAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::Runtime::Versioning::NonVersionableAttribute::NonVersionableAttribute()  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<NonVersionableAttribute>())) {}
 void System::Runtime::Versioning::NonVersionableAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Versioning::NonVersionableAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
