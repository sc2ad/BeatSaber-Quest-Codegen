#pragma once
#include "GlobalNamespace/zzzz__AsyncComputeManager_def.hpp"
#include "System/Collections/Concurrent/zzzz__BlockingCollection_1_def.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__IAsyncComputeManager_def.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::AsyncComputeManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AsyncComputeManager::*)()>(&GlobalNamespace::AsyncComputeManager::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xd9c0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AsyncComputeManager.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AsyncComputeManager::*)()>(&GlobalNamespace::AsyncComputeManager::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xd9c210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AsyncComputeManager.BeginOperation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AsyncComputeManager::*)(GlobalNamespace::AsyncComputeOperation)>(&GlobalNamespace::AsyncComputeManager::BeginOperation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xd9c278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeManager>::get(),
                            "BeginOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AsyncComputeOperation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::AsyncComputeManager.ComputeThreadRun
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AsyncComputeManager::*)()>(&GlobalNamespace::AsyncComputeManager::ComputeThreadRun)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xd9c2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeManager>::get(),
                            "ComputeThreadRun",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IAsyncComputeManager
constexpr  GlobalNamespace::AsyncComputeManager::operator GlobalNamespace::IAsyncComputeManager() const noexcept {
return GlobalNamespace::IAsyncComputeManager(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::AsyncComputeManager::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AsyncComputeManager::__set__asyncComputeRequests(System::Collections::Concurrent::BlockingCollection_1<GlobalNamespace::AsyncComputeOperation> value)  {
::cordl_internals::setInstanceField<System::Collections::Concurrent::BlockingCollection_1<GlobalNamespace::AsyncComputeOperation>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Concurrent::BlockingCollection_1<GlobalNamespace::AsyncComputeOperation>>(value));
}
constexpr System::Collections::Concurrent::BlockingCollection_1<GlobalNamespace::AsyncComputeOperation> GlobalNamespace::AsyncComputeManager::__get__asyncComputeRequests() const {
return ::cordl_internals::getInstanceField<System::Collections::Concurrent::BlockingCollection_1<GlobalNamespace::AsyncComputeOperation>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AsyncComputeManager::__set__computeThread(System::Threading::Thread value)  {
::cordl_internals::setInstanceField<System::Threading::Thread, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::Thread>(value));
}
constexpr System::Threading::Thread GlobalNamespace::AsyncComputeManager::__get__computeThread() const {
return ::cordl_internals::getInstanceField<System::Threading::Thread, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::AsyncComputeManager::__set__disposed(bool value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::AsyncComputeManager::__get__disposed() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::AsyncComputeManager GlobalNamespace::AsyncComputeManager::New_ctor()  {
GlobalNamespace::AsyncComputeManager o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::AsyncComputeManager>())};
return o;
}
 void GlobalNamespace::AsyncComputeManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeManager>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::AsyncComputeManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeManager>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::AsyncComputeManager::BeginOperation(GlobalNamespace::AsyncComputeOperation operation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeManager>::get(),
                            "BeginOperation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AsyncComputeOperation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, operation);
}
template<typename T>
 System::Threading::Tasks::Task_1<T> GlobalNamespace::AsyncComputeManager::BeginOperation(GlobalNamespace::AsyncComputeOperation_1<T> operation)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeManager>::get(),
                        "BeginOperation",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::AsyncComputeOperation_1<T>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<T>, false>(const_cast<void*>(instance), ___internal_method, operation);
}
 void GlobalNamespace::AsyncComputeManager::ComputeThreadRun()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AsyncComputeManager>::get(),
                            "ComputeThreadRun",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
