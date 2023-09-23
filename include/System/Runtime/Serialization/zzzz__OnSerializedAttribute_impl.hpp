#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Serialization/zzzz__OnSerializedAttribute_def.hpp"
//  Writing Method size for method: System::Runtime::Serialization::OnSerializedAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::OnSerializedAttribute::*)()>(&System::Runtime::Serialization::OnSerializedAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2351c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::OnSerializedAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 System::Runtime::Serialization::OnSerializedAttribute::OnSerializedAttribute()  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<OnSerializedAttribute>())) {}
 void System::Runtime::Serialization::OnSerializedAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::Serialization::OnSerializedAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
