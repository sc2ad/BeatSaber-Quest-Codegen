#pragma once
#include "System/Diagnostics/zzzz__ProcessThreadTimes_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: System::Diagnostics::ProcessThreadTimes.get_TotalProcessorTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::Diagnostics::ProcessThreadTimes::*)()>(&System::Diagnostics::ProcessThreadTimes::get_TotalProcessorTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27ddd64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::ProcessThreadTimes>::get(),
                            "get_TotalProcessorTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Diagnostics::ProcessThreadTimes._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::ProcessThreadTimes::*)()>(&System::Diagnostics::ProcessThreadTimes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27dd9c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::ProcessThreadTimes>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Diagnostics::ProcessThreadTimes::__set_create(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Diagnostics::ProcessThreadTimes::__get_create() const {
return ::cordl_internals::getInstanceField<int64_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Diagnostics::ProcessThreadTimes::__set_exit(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Diagnostics::ProcessThreadTimes::__get_exit() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Diagnostics::ProcessThreadTimes::__set_kernel(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Diagnostics::ProcessThreadTimes::__get_kernel() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Diagnostics::ProcessThreadTimes::__set_user(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t System::Diagnostics::ProcessThreadTimes::__get_user() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::TimeSpan System::Diagnostics::ProcessThreadTimes::get_TotalProcessorTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::ProcessThreadTimes>::get(),
                            "get_TotalProcessorTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 System::Diagnostics::ProcessThreadTimes::ProcessThreadTimes()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ProcessThreadTimes>())) {}
 void System::Diagnostics::ProcessThreadTimes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Diagnostics::ProcessThreadTimes>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
