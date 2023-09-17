#pragma once
#include "GlobalNamespace/zzzz__TableCellWithSeparator_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__GameServerPlayerTableCell_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayerData_def.hpp"
#include "HMUI/zzzz__CurvedTextMeshPro_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "GlobalNamespace/zzzz__AdditionalContentModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItemsList_def.hpp"
#include "HMUI/zzzz__ButtonSpriteSwapToggle_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItem_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0::*)()>(&::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21246e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0._SetData_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0::*)(int32_t, ::GlobalNamespace::GameplayModifierInfoListItem)>(&::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0::_SetData_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x212499c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0>::get(),
                            "<SetData>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierInfoListItem>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0::__set_modifiersList(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO>>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO> ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0::__get_modifiersList() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0::____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0>())) {}
 void ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0::_SetData_b__0(int32_t id, ::GlobalNamespace::GameplayModifierInfoListItem listItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell____c__DisplayClass29_0>::get(),
                            "<SetData>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierInfoListItem>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id, listItem);
}
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::*)()>(&::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x2124a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::*)(::System::Runtime::CompilerServices::IAsyncStateMachine)>(&::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2124e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::Runtime::CompilerServices::IAsyncStateMachine
constexpr  ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::operator ::System::Runtime::CompilerServices::IAsyncStateMachine() const {
return ::System::Runtime::CompilerServices::IAsyncStateMachine(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::GameServerPlayerTableCell", modifiers: "", def_value: Some("csnull") }, CppParam { name: "getLevelEntitlementTask", ty: "::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::GameServerPlayerTableCell __4__this, ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> getLevelEntitlementTask, ::System::Threading::CancellationToken _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> __u__1) noexcept : ::bs_hook::ValueTypeWrapper() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->getLevelEntitlementTask = getLevelEntitlementTask;
this->_cancellationToken_5__2 = _cancellationToken_5__2;
this->__u__1 = __u__1;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::__set___4__this(::GlobalNamespace::GameServerPlayerTableCell value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameServerPlayerTableCell, 0x28>(this->__instance, std::forward<::GlobalNamespace::GameServerPlayerTableCell>(value));
}
constexpr ::GlobalNamespace::GameServerPlayerTableCell ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameServerPlayerTableCell, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::__set_getLevelEntitlementTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x30>(this->__instance, std::forward<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::__get_getLevelEntitlementTask() const {
return ::cordl_internals::getInstanceField<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x30>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::__set__cancellationToken_5__2(::System::Threading::CancellationToken value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationToken, 0x38>(this->__instance, std::forward<::System::Threading::CancellationToken>(value));
}
constexpr ::System::Threading::CancellationToken ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::__get__cancellationToken_5__2() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationToken, 0x38>(this->__instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x40>(this->__instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>, 0x40>(this->__instance);
}
 void ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__GameServerPlayerTableCell___SetBeatmapUseButtonEnabledAsync_d__35>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, stateMachine);
}
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.add_kickPlayerEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>)>(&::GlobalNamespace::GameServerPlayerTableCell::add_kickPlayerEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2123794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "add_kickPlayerEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.remove_kickPlayerEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>)>(&::GlobalNamespace::GameServerPlayerTableCell::remove_kickPlayerEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2123844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "remove_kickPlayerEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.add_useBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>)>(&::GlobalNamespace::GameServerPlayerTableCell::add_useBeatmapEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21238f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "add_useBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.remove_useBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>)>(&::GlobalNamespace::GameServerPlayerTableCell::remove_useBeatmapEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21239a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "remove_useBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.add_useModifiersEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>)>(&::GlobalNamespace::GameServerPlayerTableCell::add_useModifiersEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2123a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "add_useModifiersEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.remove_useModifiersEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Action_1<int32_t>)>(&::GlobalNamespace::GameServerPlayerTableCell::remove_useModifiersEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2123b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "remove_useModifiersEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::GlobalNamespace::IConnectedPlayer, ::GlobalNamespace::ILobbyPlayerData, bool, bool, ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>)>(&::GlobalNamespace::GameServerPlayerTableCell::SetData)> {
  constexpr static std::size_t size = 0xb24;
  constexpr static std::size_t addrs = 0x2123bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILobbyPlayerData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)()>(&::GlobalNamespace::GameServerPlayerTableCell::Awake)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2124790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.HandleKickPlayerButtonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)()>(&::GlobalNamespace::GameServerPlayerTableCell::HandleKickPlayerButtonPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21248d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "HandleKickPlayerButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.HandleUseBeatmapButtonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)()>(&::GlobalNamespace::GameServerPlayerTableCell::HandleUseBeatmapButtonPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21248f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "HandleUseBeatmapButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.HandleUseModifiersButtonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)()>(&::GlobalNamespace::GameServerPlayerTableCell::HandleUseModifiersButtonPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2124914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "HandleUseModifiersButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell.SetBeatmapUseButtonEnabledAsync
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>)>(&::GlobalNamespace::GameServerPlayerTableCell::SetBeatmapUseButtonEnabledAsync)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21246f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "SetBeatmapUseButtonEnabledAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerPlayerTableCell._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerPlayerTableCell::*)()>(&::GlobalNamespace::GameServerPlayerTableCell::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2124934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__playerNameText(::HMUI::CurvedTextMeshPro value)  {
::cordl_internals::setInstanceField<::HMUI::CurvedTextMeshPro, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::CurvedTextMeshPro>(value));
}
constexpr ::HMUI::CurvedTextMeshPro ::GlobalNamespace::GameServerPlayerTableCell::__get__playerNameText() const {
return ::cordl_internals::getInstanceField<::HMUI::CurvedTextMeshPro, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__localPlayerBackgroundImage(::UnityEngine::UI::Image value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Image>(value));
}
constexpr ::UnityEngine::UI::Image ::GlobalNamespace::GameServerPlayerTableCell::__get__localPlayerBackgroundImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__suggestedLevelText(::HMUI::CurvedTextMeshPro value)  {
::cordl_internals::setInstanceField<::HMUI::CurvedTextMeshPro, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::CurvedTextMeshPro>(value));
}
constexpr ::HMUI::CurvedTextMeshPro ::GlobalNamespace::GameServerPlayerTableCell::__get__suggestedLevelText() const {
return ::cordl_internals::getInstanceField<::HMUI::CurvedTextMeshPro, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__suggestedCharacteristicIcon(::HMUI::ImageView value)  {
::cordl_internals::setInstanceField<::HMUI::ImageView, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::ImageView>(value));
}
constexpr ::HMUI::ImageView ::GlobalNamespace::GameServerPlayerTableCell::__get__suggestedCharacteristicIcon() const {
return ::cordl_internals::getInstanceField<::HMUI::ImageView, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__suggestedDifficultyText(::TMPro::TextMeshProUGUI value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::TMPro::TextMeshProUGUI>(value));
}
constexpr ::TMPro::TextMeshProUGUI ::GlobalNamespace::GameServerPlayerTableCell::__get__suggestedDifficultyText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__emptySuggestedLevelText(::HMUI::CurvedTextMeshPro value)  {
::cordl_internals::setInstanceField<::HMUI::CurvedTextMeshPro, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::CurvedTextMeshPro>(value));
}
constexpr ::HMUI::CurvedTextMeshPro ::GlobalNamespace::GameServerPlayerTableCell::__get__emptySuggestedLevelText() const {
return ::cordl_internals::getInstanceField<::HMUI::CurvedTextMeshPro, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__suggestedModifiersList(::GlobalNamespace::GameplayModifierInfoListItemsList value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifierInfoListItemsList, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameplayModifierInfoListItemsList>(value));
}
constexpr ::GlobalNamespace::GameplayModifierInfoListItemsList ::GlobalNamespace::GameServerPlayerTableCell::__get__suggestedModifiersList() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifierInfoListItemsList, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__emptySuggestedModifiersText(::HMUI::CurvedTextMeshPro value)  {
::cordl_internals::setInstanceField<::HMUI::CurvedTextMeshPro, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::CurvedTextMeshPro>(value));
}
constexpr ::HMUI::CurvedTextMeshPro ::GlobalNamespace::GameServerPlayerTableCell::__get__emptySuggestedModifiersText() const {
return ::cordl_internals::getInstanceField<::HMUI::CurvedTextMeshPro, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__mutePlayerButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::GameServerPlayerTableCell::__get__mutePlayerButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__kickPlayerButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::GameServerPlayerTableCell::__get__kickPlayerButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__useBeatmapButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::GameServerPlayerTableCell::__get__useBeatmapButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__useModifiersButton(::UnityEngine::UI::Button value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UI::Button>(value));
}
constexpr ::UnityEngine::UI::Button ::GlobalNamespace::GameServerPlayerTableCell::__get__useModifiersButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__useBeatmapButtonHoverHint(::HMUI::HoverHint value)  {
::cordl_internals::setInstanceField<::HMUI::HoverHint, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::HoverHint>(value));
}
constexpr ::HMUI::HoverHint ::GlobalNamespace::GameServerPlayerTableCell::__get__useBeatmapButtonHoverHint() const {
return ::cordl_internals::getInstanceField<::HMUI::HoverHint, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__muteToggle(::HMUI::ButtonSpriteSwapToggle value)  {
::cordl_internals::setInstanceField<::HMUI::ButtonSpriteSwapToggle, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::ButtonSpriteSwapToggle>(value));
}
constexpr ::HMUI::ButtonSpriteSwapToggle ::GlobalNamespace::GameServerPlayerTableCell::__get__muteToggle() const {
return ::cordl_internals::getInstanceField<::HMUI::ButtonSpriteSwapToggle, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__statusImageView(::HMUI::ImageView value)  {
::cordl_internals::setInstanceField<::HMUI::ImageView, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::ImageView>(value));
}
constexpr ::HMUI::ImageView ::GlobalNamespace::GameServerPlayerTableCell::__get__statusImageView() const {
return ::cordl_internals::getInstanceField<::HMUI::ImageView, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__readyIcon(::UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<::UnityEngine::Sprite, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Sprite>(value));
}
constexpr ::UnityEngine::Sprite ::GlobalNamespace::GameServerPlayerTableCell::__get__readyIcon() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__spectatingIcon(::UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<::UnityEngine::Sprite, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Sprite>(value));
}
constexpr ::UnityEngine::Sprite ::GlobalNamespace::GameServerPlayerTableCell::__get__spectatingIcon() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__hostIcon(::UnityEngine::Sprite value)  {
::cordl_internals::setInstanceField<::UnityEngine::Sprite, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Sprite>(value));
}
constexpr ::UnityEngine::Sprite ::GlobalNamespace::GameServerPlayerTableCell::__get__hostIcon() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__gameplayModifiers(::GlobalNamespace::GameplayModifiersModelSO value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiersModelSO, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::GameplayModifiersModelSO>(value));
}
constexpr ::GlobalNamespace::GameplayModifiersModelSO ::GlobalNamespace::GameServerPlayerTableCell::__get__gameplayModifiers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiersModelSO, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set_kickPlayerEvent(::System::Action_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Action_1<int32_t>, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<int32_t>>(value));
}
constexpr ::System::Action_1<int32_t> ::GlobalNamespace::GameServerPlayerTableCell::__get_kickPlayerEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<int32_t>, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set_useBeatmapEvent(::System::Action_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Action_1<int32_t>, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<int32_t>>(value));
}
constexpr ::System::Action_1<int32_t> ::GlobalNamespace::GameServerPlayerTableCell::__get_useBeatmapEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<int32_t>, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set_useModifiersEvent(::System::Action_1<int32_t> value)  {
::cordl_internals::setInstanceField<::System::Action_1<int32_t>, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<int32_t>>(value));
}
constexpr ::System::Action_1<int32_t> ::GlobalNamespace::GameServerPlayerTableCell::__get_useModifiersEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<int32_t>, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__buttonBinder(::HMUI::ButtonBinder value)  {
::cordl_internals::setInstanceField<::HMUI::ButtonBinder, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HMUI::ButtonBinder>(value));
}
constexpr ::HMUI::ButtonBinder ::GlobalNamespace::GameServerPlayerTableCell::__get__buttonBinder() const {
return ::cordl_internals::getInstanceField<::HMUI::ButtonBinder, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::GameServerPlayerTableCell::__set__getLevelEntitlementCancellationTokenSource(::System::Threading::CancellationTokenSource value)  {
::cordl_internals::setInstanceField<::System::Threading::CancellationTokenSource, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Threading::CancellationTokenSource>(value));
}
constexpr ::System::Threading::CancellationTokenSource ::GlobalNamespace::GameServerPlayerTableCell::__get__getLevelEntitlementCancellationTokenSource() const {
return ::cordl_internals::getInstanceField<::System::Threading::CancellationTokenSource, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::GameServerPlayerTableCell::add_kickPlayerEvent(::System::Action_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "add_kickPlayerEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::GameServerPlayerTableCell::remove_kickPlayerEvent(::System::Action_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "remove_kickPlayerEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::GameServerPlayerTableCell::add_useBeatmapEvent(::System::Action_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "add_useBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::GameServerPlayerTableCell::remove_useBeatmapEvent(::System::Action_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "remove_useBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::GameServerPlayerTableCell::add_useModifiersEvent(::System::Action_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "add_useModifiersEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::GameServerPlayerTableCell::remove_useModifiersEvent(::System::Action_1<int32_t> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "remove_useModifiersEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::GlobalNamespace::GameServerPlayerTableCell::SetData(::GlobalNamespace::IConnectedPlayer connectedPlayer, ::GlobalNamespace::ILobbyPlayerData playerData, bool hasKickPermissions, bool allowSelection, ::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> getLevelEntitlementTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILobbyPlayerData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, connectedPlayer, playerData, hasKickPermissions, allowSelection, getLevelEntitlementTask);
}
 void ::GlobalNamespace::GameServerPlayerTableCell::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::GameServerPlayerTableCell::HandleKickPlayerButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "HandleKickPlayerButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::GameServerPlayerTableCell::HandleUseBeatmapButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "HandleUseBeatmapButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::GameServerPlayerTableCell::HandleUseModifiersButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "HandleUseModifiersButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::GameServerPlayerTableCell::SetBeatmapUseButtonEnabledAsync(::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus> getLevelEntitlementTask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            "SetBeatmapUseButtonEnabledAsync",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::GlobalNamespace::____GlobalNamespace__AdditionalContentModel__EntitlementStatus>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, getLevelEntitlementTask);
}
// Ctor Parameters []
 ::GlobalNamespace::GameServerPlayerTableCell::GameServerPlayerTableCell()  : ::GlobalNamespace::TableCellWithSeparator(THROW_UNLESS(::il2cpp_utils::New<GameServerPlayerTableCell>())) {}
 void ::GlobalNamespace::GameServerPlayerTableCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerPlayerTableCell>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
