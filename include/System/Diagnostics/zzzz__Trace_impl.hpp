#pragma once
#include "System/Diagnostics/zzzz__Trace_def.hpp"
#include "System/Diagnostics/zzzz__TraceListenerCollection_def.hpp"
#include "System/Diagnostics/zzzz__CorrelationManager_def.hpp"
//  Writing Method size for method: System::Diagnostics::Trace.get_Listeners
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Diagnostics::TraceListenerCollection (*)()>(&System::Diagnostics::Trace::get_Listeners)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x27da3c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Trace>::get(),
                            "get_Listeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::Trace.get_AutoFlush
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Diagnostics::Trace::get_AutoFlush)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x27da664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Trace>::get(),
                            "get_AutoFlush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::Trace.get_CorrelationManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Diagnostics::CorrelationManager (*)()>(&System::Diagnostics::Trace::get_CorrelationManager)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x27da710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Trace>::get(),
                            "get_CorrelationManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::Diagnostics::Trace::__set_correlationManager(System::Diagnostics::CorrelationManager value)  {
::cordl_internals::setStaticField<System::Diagnostics::CorrelationManager, "correlationManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Trace>::get>(std::forward<System::Diagnostics::CorrelationManager>(value));
}
 System::Diagnostics::CorrelationManager System::Diagnostics::Trace::__get_correlationManager()  {
return ::cordl_internals::getStaticField<System::Diagnostics::CorrelationManager, "correlationManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Trace>::get>();
}
 System::Diagnostics::TraceListenerCollection System::Diagnostics::Trace::get_Listeners()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Trace>::get(),
                            "get_Listeners",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Diagnostics::TraceListenerCollection, false>(nullptr, ___internal_method);
}
 bool System::Diagnostics::Trace::get_AutoFlush()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Trace>::get(),
                            "get_AutoFlush",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
 System::Diagnostics::CorrelationManager System::Diagnostics::Trace::get_CorrelationManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::Trace>::get(),
                            "get_CorrelationManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Diagnostics::CorrelationManager, false>(nullptr, ___internal_method);
}
