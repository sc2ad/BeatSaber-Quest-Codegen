#pragma once
#include "GlobalNamespace/zzzz__AdditionalContentModel_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_def.hpp"
#include "GlobalNamespace/zzzz__SonyPlatformAdditionalContentModel_1_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__ISonyCommerceHelper_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, System::Threading::CancellationToken cancellationToken, ::StringW levelId, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->levelId = levelId;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::__set___4__this(GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance, std::forward<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>(value));
}
constexpr GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x18>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetLevelEntitlementStatusInternalAsync_d__5<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> __t__builder, GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, System::Threading::CancellationToken cancellationToken, ::StringW levelPackId, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->levelPackId = levelPackId;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::__set___4__this(GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance, std::forward<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>(value));
}
constexpr GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x18>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::__set_levelPackId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::__get_levelPackId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___GetPackEntitlementStatusInternalAsync_d__6<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __t__builder, GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, ::StringW levelId, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelId = levelId;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::__set___4__this(GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance, std::forward<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>(value));
}
constexpr GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::__set_levelId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::__get_levelId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelProductStoreAsync_d__7<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> __t__builder, GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, ::StringW levelPackId, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->levelPackId = levelPackId;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::__set___4__this(GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance, std::forward<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>(value));
}
constexpr GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::__set_levelPackId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::__get_levelPackId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__DisplayProductBrowseDialogResult>, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___OpenLevelPackProductStoreAsync_d__8<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelPackId", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> __t__builder, GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, System::Threading::CancellationToken cancellationToken, ::StringW levelPackId, System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->levelPackId = levelPackId;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::__set___4__this(GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance, std::forward<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>(value));
}
constexpr GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x18>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::__set_levelPackId(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::__get_levelPackId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<bool> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<bool>, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___IsPackBetterBuyThanLevelAsync_d__9<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter __u__1, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __u__2) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::__set___4__this(GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance, std::forward<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>(value));
}
constexpr GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x18>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x20>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter, 0x20>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::__set___u__2(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, 0x28>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::__get___u__2() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, 0x28>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___EnsureDataValidity_d__12<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::operator System::Runtime::CompilerServices::IAsyncStateMachine() const {
return System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> __t__builder, GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> __4__this, System::Threading::CancellationToken cancellationToken, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->cancellationToken = cancellationToken;
this->__u__1 = __u__1;
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::__set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, 0x8>(this->__instance, std::forward<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>>(value));
}
constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::__get___t__builder() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, 0x8>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::__set___4__this(GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> value)  {
::cordl_internals::setInstanceField<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance, std::forward<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>(value));
}
constexpr GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>, 0x10>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::__set_cancellationToken(System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<System::Threading::CancellationToken, 0x18>(this->__instance, std::forward<System::Threading::CancellationToken>(value));
}
constexpr System::Threading::CancellationToken GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::__get_cancellationToken() const {
return ::cordl_internals::getInstanceField<System::Threading::CancellationToken, 0x18>(this->__instance);
}
constexpr void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::__set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> value)  {
::cordl_internals::setInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, 0x20>(this->__instance, std::forward<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>>(value));
}
constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult> GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::__get___u__1() const {
return ::cordl_internals::getInstanceField<System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__ISonyCommerceHelper__AdditionalContentEntitlementsAsyncResult>, 0x20>(this->__instance);
}
 void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__SonyPlatformAdditionalContentModel_1___UpdateEntitlementsAsync_d__13<T>>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__entitlementsLabels(System::Collections::Generic::HashSet_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::HashSet_1<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::HashSet_1<::StringW>>(value));
}
constexpr System::Collections::Generic::HashSet_1<::StringW> GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__entitlementsLabels() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::HashSet_1<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__semaphoreSlim(System::Threading::SemaphoreSlim value)  {
::cordl_internals::setInstanceField<System::Threading::SemaphoreSlim, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Threading::SemaphoreSlim>(value));
}
constexpr System::Threading::SemaphoreSlim GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__semaphoreSlim() const {
return ::cordl_internals::getInstanceField<System::Threading::SemaphoreSlim, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__isDataValid(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__isDataValid() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__set__sonyCommerceHelper(GlobalNamespace::ISonyCommerceHelper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ISonyCommerceHelper, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ISonyCommerceHelper>(value));
}
constexpr GlobalNamespace::ISonyCommerceHelper GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::__get__sonyCommerceHelper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ISonyCommerceHelper, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::InvalidateDataInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>::get(),
                            "InvalidateDataInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetLevelEntitlementStatusInternalAsync(::StringW levelId, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>::get(),
                            "GetLevelEntitlementStatusInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, false>(const_cast<void*>(instance), ___internal_method, levelId, cancellationToken);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus> GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetPackEntitlementStatusInternalAsync(::StringW levelPackId, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>::get(),
                            "GetPackEntitlementStatusInternalAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__EntitlementStatus>, false>(const_cast<void*>(instance), ___internal_method, levelPackId, cancellationToken);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::OpenLevelProductStoreAsync(::StringW levelId, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>::get(),
                            "OpenLevelProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, false>(const_cast<void*>(instance), ___internal_method, levelId, cancellationToken);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult> GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::OpenLevelPackProductStoreAsync(::StringW levelPackId, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>::get(),
                            "OpenLevelPackProductStoreAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__OpenProductStoreResult>, false>(const_cast<void*>(instance), ___internal_method, levelPackId, cancellationToken);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult> GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::IsPackBetterBuyThanLevelAsync(::StringW levelPackId, System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>::get(),
                            "IsPackBetterBuyThanLevelAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__IsPackBetterBuyThanLevelResult>, false>(const_cast<void*>(instance), ___internal_method, levelPackId, cancellationToken);
}
 bool GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::HasLevelEntitlement(::StringW levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>::get(),
                            "HasLevelEntitlement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, levelId);
}
 bool GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::HasLevelPackEntitlement(::StringW levelPackId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>::get(),
                            "HasLevelPackEntitlement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, levelPackId);
}
 System::Threading::Tasks::Task_1<bool> GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::EnsureDataValidity(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>::get(),
                            "EnsureDataValidity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<bool>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult> GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::UpdateEntitlementsAsync(System::Threading::CancellationToken cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>::get(),
                            "UpdateEntitlementsAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__AdditionalContentModel__UpdateEntitlementsResult>, false>(const_cast<void*>(instance), ___internal_method, cancellationToken);
}
 T GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::GetLevelProductsModel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>::get(),
                            "GetLevelProductsModel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::New_ctor()  {
GlobalNamespace::SonyPlatformAdditionalContentModel_1<T> o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>())};
return o;
}
 void GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SonyPlatformAdditionalContentModel_1<T>>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
