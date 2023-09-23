#pragma once
#include "System/Threading/Tasks/zzzz__TaskAwaiters_def.hpp"
#include "System/Threading/Tasks/zzzz__ForceAsyncAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: System::Threading::Tasks::TaskAwaiters.ForceAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::ForceAsyncAwaiter (*)(System::Threading::Tasks::Task)>(&System::Threading::Tasks::TaskAwaiters::ForceAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24b4c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskAwaiters>::get(),
                            "ForceAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
    return ___internal_method;
  }
};
 System::Threading::Tasks::ForceAsyncAwaiter System::Threading::Tasks::TaskAwaiters::ForceAsync(System::Threading::Tasks::Task task)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Threading::Tasks::TaskAwaiters>::get(),
                            "ForceAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::Tasks::Task>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::ForceAsyncAwaiter, false>(nullptr, ___internal_method, task);
}
