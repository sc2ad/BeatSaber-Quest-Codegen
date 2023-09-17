#pragma once
namespace {
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskCache_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncTaskCache.CreateInt32Tasks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Threading::Tasks::Task_1<int32_t>> (*)()>(&::System::Runtime::CompilerServices::AsyncTaskCache::CreateInt32Tasks)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x236f970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache>::get(),
                            "CreateInt32Tasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::System::Runtime::CompilerServices::AsyncTaskCache::__set_TrueTask(::System::Threading::Tasks::Task_1<bool> value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<bool>, "TrueTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache>::get>(std::forward<::System::Threading::Tasks::Task_1<bool>>(value));
}
 ::System::Threading::Tasks::Task_1<bool> ::System::Runtime::CompilerServices::AsyncTaskCache::__get_TrueTask()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<bool>, "TrueTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache>::get>();
}
 void ::System::Runtime::CompilerServices::AsyncTaskCache::__set_FalseTask(::System::Threading::Tasks::Task_1<bool> value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<bool>, "FalseTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache>::get>(std::forward<::System::Threading::Tasks::Task_1<bool>>(value));
}
 ::System::Threading::Tasks::Task_1<bool> ::System::Runtime::CompilerServices::AsyncTaskCache::__get_FalseTask()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<bool>, "FalseTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache>::get>();
}
 void ::System::Runtime::CompilerServices::AsyncTaskCache::__set_Int32Tasks(::ArrayW<::System::Threading::Tasks::Task_1<int32_t>> value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Threading::Tasks::Task_1<int32_t>>, "Int32Tasks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache>::get>(std::forward<::ArrayW<::System::Threading::Tasks::Task_1<int32_t>>>(value));
}
 ::ArrayW<::System::Threading::Tasks::Task_1<int32_t>> ::System::Runtime::CompilerServices::AsyncTaskCache::__get_Int32Tasks()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Threading::Tasks::Task_1<int32_t>>, "Int32Tasks", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache>::get>();
}
 ::ArrayW<::System::Threading::Tasks::Task_1<int32_t>> ::System::Runtime::CompilerServices::AsyncTaskCache::CreateInt32Tasks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache>::get(),
                            "CreateInt32Tasks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Threading::Tasks::Task_1<int32_t>>, false>(nullptr, ___internal_method);
}
template<typename TResult>
 ::System::Threading::Tasks::Task_1<TResult> ::System::Runtime::CompilerServices::AsyncTaskCache::CreateCacheableTask(TResult result)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache>::get(),
                        "CreateCacheableTask",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, result);
}
} // end anonymous namespace
