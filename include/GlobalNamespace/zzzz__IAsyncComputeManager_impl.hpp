#pragma once
namespace {
#include "GlobalNamespace/zzzz__IAsyncComputeManager_def.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IAsyncComputeManager.BeginOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IAsyncComputeManager::*)(::GlobalNamespace::AsyncComputeOperation)>(&::GlobalNamespace::IAsyncComputeManager::BeginOperation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IAsyncComputeManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAsyncComputeManager>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IDisposable
constexpr  ::GlobalNamespace::IAsyncComputeManager::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::IAsyncComputeManager::BeginOperation(::GlobalNamespace::AsyncComputeOperation asyncComputeOperation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAsyncComputeManager>::get(),
                            "BeginOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AsyncComputeOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asyncComputeOperation);
}
template<typename T>
 ::System::Threading::Tasks::Task_1<T> ::GlobalNamespace::IAsyncComputeManager::BeginOperation(::GlobalNamespace::AsyncComputeOperation_1<T> asyncComputeOperation)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAsyncComputeManager>::get(),
                        "BeginOperation",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AsyncComputeOperation_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>, false>(const_cast<void*>(instance), ___internal_method, asyncComputeOperation);
}
} // end anonymous namespace
