#pragma once
namespace {
#include "System/Threading/zzzz__TimeoutHelper_def.hpp"
//  Writing Method size for method: ::System::Threading::TimeoutHelper.GetTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::System::Threading::TimeoutHelper::GetTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a4790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::TimeoutHelper>::get(),
                            "GetTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::TimeoutHelper.UpdateTimeOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(uint32_t, int32_t)>(&::System::Threading::TimeoutHelper::UpdateTimeOut)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24a4844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::TimeoutHelper>::get(),
                            "UpdateTimeOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 uint32_t ::System::Threading::TimeoutHelper::GetTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::TimeoutHelper>::get(),
                            "GetTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
 int32_t ::System::Threading::TimeoutHelper::UpdateTimeOut(uint32_t startTime, int32_t originalWaitMillisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::TimeoutHelper>::get(),
                            "UpdateTimeOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, startTime, originalWaitMillisecondsTimeout);
}
} // end anonymous namespace
