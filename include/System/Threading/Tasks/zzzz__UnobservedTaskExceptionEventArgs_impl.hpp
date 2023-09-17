#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
namespace {
#include "System/Threading/Tasks/zzzz__UnobservedTaskExceptionEventArgs_def.hpp"
#include "System/zzzz__AggregateException_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::*)(::System::AggregateException)>(&::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x24be424;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AggregateException>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__set_m_exception(::System::AggregateException value)  {
::cordl_internals::setInstanceField<::System::AggregateException, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::AggregateException>(value));
}
constexpr ::System::AggregateException ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__get_m_exception() const {
return ::cordl_internals::getInstanceField<::System::AggregateException, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__set_m_observed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::__get_m_observed() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "exception", ty: "::System::AggregateException", modifiers: "", def_value: None }]
 ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::UnobservedTaskExceptionEventArgs(::System::AggregateException exception)  : ::System::EventArgs(THROW_UNLESS(::il2cpp_utils::New<UnobservedTaskExceptionEventArgs>(exception))) {}
 void ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::_ctor(::System::AggregateException exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AggregateException>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, exception);
}
} // end anonymous namespace
