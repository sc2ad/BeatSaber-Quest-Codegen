#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_impl.hpp"
namespace {
#include "UnityEngine/UIElements/zzzz__DropdownMenuAction_def.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuEventInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status::____UnityEngine__UIElements__DropdownMenuAction__Status(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status  ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status::None{0};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status  ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status::Normal{1};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status  ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status::Disabled{2};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status  ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status::Checked{4};
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status  ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status::Hidden{8};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction.set_status
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenuAction::*)(::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status)>(&::UnityEngine::UIElements::DropdownMenuAction::set_status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c8fc88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction>::get(),
                            "set_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction.set_eventInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenuAction::*)(::UnityEngine::UIElements::DropdownMenuEventInfo)>(&::UnityEngine::UIElements::DropdownMenuAction::set_eventInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c8fc90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction>::get(),
                            "set_eventInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuEventInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction.set_userData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenuAction::*)(::bs_hook::Il2CppWrapperType)>(&::UnityEngine::UIElements::DropdownMenuAction::set_userData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c8fc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction>::get(),
                            "set_userData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenuAction::*)(::StringW, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction>, ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction,::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status>, ::bs_hook::Il2CppWrapperType)>(&::UnityEngine::UIElements::DropdownMenuAction::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2c8fca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction,::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuAction.UpdateActionStatus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenuAction::*)(::UnityEngine::UIElements::DropdownMenuEventInfo)>(&::UnityEngine::UIElements::DropdownMenuAction::UpdateActionStatus)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2c8fce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction>::get(),
                            "UpdateActionStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuEventInfo>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::UIElements::DropdownMenuAction::__set__name_k__BackingField(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::UIElements::DropdownMenuAction::__get__name_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DropdownMenuAction::__set__status_k__BackingField(::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status>(value));
}
constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status ::UnityEngine::UIElements::DropdownMenuAction::__get__status_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DropdownMenuAction::__set__eventInfo_k__BackingField(::UnityEngine::UIElements::DropdownMenuEventInfo value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::DropdownMenuEventInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::UIElements::DropdownMenuEventInfo>(value));
}
constexpr ::UnityEngine::UIElements::DropdownMenuEventInfo ::UnityEngine::UIElements::DropdownMenuAction::__get__eventInfo_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::DropdownMenuEventInfo, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DropdownMenuAction::__set__userData_k__BackingField(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType ::UnityEngine::UIElements::DropdownMenuAction::__get__userData_k__BackingField() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DropdownMenuAction::__set_actionCallback(::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction> value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction>>(value));
}
constexpr ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction> ::UnityEngine::UIElements::DropdownMenuAction::__get_actionCallback() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::UIElements::DropdownMenuAction::__set_actionStatusCallback(::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction,::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status> value)  {
::cordl_internals::setInstanceField<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction,::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction,::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status>>(value));
}
constexpr ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction,::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status> ::UnityEngine::UIElements::DropdownMenuAction::__get_actionStatusCallback() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction,::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::UnityEngine::UIElements::DropdownMenuAction::set_status(::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction>::get(),
                            "set_status",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::DropdownMenuAction::set_eventInfo(::UnityEngine::UIElements::DropdownMenuEventInfo value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction>::get(),
                            "set_eventInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuEventInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::UnityEngine::UIElements::DropdownMenuAction::set_userData(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction>::get(),
                            "set_userData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "actionName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "actionCallback", ty: "::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction>", modifiers: "", def_value: None }, CppParam { name: "actionStatusCallback", ty: "::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction,::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status>", modifiers: "", def_value: None }, CppParam { name: "userData", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: Some("csnull") }]
 ::UnityEngine::UIElements::DropdownMenuAction::DropdownMenuAction(::StringW actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction> actionCallback, ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction,::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status> actionStatusCallback, ::bs_hook::Il2CppWrapperType userData)  : ::UnityEngine::UIElements::DropdownMenuItem(THROW_UNLESS(::il2cpp_utils::New<DropdownMenuAction>(actionName, actionCallback, actionStatusCallback, userData))) {}
/// @param userData: ::bs_hook::Il2CppWrapperType (default: csnull)
 void ::UnityEngine::UIElements::DropdownMenuAction::_ctor(::StringW actionName, ::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction> actionCallback, ::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction,::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status> actionStatusCallback, ::bs_hook::Il2CppWrapperType userData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::UIElements::DropdownMenuAction>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::UIElements::DropdownMenuAction,::UnityEngine::UIElements::____UnityEngine__UIElements__DropdownMenuAction__Status>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, actionName, actionCallback, actionStatusCallback, userData);
}
 void ::UnityEngine::UIElements::DropdownMenuAction::UpdateActionStatus(::UnityEngine::UIElements::DropdownMenuEventInfo eventInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuAction>::get(),
                            "UpdateActionStatus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DropdownMenuEventInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventInfo);
}
} // end anonymous namespace
