#pragma once
#include "System/zzzz__MonoTODOAttribute_impl.hpp"
#include "System/zzzz__MonoLimitationAttribute_def.hpp"
//  Writing Method size for method: System::MonoLimitationAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::MonoLimitationAttribute::*)(::StringW)>(&System::MonoLimitationAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24696f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoLimitationAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 System::MonoLimitationAttribute System::MonoLimitationAttribute::New_ctor(::StringW comment)  {
System::MonoLimitationAttribute o{THROW_UNLESS(::il2cpp_utils::New<System::MonoLimitationAttribute>(comment))};
return o;
}
 void System::MonoLimitationAttribute::_ctor(::StringW comment)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::MonoLimitationAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, comment);
}
