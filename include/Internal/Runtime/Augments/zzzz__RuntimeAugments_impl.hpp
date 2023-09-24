#pragma once
#include "Internal/Runtime/Augments/zzzz__RuntimeAugments_def.hpp"
#include "Internal/Runtime/Augments/zzzz__ReflectionExecutionDomainCallbacks_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: Internal::Runtime::Augments::RuntimeAugments.ReportUnhandledException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Exception)>(&Internal::Runtime::Augments::RuntimeAugments::ReportUnhandledException)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22befac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeAugments>::get(),
                            "ReportUnhandledException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Internal::Runtime::Augments::RuntimeAugments.get_Callbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks (*)()>(&Internal::Runtime::Augments::RuntimeAugments::get_Callbacks)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22befcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeAugments>::get(),
                            "get_Callbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void Internal::Runtime::Augments::RuntimeAugments::__set_s_reflectionExecutionDomainCallbacks(Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks value)  {
::cordl_internals::setStaticField<Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks, "s_reflectionExecutionDomainCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeAugments>::get>(std::forward<Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks>(value));
}
 Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks Internal::Runtime::Augments::RuntimeAugments::__get_s_reflectionExecutionDomainCallbacks()  {
return ::cordl_internals::getStaticField<Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks, "s_reflectionExecutionDomainCallbacks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeAugments>::get>();
}
 void Internal::Runtime::Augments::RuntimeAugments::ReportUnhandledException(System::Exception exception)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeAugments>::get(),
                            "ReportUnhandledException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, exception);
}
 Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks Internal::Runtime::Augments::RuntimeAugments::get_Callbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Internal::Runtime::Augments::RuntimeAugments>::get(),
                            "get_Callbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks, false>(nullptr, ___internal_method);
}
