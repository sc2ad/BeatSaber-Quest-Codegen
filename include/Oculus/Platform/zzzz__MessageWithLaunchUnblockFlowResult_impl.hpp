#pragma once
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__MessageWithLaunchUnblockFlowResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchUnblockFlowResult_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithLaunchUnblockFlowResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithLaunchUnblockFlowResult::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithLaunchUnblockFlowResult::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x257e8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLaunchUnblockFlowResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLaunchUnblockFlowResult.GetLaunchUnblockFlowResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchUnblockFlowResult (::Oculus::Platform::MessageWithLaunchUnblockFlowResult::*)()>(&::Oculus::Platform::MessageWithLaunchUnblockFlowResult::GetLaunchUnblockFlowResult)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2581a40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::MessageWithLaunchUnblockFlowResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLaunchUnblockFlowResult>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithLaunchUnblockFlowResult.GetDataFromMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::LaunchUnblockFlowResult (::Oculus::Platform::MessageWithLaunchUnblockFlowResult::*)(::cordl_internals::intptr_t)>(&::Oculus::Platform::MessageWithLaunchUnblockFlowResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2581a7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Oculus::Platform::MessageWithLaunchUnblockFlowResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLaunchUnblockFlowResult>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 ::Oculus::Platform::MessageWithLaunchUnblockFlowResult::MessageWithLaunchUnblockFlowResult(::cordl_internals::intptr_t c_message)  : ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchUnblockFlowResult>(THROW_UNLESS(::il2cpp_utils::New<MessageWithLaunchUnblockFlowResult>(c_message))) {}
 void ::Oculus::Platform::MessageWithLaunchUnblockFlowResult::_ctor(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLaunchUnblockFlowResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
 ::Oculus::Platform::Models::LaunchUnblockFlowResult ::Oculus::Platform::MessageWithLaunchUnblockFlowResult::GetLaunchUnblockFlowResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLaunchUnblockFlowResult>::get(),
                            "GetLaunchUnblockFlowResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchUnblockFlowResult, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Oculus::Platform::Models::LaunchUnblockFlowResult ::Oculus::Platform::MessageWithLaunchUnblockFlowResult::GetDataFromMessage(::cordl_internals::intptr_t c_message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithLaunchUnblockFlowResult>::get(),
                            "GetDataFromMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::LaunchUnblockFlowResult, false>(const_cast<void*>(instance), ___internal_method, c_message);
}
} // end anonymous namespace
