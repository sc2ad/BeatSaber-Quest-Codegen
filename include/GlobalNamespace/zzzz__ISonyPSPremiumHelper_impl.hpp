#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "GlobalNamespace/zzzz__ISonyPSPremiumHelper_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__ISonyPSPremiumHelper_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult::GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult  GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult::OK{0};
constexpr GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult  GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult::Failed{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult  GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult::Authorized{0};
constexpr GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult  GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult::Unauthorized{1};
constexpr GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult  GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult::Failed{2};
//  Writing Method size for method: GlobalNamespace::ISonyPSPremiumHelper.DisplayJoinPremiumDialogAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult> (GlobalNamespace::ISonyPSPremiumHelper::*)(System::Threading::CancellationToken)>(&GlobalNamespace::ISonyPSPremiumHelper::DisplayJoinPremiumDialogAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ISonyPSPremiumHelper),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISonyPSPremiumHelper>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ISonyPSPremiumHelper.GetPremiumStatusAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult> (GlobalNamespace::ISonyPSPremiumHelper::*)(System::Threading::CancellationToken)>(&GlobalNamespace::ISonyPSPremiumHelper::GetPremiumStatusAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ISonyPSPremiumHelper),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISonyPSPremiumHelper>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::ISonyPSPremiumHelper.NotifyPremiumFeature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ISonyPSPremiumHelper::*)(bool)>(&GlobalNamespace::ISonyPSPremiumHelper::NotifyPremiumFeature)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ISonyPSPremiumHelper),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISonyPSPremiumHelper>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult> GlobalNamespace::ISonyPSPremiumHelper::DisplayJoinPremiumDialogAsync(System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISonyPSPremiumHelper>::get(),
                            "DisplayJoinPremiumDialogAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult>, false>(const_cast<void*>(instance), ___internal_method, token);
}
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult> GlobalNamespace::ISonyPSPremiumHelper::GetPremiumStatusAsync(System::Threading::CancellationToken token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISonyPSPremiumHelper>::get(),
                            "GetPremiumStatusAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Threading::CancellationToken>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__ISonyPSPremiumHelper__GetPremiumStatusResult>, false>(const_cast<void*>(instance), ___internal_method, token);
}
 void GlobalNamespace::ISonyPSPremiumHelper::NotifyPremiumFeature(bool isSpectator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISonyPSPremiumHelper>::get(),
                            "NotifyPremiumFeature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, isSpectator);
}
