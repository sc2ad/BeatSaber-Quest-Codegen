#pragma once
namespace {
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceStatus_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceOnCompletedFlags_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::Sources::IValueTaskSource_1.GetStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Sources::ValueTaskSourceStatus (::System::Threading::Tasks::Sources::IValueTaskSource_1::*)(int16_t)>(&::System::Threading::Tasks::Sources::IValueTaskSource_1::GetStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Threading::Tasks::Sources::IValueTaskSource_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::IValueTaskSource_1>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Sources::IValueTaskSource_1.OnCompleted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::Sources::IValueTaskSource_1::*)(::System::Action_1<::bs_hook::Il2CppWrapperType>, ::bs_hook::Il2CppWrapperType, int16_t, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags)>(&::System::Threading::Tasks::Sources::IValueTaskSource_1::OnCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Threading::Tasks::Sources::IValueTaskSource_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::IValueTaskSource_1>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::Sources::IValueTaskSource_1.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<TResult (::System::Threading::Tasks::Sources::IValueTaskSource_1::*)(int16_t)>(&::System::Threading::Tasks::Sources::IValueTaskSource_1::GetResult)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Threading::Tasks::Sources::IValueTaskSource_1),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::IValueTaskSource_1>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 ::System::Threading::Tasks::Sources::ValueTaskSourceStatus ::System::Threading::Tasks::Sources::IValueTaskSource_1::GetStatus(int16_t token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::IValueTaskSource_1>::get(),
                            "GetStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Sources::ValueTaskSourceStatus, false>(const_cast<void*>(instance), ___internal_method, token);
}
 void ::System::Threading::Tasks::Sources::IValueTaskSource_1::OnCompleted(::System::Action_1<::bs_hook::Il2CppWrapperType> continuation, ::bs_hook::Il2CppWrapperType state, int16_t token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::IValueTaskSource_1>::get(),
                            "OnCompleted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::bs_hook::Il2CppWrapperType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, continuation, state, token, flags);
}
 TResult ::System::Threading::Tasks::Sources::IValueTaskSource_1::GetResult(int16_t token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::Sources::IValueTaskSource_1>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TResult, false>(const_cast<void*>(instance), ___internal_method, token);
}
} // end anonymous namespace
