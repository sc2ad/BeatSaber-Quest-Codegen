#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__UnsafeValueTypeAttribute_def.hpp"
//  Writing Method size for method: System::Runtime::CompilerServices::UnsafeValueTypeAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::UnsafeValueTypeAttribute::*)()>(&System::Runtime::CompilerServices::UnsafeValueTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236e4dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::UnsafeValueTypeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 System::Runtime::CompilerServices::UnsafeValueTypeAttribute System::Runtime::CompilerServices::UnsafeValueTypeAttribute::New_ctor()  {
System::Runtime::CompilerServices::UnsafeValueTypeAttribute o{THROW_UNLESS(::il2cpp_utils::New<System::Runtime::CompilerServices::UnsafeValueTypeAttribute>())};
return o;
}
 void System::Runtime::CompilerServices::UnsafeValueTypeAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::CompilerServices::UnsafeValueTypeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
