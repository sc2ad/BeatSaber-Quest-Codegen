#pragma once
#include "GlobalNamespace/zzzz__AsyncComputeOperation_impl.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
constexpr void GlobalNamespace::AsyncComputeOperation_1<T>::__set__tcs(System::Threading::Tasks::TaskCompletionSource_1<T> value)  {
::cordl_internals::setInstanceField<System::Threading::Tasks::TaskCompletionSource_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Tasks::TaskCompletionSource_1<T>>(value));
}
constexpr System::Threading::Tasks::TaskCompletionSource_1<T> GlobalNamespace::AsyncComputeOperation_1<T>::__get__tcs() const {
return ::cordl_internals::getInstanceField<System::Threading::Tasks::TaskCompletionSource_1<T>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Threading::Tasks::Task_1<T> GlobalNamespace::AsyncComputeOperation_1<T>::get_task()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeOperation_1<T>>::get(),
                            "get_task",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<T>, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::AsyncComputeOperation_1<T> GlobalNamespace::AsyncComputeOperation_1<T>::New_ctor(int32_t timeoutMs)  {
GlobalNamespace::AsyncComputeOperation_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::AsyncComputeOperation_1<T>>(timeoutMs))};
return o;
}
 void GlobalNamespace::AsyncComputeOperation_1<T>::_ctor(int32_t timeoutMs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeOperation_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, timeoutMs);
}
 void GlobalNamespace::AsyncComputeOperation_1<T>::Execute(bool disposed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeOperation_1<T>>::get(),
                            "Execute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, disposed);
}
 bool GlobalNamespace::AsyncComputeOperation_1<T>::IsValidRequest()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeOperation_1<T>>::get(),
                            "IsValidRequest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::AsyncComputeOperation_1<T>::Complete(T computeResult)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeOperation_1<T>>::get(),
                            "Complete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, computeResult);
}
 void GlobalNamespace::AsyncComputeOperation_1<T>::Cancel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeOperation_1<T>>::get(),
                            "Cancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::AsyncComputeOperation_1<T>::Fail(System::Exception ex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeOperation_1<T>>::get(),
                            "Fail",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Exception>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ex);
}
 T GlobalNamespace::AsyncComputeOperation_1<T>::Compute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeOperation_1<T>>::get(),
                            "Compute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::AsyncComputeOperation_1<T>::Finally()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeOperation_1<T>>::get(),
                            "Finally",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
