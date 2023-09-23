#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "Zenject/zzzz__PoolExceededFixedSizeException_def.hpp"
//  Writing Method size for method: Zenject::PoolExceededFixedSizeException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::PoolExceededFixedSizeException::*)(::StringW)>(&Zenject::PoolExceededFixedSizeException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2d6f230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolExceededFixedSizeException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "errorMessage", ty: "::StringW", modifiers: "", def_value: None }]
 Zenject::PoolExceededFixedSizeException::PoolExceededFixedSizeException(::StringW errorMessage)  : System::Exception(THROW_UNLESS(::il2cpp_utils::New<PoolExceededFixedSizeException>(errorMessage))) {}
 void Zenject::PoolExceededFixedSizeException::_ctor(::StringW errorMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Zenject::PoolExceededFixedSizeException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, errorMessage);
}
