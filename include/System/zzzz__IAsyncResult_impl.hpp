#pragma once
namespace {
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
//  Writing Method size for method: ::System::IAsyncResult.get_IsCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IAsyncResult::*)()>(&::System::IAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::IAsyncResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IAsyncResult>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IAsyncResult.get_AsyncWaitHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle (::System::IAsyncResult::*)()>(&::System::IAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::IAsyncResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IAsyncResult>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IAsyncResult.get_AsyncState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::IAsyncResult::*)()>(&::System::IAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::IAsyncResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IAsyncResult>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IAsyncResult.get_CompletedSynchronously
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IAsyncResult::*)()>(&::System::IAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::IAsyncResult),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IAsyncResult>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
 bool ::System::IAsyncResult::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IAsyncResult>::get(),
                            "get_IsCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::Threading::WaitHandle ::System::IAsyncResult::get_AsyncWaitHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IAsyncResult>::get(),
                            "get_AsyncWaitHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::System::IAsyncResult::get_AsyncState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IAsyncResult>::get(),
                            "get_AsyncState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::System::IAsyncResult::get_CompletedSynchronously()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IAsyncResult>::get(),
                            "get_CompletedSynchronously",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
