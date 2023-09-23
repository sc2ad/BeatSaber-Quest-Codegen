#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__UnmanagedFunctionPointerAttribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__CallingConvention_def.hpp"
//  Writing Method size for method: System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::*)(System::Runtime::InteropServices::CallingConvention)>(&System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x236aba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::CallingConvention>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::__set_m_callingConvention(System::Runtime::InteropServices::CallingConvention value)  {
::cordl_internals::setInstanceField<System::Runtime::InteropServices::CallingConvention, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Runtime::InteropServices::CallingConvention>(value));
}
constexpr System::Runtime::InteropServices::CallingConvention System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::__get_m_callingConvention() const {
return ::cordl_internals::getInstanceField<System::Runtime::InteropServices::CallingConvention, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "callingConvention", ty: "System::Runtime::InteropServices::CallingConvention", modifiers: "", def_value: None }]
 System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::UnmanagedFunctionPointerAttribute(System::Runtime::InteropServices::CallingConvention callingConvention)  : System::Attribute(THROW_UNLESS(::il2cpp_utils::New<UnmanagedFunctionPointerAttribute>(callingConvention))) {}
 void System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::_ctor(System::Runtime::InteropServices::CallingConvention callingConvention)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::InteropServices::CallingConvention>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callingConvention);
}
