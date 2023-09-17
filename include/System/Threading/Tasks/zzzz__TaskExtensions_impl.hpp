#pragma once
namespace {
#include "System/Threading/Tasks/zzzz__TaskExtensions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
template<typename TResult>
 ::System::Threading::Tasks::Task_1<TResult> ::System::Threading::Tasks::TaskExtensions::Unwrap(::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task_1<TResult>> task)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExtensions>::get(),
                        "Unwrap",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::System::Threading::Tasks::Task_1<TResult>>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>, false>(nullptr, ___internal_method, task);
}
} // end anonymous namespace
